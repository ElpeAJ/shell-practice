#!/bin/bash

max_pid=$(cat /proc/sys/kernel/pid_max)
	echo "Prints maximum value a process ID can be: $max_pid"
