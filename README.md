# myAlgorithmLibrary
C++ Static Library Containing selected algorithms

Functionality: This library contains singlethreaded and multithreaded implementations of quicksort, mergesort, linearsearch, exponential search, and binary search.
As of now, it is only really stable using c arrays and pointers to arrays. This will hopefully change in future.

Development and Operating Environment: This library was developed on a Macbook Pro with Apple M1 chip running MacOs BigSur Version 11.2.3.. Although the operating system contains some modifications to standard unix, it is a unix compliant operating system. It was developed using Clion IDE.

Instructions For Compilation: Using Cmake - enter directory, cmake compile command, cmake build command

In unix environment:
Open Terminal
cd into directory
cmake .
cmake --build .
This should generate a file called libFurnerAlgo.a
Example from my environment Open Terminal Cd desktop/myAlgorithmLibrary 
cmake . 
cmake -- build .

Instructions For Use: 
