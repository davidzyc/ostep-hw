# Homework for cpu-api

## 1
Two varaible are independent in two process.

## 2
Their output won't be concurrent. One process write everything it outputs and another process do the same thing later. Both output are preserved.

## 3
Making a loop of 100000000 in the child process

## 4
exec()
execl execlp execle
execv execvp execve
l - list input  
v - vector input
p - using PATH (not require complete path to executable)
e - manually indicating the environment variables

## 5
wait() returns the process ID of first finished child process
it returns -1 if the process calling wait() has no child process

## 6
waitpid()
async get status of child process
manage many child process
waitpid(-1, NULL, 0) == wait()

## 7
It continues to output to STDOUT

## 8
pipe()
TODO