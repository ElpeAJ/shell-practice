 Process is an instance of an executing program, that has a unique process 
ID. This process ID is used by many functions and system calls to interact 
with and manipulate processes. In order to retrieve the current process’
ID, you can use the system call getpid (man 2 getpid)

	In the pid.c file, every time you run the program, a new process is
	created and its ID is different.Each process has a parent: the process
	that created it. It is possible to get the PID of a parent process by
	using the getppid system call (man 2 getppid), from within the child
	process.

	Exercises 0.getppid
	Write a program that prints the PID of the parent process. Run your
	program several times within the same shell. It should be the same.
	Does echo $$ print the same value? Why?
	----YES because the parent process ID is const


	1. /proc/sys/kernel/pid_max
Write a shell script that prints the maximum value a process ID can be.

Compilation for PID & PPID programs
gcc -Wall -Werror -pedantic pid.c -o mypid && ./mypid
gcc -Wall -Werror -pedantic ppid.c -o myppid && ./myppid
