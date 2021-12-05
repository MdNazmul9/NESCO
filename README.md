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
DDL: Data Defination Language. (Create, Alter, Drop, Truncate, Comment, Rename)
DML: Data Manipulation Language.(Select, INsert, Update, Delete, Me rge, Call, Explain Plan, Lock Table)
DCL: Data Control Language. (Grant, Revoke)
TCL: Transaction Control Language. (Commit, Rollback Save point, Set Transaction)

# Q6:
Find output-
```
#include <iostream>
using namespace std;

int main()
{
    int i=1,j=1,k=1;
    cout<<++i||++j&&++k;
    cout<<" "<<i<<" "<<j<<" "<<k;

    return 0;
}

// output
//2 2 1 1 
```
# Q7:
Name OSI layer that transmitted bit stream to frames.
[Shotcut]
All people seem to need data processing

7. Application Layar: Data     }
6. Presentation Layer: Data    |
5. Session Layer: Data         | 
4. Transport Layer: Segment    } 
3. Network Layer: Packet
2. Data Link Layer:Frames
1. Physical Layer: Bit

1,2,3--> Media Layer
4,5,6,7 --> Host Layer


# Linux CMD
# Q8:
Creating 50 directories with 50 files inside and compress the file
Sol:
```
 $ mkdir dir-{01..50}
 $ touch dir-{01..50}/file{01..50}.txt
 $ tar -cf archive.tar dir-{01..50}
 
```
