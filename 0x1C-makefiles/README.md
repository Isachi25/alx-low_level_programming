### 0x1C. C - Makefiles

Concepts;
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them

Overview;
Makefiles are essential tools in software development for automating the build process. 
They provide a structured way to define how source code should be compiled into executable programs or libraries.
At its core, a Makefile consists of rules that specify targets, dependencies, and actions. 
Targets represent the output files or actions to be performed. Dependencies are the files or other targets required for the target's execution. 
Actions are the commands executed to fulfill the target's requirements.
Makefiles are especially useful for managing complex projects with multiple source files and dependencies. 
They enable developers to compile only the necessary files that have changed since the last build, saving time and resources.
Makefiles can also define variables, macros, and conditional statements, adding flexibility and abstraction to the build process.
In summary, Makefiles simplify the compilation process by automating repetitive tasks, managing dependencies, and providing a structured approach to building software projects.

Examples;
A make file program to complile a C program looks like this;

	program: main.c helper.c
    		gcc -o program main.c helper.c

program is the target, representing the executable to be generated.
main.c and helper.c are the dependencies, indicating that if either of these files changes, the target needs to be rebuilt.
gcc -o program main.c helper.c is the action, specifying the command to compile the source files into an executable named program.

