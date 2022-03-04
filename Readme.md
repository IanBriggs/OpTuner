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

The commands shown here are replicated in the file `AEC-sanity.sh`, the purpose of the commands are explained here.

To check that OpTuner and the graphing capabilities work you can run OpTuner directly on a benchmark.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./bin/optuner benchmarks/exp1x.fpcore

OpTuner will then run for around a minute displaying selected configuration costs and error as they are found.
Due to how Z3's Pareto search works the results are found in a jumbled order, your results may be in a different order.
If you have remeasured function costs your results will also likely vary.
The first line of output is a print coming from Z3.
After the configurations is a breakdown of tool runtime.
Example output:

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

After OpTuner has ran we can time the selections and graph those results.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    cd implementations/timing
    mkdir -p json
    ./bin/time_exp1x > json/time_exp1x.json
    ./scripts/pink_graph.py json/time_exp1x.json

Timing will take around two minutes.
The graphing script will output how many points were removed for not being Pareto optimal.
Example output:

```
Total points: 12
Total skipped: 2
```

You can view the generated graphs using `eog`

Continuing from the above directory.

    eog aggregate.png zoomed_aggregate.png



## Claims

### Large-scale Evaluation Results

OpTuner is applied to a benchmark suite in section 8 of the paper. This is used to evaluate the tool for both its effectiveness in acomplishing the task of implementation selection and to determine the runtime of the tool itself. The benchmarks themselves come from the FPBench suite and the benchmark suite for the Herbie tool.

Multiple claims are made about the tool usage and effectiveness. In this artifact the evaluator can run OpTuner on the benchmark suite to determine the tool's runtime, as well as measure the speeds of OpTuner's implementation selections. This information when graphed, similarly to figure 9 in the paper, shows overall patterns in the results. In section 8.2 detailed examination of selected benchmarks claim exact implementation selections made by OpTuner, due to performance non-portability these will not be reproduced in the artifact.

The evaluator can:

- Examine the benchmarks used by OpTuner
- Run OpTuner on the benchamarks
- Measure the speed of OpTuner's selected configurations
- Verify that around 26 percent of points generated are removed due to differences between the linear models and more accurate measurements
- Verify that some configurations more accurate than using GLibC's implementations
- Verify that some configurations speed up compuations with increased error of less than a decimal digit
- Verify that large increases in error correspond to faster runtimes
- Verify that between these extremes are multiple points that trade off speed and accuracy
- Verify that OpTuner's average runtime is on the range of a few minutes
- Verify that most benchmarks finish in under five minutes


### Supported Functions

Section 4 of the paper describes that the choices made when implementing a mathematical function lead to differences in speed and accuracy of the resulting implementation, and that OpTuner comes equipped with a selection of implementations that span both speed and accuracy.

Since the runtime of code depends on the machine being used the evaluator may opt into recalibrating OpTuner's measured runtimes to the system being used. We expect the differences to be minor due to running in a virtual machine.

To demonstrate this span the error and runtime of the equipped implementations these values can be plotted to create a similar set of graphics to Figure 7 in the paper. The runtimes of the various implementations may change from machine to machine, and as such the evaluator may optionally recalibrate the costs which OpTuner uses in its decision making. Apart from the mainstream math library implementations OpTuner also uses generated implementations utilizing Metalibm. Generating these implementations is outside the scope of the Artifact evaluation, but both the generated C code and the generation code may be examined.

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
        :name "logexp"
        :description "Generated by FPTaylor"
        :precision binary64
        :pre (<= 0 x 8)
        (log (+ 1 (exp x))))
```

This benchmark computes $$log(exp(x)+1)$$ for $$x \in [0,8]$$.
The domain of this function is given as metadata corresponding to the `:pre` tag.



### Run OpTuner on the benchamarks

To use OpTuner on the majority of benchmarks run the bash script `AEC-benchmarks-run.sh`.
This will run OpTuner on all benchmarks except the complex sine benchmark, due to its unusually long runtime.
In addition the runtime of OpTuner is collected in `./logs/tool_time.txt`.
This script should run for approximately <> minutes.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./AEC-benchmark-run.sh

You will see the commands echoed as they run.
The commands in this script are not repeated here and must be run from the script.
Partial example output:

```
<>
...
```


### Measure the speed of OpTuner's selected configurations

OpTuner's selections have now been made, but we need to evaluate their actual runtime.
The generated configuration are timed by running the `AEC-benchmarks-time.sh` script.
This script should run for approximately <> minutes.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./AEC-benchmark-time.sh

You will see the commands echoed as they run.
The commands in this script are not repeated here and must be run from the script.
Partial example output:

```
<>
...
```


### Graph Results and Evaluate Remaining Claims

Generating the graphs from this data is done similarly to the sanity test.
This will create graphs in the current directory similar to Figure 9 parts a and b, called `zoomed_aggregate.png` and `aggregate.png`.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    cd implementations/timing
    ./scripts/pink_graph.py json/time_*.json


This will report the number of points which turned out to be non-pareto due to the linear models.
You should expect a value near 26%, with a little variance due to machine performance differences.

```
<>
```

Looking at the generated plots these features should be present:

- There are points to the left of 1 on the x-axis, these indicate more accurate configurations than using GLibC
- In the zoomed graph, which spans one decimal digit of error over GLibC, there are points corresponding to non-negligable speedups
- In the unzoomed graph some points reach large speedups toward the right hand side of the graph
- Both graphs show many configurations in between these extremes forming a smooth tradeoff


To generate the CDF, which is Figure 9 part c, run the following command.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./bin/create-cdf.py log/tool_time.txt

This will report the average runtime and create `cdf.png` in the current directory.
You should expect an average runtime on the range of <>

Example output:
```
...
```

Looking at the generated plot you should see that most benchmarks finish in under five minutes, which is the region highlighted by the inset plot.



## Supported Functions

### (optional) Re-calibrating OpTuner

For the most part, this artifact is set up, with OpTuner installed and ready to go. However, for OpTuner to work correctly, it needs to have accurate cost functions for the mathematical library implementations it knows about. This requires a "calibration" step, since this will differ between machines. Note that, since you are running OpTuner in a virtual machine, it's best to ensure that you are not running any other applications during this calibration step, to ensure accurate timings.

The artifact is calibrated to the authors' machines. This means that the calibration step can be skipped, but that this might lead to strange or unusual results if the evaluators' machines are very different from the authors'.

To calibrate, complete the following steps, which are are replicated in the file `AEC-remeasure.sh`.

First, starting from the directory `/home/ubuntu/Desktop/OpTuner`, run the following:

    cd implementations/timing
    make

This generates a binary called `bin/time_all` which times each function implementation that OpTuner ships (see above).
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

One thing that *can* differ is that some of the green dots may be quite a bit faster or slower relative to others on your machine. This is because the GLibC library actually contains many different implementations that it can choose between based on the availability of various CPU instructions, and your machine may have more or fewer of them than ours. (The biggest factor is the quality of support for the fused multiply-add instruction.)


### Examine Generated Code

## Case Study

Since we utilized SPEC2017 as a source of build system, timing harness, and quality metric we cannot reproduce the results from the paper.
As a proxy we can look at the expression level accuracy-speed tradeoff and generate images using the current release of POV-Ray.

The expression used in the case study is part of the benchmarks ran in the above steps.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./bin/create-case-study-graph.py implementations/timing/json/time_povray_photons.json

This will create a graph similar to Figure 3 a in the file `case_study_expression.png`

Located on the Desktop is a folder named `CaseStudy`, inside it is three versions of POV-Ray.
One utilizes GLibC's sin and cos, one uses the table based versions, and the third uses the versions selected by OpTuner.
These are based off POV-Ray version 3.7.0.10.
The version of POV-Ray used in SPEC2017 is between 3.6 and 3.7, but this version does not seem to be archived anywhere outside of SPEC.
The code which we examined is still present.
Notably the image rendered by this newer version is much brighter.

The following will generate three `tga` files corresponding to the different versions.
Starting from the directory `/home/ubuntu/Desktop/CaseStudy`

    cd glibc_povray/grenadine
    time ../unix/povray SPEC-benchmark-ref.ini
    mv SPEC-benchmark.tga ../../glibc_render.tga

    cd ../../table_povray/grenadine
    time ../unix/povray SPEC-benchmark-ref.ini
    mv SPEC-benchmark.tga ../../table_render.tga

    cd ../../optuner_povray/grenadine
    time ../unix/povray SPEC-benchmark-ref.ini
    mv SPEC-benchmark.tga ../../optuner_render.tga

To see the differences between the GLibC baseline the images can be compared.

    compare glibc_render.tga table_render.tga table_diff.tga
    compare glibc_render.tga optuner_render.tga optuner_diff.tga





# Further Exploration of OpTuner

Link to FPCore standard and explain limitations

How to run Optuner on a few file

Where is the OpTuner source code

Where in the source code are some key interesting steps:

- Calling FPTaylor (as in, wherever we get the error model)
- Calling Z3 (as in, building the ILP problem)
- Where in the code we generate the range constraints
