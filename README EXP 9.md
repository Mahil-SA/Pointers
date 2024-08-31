# Pointers
This repository contains experiments 9, 10 which are related to the pointers in C++.

# Pointers
# EXPERIMENT 9:
## Aim: 
To study and implement pointers and pointer operations.
## Theory: 
In C++, pointers are variables that store memory addresses of other variables.

They enable direct memory access and manipulation, allowing for efficient array handling, dynamic memory allocation, and complex data structures like linked lists and trees.
~~~
CODE:

//Program 1.1
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
    cout<<*ptr<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    ptr++;
    cout<<ptr<<endl;
}

//Program 1.2
#include<iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
    cout<<*ptr<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    ptr++;
    cout<<ptr<<endl;
}

//Program 1.3

//Program 2 (Access array using pointer and without using pointer variable.)
#include<iostream>
using namespace std;
int main()
{
    int i, *ptr;
    int a[50]={1,2,3,4,5};
    ptr=&a[0];
    for(i=0;i<5;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
}
~~~

# Conclusion
In C++ we have learnt about what pointers are and how and why they are used in C++.

# Outputs
## Program 1.1
![image](https://github.com/user-attachments/assets/5ffe813c-7345-4c62-81b4-f2121060120b)

## Program 1.2
![image](https://github.com/user-attachments/assets/dd3ed709-ed23-4d44-ad94-263a475abc48)

## Program 1.3
![image](https://github.com/user-attachments/assets/d31d61d8-7f38-404b-8f07-ae0dff50f5d1)
