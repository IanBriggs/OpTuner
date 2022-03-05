# Claims

1 Results
  - Pink plots
  - Individual exps detailed analysis
  - CDF of runtime
  - % pts filtered out

2 Functions
  - Function plots
  - Recalibrate speed
  - Implementation source code
  - Examine generated C code

3 Case study
 - POV-Ray Source
 - Error Model
 - Results of running OpTuner
 - Results of end-to-end





# Artifact Download and Setup

This artifact is distributed as a VirtualBox VDI file accompanied by this documentation.
To run this image a modern x86-64 based computer and the [VirtualBox](https://www.virtualbox.org/) software is recommended.
Note that M1 Apple products are not supported.

The image contains a standard instance of the Ubuntu 20.04LTS operating system.
In the Desktop directory is the OpTuner repository which has already been set up and requires no additional downloads.
The login name and password are both `ubuntu`.

The file [ImagePreperation.md](ImagePreperation.md) contains instructions on how the artifact virtual machine was prepared.

## Installation, Setup, and Sanity Testing

This section walks the evaluator through running OpTuner on a single small benchmark, with the purpose of each command explained. The commands are also replicated in the file `AEC-sanity.sh`.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`, run OpTuner on the `exp1x` benchmark:

    ./bin/optuner benchmarks/exp1x.fpcore

OpTuner will run for around a minute, printing selected configuration costs and errors to the console as they are found.
Due to how Z3's Pareto search works, the results are found in a jumbled order, so your results may be in a different order,
but will otherwise look similar to those below:


```
; check_sat line: 3070 position: 19
model_cost model_error
3.4143400646186346	6.481777551414871e-14
2.5355912383282937	1.2764418379611066e-12
1.6428011996837635	1.494160720975865e-07
1.8974958429248558	4.05502326187133e-09
2.8866020335417852	9.22889202029345e-14
3.1816809188672606	6.528318293162588e-14
54.06340150491056	6.304835181071573e-14
1.3652675580375442	1.1687720475158836
1.3664896773860575	0.06525020231226694
1.5939288401735028	4.848601333481827e-06
1.5932543412792048	0.0031926825438836058
10.708267821707182	6.333632570239164e-14

Source  	Time
FPTaylor	58.088155411183834
Gelpia  	0.7393423281610012
Z3      	2.7018186915665865
Other   	2.0648984611034393
Total   	63.59421489201486
```

The first line comes from Z3 and can be ignored. Then follow the cost and accuracy of configurations found by OpTuner, and finally a breakdown of OpTuner's runtime. In this case, OpTuner finds 12 configurations in about 63 seconds. (Of course, the runtime will differ on your machine. If you have recalibrated costs for your machine, as described below, your results may also change.)

After OpTuner has run, we can validate its chosen configurations and graph those results.

To do so, starting from the directory `/home/ubuntu/Desktop/OpTuner` run these commands:

    cd implementations/timing
    mkdir -p json
    ./bin/time_exp1x > json/time_exp1x.json
    ./scripts/pink_graph.py json/time_exp1x.json

The first two commands set up directories, and the third command times each of OpTuner's chosen configurations.
Timing takes around two minutes.
The fourth command runs the graphing script, which writes saves the plot to `aggregate.png` and also a zoomed-in version to `zoomed_aggregate.png`.

You can view the generated graphs using any image viewer. For example, you can use `eog`:

    eog aggregate.png zoomed_aggregate.png

The graphing script also outputs how many points were removed for not being Pareto optimal:

```
Total points: 12
Total skipped: 2
```

This means that of the 12 configurations, 10 were discovered to not be pareto-optimal after re-verifying and re-timing the resulting configurations.


## Claims

### Large-scale Evaluation Results

OpTuner is applied to a benchmark suite in section 8 of the paper. This is used to evaluate the tool for both its effectiveness at implementation selection and to determine the runtime of the tool itself. The benchmarks themselves come from the FPBench suite and the benchmark suite for the Herbie tool. Multiple claims are made about the tool usage and effectiveness.

In this artifact the evaluator can run OpTuner on the benchmark suite to determine the tool's runtime, as well as measure the speeds of OpTuner's selected implementation configurations. This information can be graphed and compared to figures 9 and 10 in the paper. However, note that the examination of selected benchmarks, described in the text of section 8.2, cannot be reproduced in the artifact due to performance non-portability.

The evaluator can:

- Examine the benchmarks used by OpTuner
- Run OpTuner on the benchamarks
- Measure the speed of OpTuner's selected configurations
- Verify that around 26 percent of points generated are removed due to differences between the linear models and more accurate measurements
- Verify that some configurations more accurate than using GLibC's implementations
- Verify that some configurations are faster than GLibC while increasing error by less than one decimal digit
- Verify that large increases in error correspond to faster runtimes
- Verify that between these extremes are multiple points that trade off speed and accuracy
- Verify that OpTuner's average runtime is on the range of a few minutes
- Verify that most benchmarks finish in under five minutes


### Supported Functions

Section 4 of the paper describes how choices made when implementing a mathematical function lead to differences in speed and accuracy of the resulting implementation, and that OpTuner comes equipped with a selection of implementations that span both speed and accuracy.

In this artifact, the supported implementations can be plotted to create a similar set of graphics to Figure 7 in the paper. However, note that due to limitations of the virtualization software used, the version of OpTuner in this artifact has support for AMD's Libm disabled. The evaluator can also examine the parameterized libraries (implemented using MetaLibm) supported by OpTuner. Note that the artifact does not actually support verifying these implementations, but both the generated C code and the generation code may be examined.

One tricky aspect to verifying OpTuner's claims about its supported library functions is that the runtimes of the various implementations may change from machine to machine, and as such the artifact supports recalibrating these costs. This will change the results to cause OpTuner to get better results on the evaluator's machine. That said, this step is time-consuming and optional.

The evaluator can:

- (optionally) Recalibrate OpTuner to the machine being used
- Verify that OpTuner's equipped implementations span speed and accuracy
- Verify that the most accurate implementations are the slowest by far
- Verify that removing range reduction leads to an implementation speedup
- Examine the Metalibm based function generation code
- Examine the generated C code


### Case study

Section 3 of the paper describes a case study using OpTuner to improve the speed and accuracy of the POV-Ray ray tracer, focusing on the version of POV-Ray distributed with SPEC 2017. In this artifact, we're unable to provide an exact comparison for this case study because SPEC 2017 cannot be redistributed. Instead, the artifact uses POV-Ray version 3.7 (reasonably similar to the version in SPEC), which yields a slightly different image but very similar differences between POV-Ray's `sin` and `cos` implementation and OpTuner's recommended configuration. We have modified the POV-Ray source code only to change the storage format for angles, since (as discussed in Section 10) OpTuner does not currently support input types other than double-precision floating-point. 

At a high level, this artifact allows the evaluator to validate the paper's description of the POV-Ray source code, run OpTuner on the photon incidence computation, and verify that the OpTuner configuration highlighted in the text (the red star in Figure 3) is indeed both faster and more accurate than an un-tuned POV-Ray. Note that Figure 3(b) in the paper cannot be reproduced by the evaluator, for a couple of reasons. First, we cannot redistribute the code to compute SSIM for images, since that code is part of SPEC. Second, that figure compares dozens of modified POV-Ray instances, and our tools for generating these modified instances all rely on tooling from SPEC. Finally, building and running each of the modified instances would take hours.

The artifact allows the evaluator to test a couple of key claims. Specifically, the evaluator can:

- Verify that POV-Ray includes an implementation of `sin` and `cos` specialized to a narrow input range
- Verify that POV-Ray includes a "photon incidence" computation analogous to that described in the paper
- Verify our transcription of the photon incidence computation to FPCore, OpTuner's input format
- Run OpTuner on this input and compare the results to Figure XXX(a) in the paper
- Compare OpTuner's linear error model to that given in Equation XXX in the paper
- Run three versions of POV-Ray: with GLibC to establish a ground truth, un-tuned, and OpTuner-tuned
- Verify that the three versions differ only in the `sin` and `cos` implementations used
- Compare the output images for speed and quality (similar to Figure XXX in the paper)
- Verify that the OpTuner-tuned version is both faster than the untuned version, and matches the ground truth










# Evaluation

## Large-scale Evaluation Results

### Examine the benchmarks used by OpTuner

The benchmarks used by OpTuner are present in the `/home/ubuntu/Desktop/OpTuner/benchmarks` directory.
You can use your favorite editor (emacs, vim, and vscode have been installed) to view these files.
The file used in the sanity test is `exp1x.fpcore` whose contents are below.

```scheme
;; -*- mode: scheme -*-

(FPCore (x)
        :name "exp1x"
        :description "Generated by FPTaylor"
        :precision binary64
        :pre (<= 0.0078125 x 0.5)
        (/ (- (exp x) 1) x))
```

This benchmark computes ![formula](https://render.githubusercontent.com/render/math?math=(\exp(x)-1)/x)
for ![formula](https://render.githubusercontent.com/render/math?math=x \in [0,8]).
The domain of this function is given as metadata corresponding to the `:pre` tag.



### Run OpTuner on the benchmarks

To use OpTuner on the majority of benchmarks run the bash script `AEC-benchmarks-run.sh`.
This will run OpTuner on all benchmarks except the complex sine benchmark (which is removed due to its unusually long runtime).
In addition the runtime of OpTuner is collected in `./logs/tool_time.txt`.
This script should run for approximately XXX minutes.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`, run this:

    ./AEC-benchmark-run.sh

You will see the commands echoed as they run.
The commands in this script are not repeated here and must be run from the script.
Partial example output:

```
<>
...
```

The evaluator should look out for clear error messages printed the console, which would indicate that something has gone wrong.


### Measure the speed of OpTuner's selected configurations

OpTuner's selections have now been made, but we need to evaluate their actual runtime.
The generated configurations are timed by running the `AEC-benchmarks-time.sh` script.
This script should run for approximately XXX minutes.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./AEC-benchmark-time.sh

You will see the commands echoed as they run.
The commands in this script are not repeated here and must be run from the script.
Partial example output:

```
<>
...
```

The evaluator should look out for clear error messages printed the console, which would indicate that something has gone wrong.


### Graph Results and Evaluate Remaining Claims

Once OpTuner has made its selections and those configurations have been timed,
graphs can be generated from this data similarly to the sanity test.
This creates graphs in the current directory called `zoomed_aggregate.png` and `aggregate.png`,
similar to Figure 9 parts (a) and (b).

Starting from the directory `/home/ubuntu/Desktop/OpTuner`, run:

    cd implementations/timing
    ./scripts/pink_graph.py json/time_*.json

Once this has completed, the evaluator should be able to look at the generated files, for example using `eog`, and verify:

- There are points to the left of 1 on the x-axis, these indicate more accurate configurations than using GLibC
- In the zoomed graph, which spans one decimal digit of error over GLibC, there are points corresponding to non-negligable speedups
- In the unzoomed graph some points reach large speedups toward the right hand side of the graph
- Both graphs show many configurations in between these extremes forming a smooth tradeoff

The graphing script will also report the number of points which turned out to be non-pareto due to the linear models.
You should expect roughly 26% of points to be non-pareto, with the variance due to machine performance differences and likely in the range of 20–30%.

```
<>
```

To generate the CDF, analogous to the paper's Figure 9(c), start in the directory `/home/ubuntu/Desktop/OpTuner` and run the following command:

    ./bin/create-cdf.py log/tool_time.txt

This will report the average runtime and create `cdf.png` in the current directory.
You should expect an average runtime on the range of XXX

Example output:
```
...
```

Looking at the generated plot you should see that most benchmarks finish in under five minutes, which is the region highlighted by the inset plot.



## Supported Functions

### (optional) Re-calibrating OpTuner

For the most part, this artifact is set up, with OpTuner installed and ready to go. However, for OpTuner to work correctly, it needs to have accurate cost functions for the mathematical library implementations it knows about. This requires a "calibration" step, since this will differ between machines.

The artifact is calibrated to the authors' machines. This means that the calibration step can be skipped, but that this might lead to strange or unusual results if the evaluators' machines are very different from the authors'. We expect that most evaluators will not need to recalibrate OpTuner. If you do, note that, since you are running OpTuner in a virtual machine, it's best to ensure that you are not running any other applications outside the VM during this calibration step, to ensure accurate timings.

To calibrate, complete the following steps, which are are replicated in the file `AEC-remeasure.sh`.

First, starting from the directory `/home/ubuntu/Desktop/OpTuner`, run the following:

    cd implementations/timing
    make

This generates a binary called `bin/time_all` which times each function implementation that OpTuner ships.
The binary runs for about 28 minutes and generates a JSON file called `raw_counts.json`:

    ./bin/time_all > raw_counts.json

After this data is converted to an average runtime and placed in the costs file, `implementations/all_costs.json`

    ./scripts/raw_counts_to_cost.py raw_counts.json > ../all_costs.json
    
OpTuner should now be calibrated for your machine.


### Implementation Graphs

OpTuner's selection of supported function implementations can be plotted with this command:

    ./bin/create-function-graphs.py implementations/timing/all_costs.json implementations/timing/all_specifications.json

This will read cost and error values from the two JSON files listed as arguments, and generate five files named `<func>_error_vs_cost.png`, which are formatted identically to Figure 7 in the paper. We recommend evaluators open each file and compare it visually to the analogous plot in Figure 7.

Note that the vertical dimension of this plot depends on timing information, which going to be different in the virtual machine compared to the machine we used for the paper's experiments. However, a few features should be shared among both plots:

- The implementations should span a range of accuracy values from least to most accurate
- There should be a green triangle, in the top-right corner, representing the `CRLibm` library implementation. These implementations are maximally accurate (correctly rounded) and also very slow.
- The green dots, corresponding to library implementations, should appear in approximately two groupings horizontally. One should be along the right edge (these are double-precision library implementations) and another approximately in the middle (these are single-precision library implementations).
- The blue, cyan, yellow, and (for `exp`) purple dots should span a wide range of accuracies with steadily increasing cost and accuracy increases. These are the various parameterized implementations used by OpTuner
- The blue and cyan dots should be lower (meaning faster) than the yellow ones---the blue and cyan implementations do not use range reduction, while the yellow ones use a naive range reduction scheme, so the blue ones are valid over a narrower input range.

One thing that *can* differ is that some of the green dots may be quite a bit faster or slower relative to others on your machine. This is because the GLibC library actually contains many different implementations that it can choose between based on the availability of various CPU instructions, and your machine may have more or fewer of them than ours. (The biggest factor is the quality of support for fused multiply-adds.)


### Examine Generated Code

The directory `/home/ubuntu/Desktop/OpTuner/implementations/metalibm` contains code relating to the generated implementations.
Specifically the subdirectories `scripts` and `my_scripts` contain the python code which generate implementations and bound their error.
The `scripts` directory contains the driver for the Kalray `exp` implementations which uses gappa to bound error.
The `my_scripts` directory contains drivers for our generated sin, cos, tan, exp, and log implementations named `ml2_<func>.py`.
There are two aditional files that generate sin and cos for a wider initial interval named `ml2_wide_<func>.py`.

Taking a deeper dive into the file `ml2_cos.py` we can see some interesting traits.
The function `generate_scheme` creates the implementation in Metalibm's system which will later become C code.
On lines 66 is a branch which determines if input range reduction will be used.
In the true path the input is reduced to the range 0 to pi/2.
Lines 97 to 109 contain the code which generates the polynomial approximation. 
Line 111 performs the reconstruction if range reduction was used.

lines 97 to 109:

```python
        approx_interval = sollya.Interval(-2**-10, n_hpi + 2**-10)
        approx_func = sollya.cos(sollya.x)
        builder = Polynomial.build_from_approximation
        sollya.settings.prec = 2**10
        poly_object = builder(approx_func,
                              range(0, self.poly_degree+1, 2),
                              [self.precision]*(self.poly_degree+1),
                              approx_interval,
                              sollya.relative)
        self.poly_object = poly_object
        schemer = PolynomialSchemeEvaluator.generate_horner_scheme
        poly = schemer(poly_object, z)
        self.poly = poly
```

The function `determine_error` on line 142 calculates the error of the generated function.
It uses many helper functions defined within itself, but is most clearly read by skipping to line 356.
Here the total domain is determined as either the poynomial's input if no reduction was used, or a domain 40 times larger if reduction was used.
The domain is then split into many smaller pieces on line 363.
Each piece is then analyzed for error in the for loop starting on line 365.
Finally the errors are combined into a specification either on line 393 if no range reduction was used or 401 if reduction was used.

Lines 356 to 374:

```python
        if self.skip_reduction:
            starting_domain = sollya.Interval(-n_hpi, n_hpi)
        else:
            reduction_k = 40
            starting_domain = sollya.Interval(-reduction_k*n_hpi, reduction_k*n_hpi)

        # analyse each piece
        in_domains = split_domain(starting_domain, self.slivers)
        errors = list()
        for I in in_domains:
            if self.skip_reduction:
                rel_err, abs_err = generate_fptaylor(I)
            else:
                rel_err, abs_err = generate_reduction_fptaylor(I)
            print("{}\t{}\t{}\t{}".format(float(sollya.inf(I)),
                                          float(sollya.sup(I)),
                                          float(abs_err),
                                          float(rel_err)))
            errors.append((I, abs_err, rel_err))
```

These scripts generate the various implemenetations found in the `src` directory of the `metalibm` subdirectory.
The generated code is rather mechanical in nature due to the machine generation, but they do include comments logging the steps taked durring generation.
The file `ml2_cos_10.c` contains a range reduced order 10 implementation of cos created by the script we just examined.
At the top is documentation noting the version of Metalibm used and the command line arguments used to create this file.
Under that is the function definition in fairly cryptic looking C.
Lines 47 to 57 are the range reduction, 58 to 68 is the polynomial evaluation, and 69 to 74 is the reconstruction.
After the function are comments; these comments are the logging print statements made durring the execution of the script.
Starting at line 118 you can see the output of the error analysis performed.
The first two values are the lower and upper bound of the input interval while the third and fourth values are the absolute and relative error on that interval.
This continues until line 1398 when the accuracy specifications are actually reported.
This version of cos has many different specifications depending on the input region being used.

Lines 1396 to 1407
```C
//62.635503530946494	62.73367830137118	7.945008911608433e-10	7.983451631012433e-10
//62.73367830137118	62.831853071795855	9.752842864113485e-10	9.752842901197485e-10
//spec: {
//spec:     "cname": "ml2_cos_10",
//spec:     "delta": 9.752835786191185e-10,
//spec:     "domain": [
//spec:         -1.5717728892948966,
//spec:         1.5717728892948966
//spec:     ],
//spec:     "epsilon": 3.293205964567392e-10,
//spec:     "operation": "cos"
//spec: }
```

## Case Study

In our case study, we used SPEC2017 for our POV-Ray source code, build system, timing harness, and quality metric. Since we cannot redistribute SPEC 2017, this artifact instead looks at the expression level accuracy-speed tradeoff and generates images using the current release of POV-Ray, version 3.7.0.10.

Note that the version of POV-Ray used in SPEC2017 is not quite identical (it seems to be a version intermediate between 3.6 and 3.7).
However, version 3.7.0.10 still contains the custom `sin` and `cos` implementations highlighted in the text. Do note that it generates slightly different images---specifically, its rendered images are much brighter. The comparison between OpTuner's suggested `sin` and `cos` and the POV-Ray developers' hand-written `sin` and `cos` is still basically the same.

The steps in the "Large-scale Evaluation" section already ran OpTuner on the expression in the case study.

To create a graph similar to Figure 3(a), start from the directory `/home/ubuntu/Desktop/OpTuner` and run:

    ./bin/create-case-study-graph.py implementations/timing/json/time_povray_photons.json

The graph is then written to the file `case_study_expression.png`. This graph should look similar to Figure 3(a), with the usual differences due to machine speed and possibly recalibration. However, should should see a set of dozens of points sloping up and to the right. Each configuration represents one suggested configuration of OpTuner. The red star will not be present since we manually highlighted that point based on the index of the configuration, which will not be reproducible. 

In this artifact, we don't provide copies of POV-Ray tuned to each of these configurations (since our tooling for generating and compiling them relies on SPEC). Instead, we provide three copies of POV-Ray in a folder named `CaseStudy` on the desktop: one utilizes GLibC's sin and cos, one uses the table based versions that the POV-Ray developers wrote, and the third one uses implementations selected by OpTuner and highlighted in the text. 

Starting with the least modified we can look at the `table_povray` version.
The cusom table based implementaion is split across multiple files.
Line 1278 in `source/backend/photons.cpp` begins the function that fills the tables with output from libm sin and cos calls.
This will be accessed as `sinCosData` when used.

If you just want to see all modified lines you can simply `grep OPTUNER source/* -r` from the `table_povray` directory.
The `photons.h` modification changes the type of theta and phi to double, from char.
In `photons.cpp` the raw angle values are stored instead of the char index of the angle, this computation is moved into the `table_sin` and `table_cos` functions.
Both `trace.cpp` and `media.cpp` have the `table_sin` and `table_cos` functions added, and later in the files these functions are called.

The two other directories, `glibc_povray` and `optuner_povray`, have the same changes made in order to store thata and phi as doubles.
The GLibC version just uses standard libm sin and cos in place of `table_sin` and `table_cos`.
OpTuner's version has the largest changes with the addition of two versions of sin and one of cos placed in both the `media.cpp` and `trace.cpp` files.

Now that we have looked at parts of POV-Ray and know the changes made we can run the three versions.
The following will generate three `tga` files corresponding to the different versions.

Starting from the directory `/home/ubuntu/Desktop/CaseStudy`, run:

    cd glibc_povray/grenadine
    time ../unix/povray SPEC-benchmark-ref.ini
    mv SPEC-benchmark.tga ../../glibc_render.tga

    cd ../../table_povray/grenadine
    time ../unix/povray SPEC-benchmark-ref.ini
    mv SPEC-benchmark.tga ../../table_render.tga

    cd ../../optuner_povray/grenadine
    time ../unix/povray SPEC-benchmark-ref.ini
    mv SPEC-benchmark.tga ../../optuner_render.tga
    
In each group of three commands, the second command runs POV-Ray and prints timing information. The evaluator should verify that the first run of POV-Ray (using GLibC) is the slowest, the second one (using the table-based implementations) is faster, and the last one (using OpTuner's suggested configuration) is even faster than that. This shows that OpTuner's suggested tuning is faster than using the table-based implementations.

To see the effect on accuracy, the difference between the GLibC baseline the images generated using the table-based and OpTuner `sin` and `cos` can be visualized using these commands:

    compare glibc_render.tga table_render.tga table_diff.tga
    compare glibc_render.tga optuner_render.tga optuner_diff.tga

The first command will generate the file `table_diff.tga`, analogous to Figure 2(a) in the paper. The second generates the file `optuner_diff.tga`, analogous to Figure 2(b) in the paper. Note that, for reasons we do not understand, on some machines the image appears to be rotated upside down by the `compare` command. It is, however, otherwise correct.

The evaluator should see that `table_diff.tga` contains many red dots, where each red dot identifies a pixel that differs between the baseline and the image generated using the table-based `sin` and `cos`. However, in `optuner_diff.tga`, these dots should be absent or very rare, meaning that the OpTuner-suggested tuning matches the baseline image.



# Further Exploration of OpTuner

Link to FPCore standard and explain limitations

How to run Optuner on a few file

Where is the OpTuner source code

Where in the source code are some key interesting steps:

- Calling FPTaylor (as in, wherever we get the error model)
- Calling Z3 (as in, building the ILP problem)
- Where in the code we generate the range constraints
