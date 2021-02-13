# Write and run PASS
## What is a pass 

The LLVM Pass Framework is an important part of the LLVM system, because LLVM passes are where most of the interesting parts of the compiler exist. Passes perform the transformations and optimizations that make up the compiler, they build the analysis results that are used by these transformations, and they are, above all, a structuring technique for compiler code. For more details, see [What is a pass](https://llvm.org/docs/itingAnLLVMPass.html#introduction-what-is-a-pass)?

## Configure and build LLVM 
First, configure and build LLVM as described in [Getting Started with the LLVM System](https://llvm.org/docs/GettingStarted.html). For this example, we’ll assume that you built _in SPlab_r /Project3_ .

## Add our project to the llvm project 
You need to copy the 
	* _Header_ directory to _llvm /llvm /include /MyPasses_
	* _MyPass_ directort to _llvm /projects 

### Usage
```bash
$ cp -R Header ../../llvm-project/llvm/include/llvm/MyPasses/
$ cp -R MyPass ../../llvm-project/llvm/projects/
```

## Build
```bash
$ cd ../../llvm-project/build
$ make
```
## Compiling file.cpp
For example
```bash
$ cd SPlab_r/Project3 
$ clang++ -O3 -emit-llvm Hello.cpp -c -o Hello.bc
```
For more details, see [clang](https://llvm.org/docs/GettingStarted.html#id35).

## Running PASS
```bash
opt -load ../../llvm-project/build/lib/PRINTAllFunctionsNames.so -PrintSubFunctionsInfo <ourFile> /dev/null
```
