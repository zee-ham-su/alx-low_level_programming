0x18. C - Dynamic libraries

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is a dynamic library, how does it work, how to create one, and how to use it
What is the environment variable $LD_LIBRARY_PATH and how to use it
What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig


 Dynamic libraries, also known as shared libraries, are a type of library that is loaded at runtime by the programs that use them. This allows multiple programs to share the same library code, reducing duplication and improving overall system efficiency.


Dynamic libraries offer several advantages over static libraries, including:

Code sharing: Dynamic libraries allow multiple programs to share the same code in memory, reducing the overall memory footprint.
Run-time flexibility: Dynamic libraries can be loaded and unloaded at runtime, providing greater flexibility compared to static libraries that are linked at compile time.
Modularity: Dynamic libraries promote modularity by separating reusable code into distinct units.