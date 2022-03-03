# Claims

## Benchmark Results

- Figure 9 part a and b demonstrate the claims of OpTuner's output quality



1 Results
  - Pink plots
  - Individual exps detailed analysis
  - CDF
  - Minor claims
    - % pts filtered out

2 Functions
  - Recalibrate speed
  - Function plots
  - Our Impls
    - Reverify
    - src in metalibm

3 Case study
 - POV-Ray Source
 - Error Model
 - Results of running OpTuner
 - Results of end-to-end





# Artifact Download and Setup

This artifact is distributed as a VirtualBox VDI file accompanied by this documentation.
To run this image a modern x86-64 based computer and the [VirtualBox](https://www.virtualbox.org/) software is recommended.

The image contains a standard instance of the Ubuntu 20.04LTS operating system.
In the Desktop directory is the OpTuner repository which has already been set up and requires no additional downloads.

The file [ImagePreperation](ImagePreperation.md) contains instructions on how the artifact virtual machine was prepared.


## Costs

The commands shown here are replicated in the file `AEC-remeasure.sh`, the purpose of the commands are explained here.

OpTuner must know how fast each implementation it uses is.
Since this varies from machine to machine these costs can be remeasured.

First all of the implementations and timing code must be compiled.
On the given VM the implementations are already downloaded and built to save time, as it is a lengthy step.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    cd implementations/timing
    make


Then this timing binary is ran to determine function speed and output a `json` file.
This step will take 28 minutes regardless of machine speed.
After this data is converted to an average runtime and placed in the costs file, `implementations/all_costs.json`

Continuing from the above directory.

    ./bin/time_all > raw_counts.json
    ./scripts/raw_counts_to_cost.py raw_counts.json > ../all_costs.json





## Sanity Testing

The commands shown here are replicated in the file `AEC_sanity.sh`, the purpose of the commands are explained here.

To check that OpTuner and the graphing capabilities work you can run OpTuner directly on a benchmark.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./bin/optuner benchmarks/exp1x.fpcore

OpTuner will then run for around a minute displaying selected configuration costs and error as they are found.
Due to how Z3's Pareto search works the results are found in a jumbled order, your results may be in a different order.
If you have remeasured function costs your results will also likely vary.
The last two rows are hard coded solutions using all GLiBC and all CRLibM based configurations which we use for normalization in our graphs.
After the configurations is a breakdown of tool runtime.
Example output:

> ; check_sat line: 3070 position: 19
> model_cost model_error
> 3.4143400646186346	6.481777551414871e-14
> 2.5355912383282937	1.2764418379611066e-12
> 1.6428011996837635	1.494160720975865e-07
> 1.8974958429248558	4.05502326187133e-09
> 2.8866020335417852	9.22889202029345e-14
> 3.1816809188672606	6.528318293162588e-14
> 54.06340150491056	6.304835181071573e-14
> 1.3652675580375442	1.1687720475158836
> 1.3664896773860575	0.06525020231226694
> 1.5939288401735028	4.848601333481827e-06
> 1.5932543412792048	0.0031926825438836058
> 10.708267821707182	6.333632570239164e-14
> -1.0	-1.0
> -2.0	-2.0
>
> Source  	Time
> FPTaylor	58.088155411183834
> Gelpia  	0.7393423281610012
> Z3      	2.7018186915665865
> Other   	2.0648984611034393
> Total   	63.59421489201486


After OpTuner has ran we can time the selections and graph those results.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    cd implementations/timing
    mkdir -p json
    ./bin/time_exp1x > json/time_exp1x.json
    ./scripts/pink_graph.py json/time_exp1x.json

Timing will take around two minutes.
The graphing script will output how many points were removed for not being Pareto optimal.

> json/time_exp1x.json
>  points: 12
>  non pareto points: 2
> Total points: 12
> Total skipped: 2
> 0.881835268103925 10.450279739846719

You can view the generated graphs using `eog`
Continuing from the above directory.

    eog aggregate.png zoomed_aggregate.png




# Evaluation

## Run

To run most benchmarks run the bash script `AEC-benchmarks-run.sh`.
This will run OpTuner on all benchmarks except the complex sine benchmark, due to its unusually long runtime.
In addition the runtime of OpTuner is collected in `./logs/tool_time.txt`
This would be a good time to go for tea or coffee, as it will run for approximately <> minutes.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./AEC-benchmark-run.sh

As this runs you will see the commands echoed as they run.
The commands in this script are not repeated here and must be run from the script.

> <>
>
>
> ...


## Time

Now the generated configuration are timed by running the `AEC-benchmarks-time.sh` script.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    ./AEC-benchmark-time.sh

As this runs you will see the commands echoed as they run.
The commands in this script are not repeated here and must be run from the script.

> <>
>
>
> ...


# Graph

Generating the graphs from this data is done similarly to before.

Starting from the directory `/home/ubuntu/Desktop/OpTuner`

    cd implementations/timing
    ./scripts/pink_graph.py json/time_*.json


This will report the number of points which turned out to be non-pareto due to the linear models.

> <>
>
>
> ...
>
>


These files can be viewed in the same way as before.

Continuing from the above directory.

    eog aggregate.png zoomed_aggregate.png
