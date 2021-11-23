# NESCO
# NWPGCL Question
# Q1:
 Suppose an array is {4,5,6,7}. Write a C program that will output -{4,5},{4,6},{4,7},{5,6},{5,7},{6,7}.
# Ans:
```

#include <stdio.h>

int main()
{
    int i,j;
    for(i=4;i<=7;i++){
        for(j=i+1;j<=7;j++){
            printf("{%d,%d},",i,j);
        }
    }

    return 0;
}
```
# Q2:
Difference between Multitasking and Multithreading.
# Ans:
Multitasking vs multithreding:
the basic difference between Multitasking and multithreding is that multitasking allows CPU to perform multiple tasks (program, process, task) simultaneously whereas, multithreding allows multiple threads of the same process to execute simultaneously.

# Q3: 
What are the difference among DDL,DML and DCL?
# Q6:
Find output-
# Q7:
Name OSI layer that transmitted bit stream to frames.
