# Basics-of-C++
This repository contains experiments 9, 10 which are related to the pointers in C++.

# Pointers
# EXPERIMENT 9:
## Aim: 
To study and 
## Theory: 
In C++, pointers are variables that store memory addresses of other variables.

They enable direct memory access and manipulation, allowing for efficient array handling, dynamic memory allocation, and complex data structures like linked lists and trees.
~~~
CODE:

//Program 1 (Swap the numbers using call by value.)
#include<iostream>
using namespace std;
void swap (int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 7, b = 9;
    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swap(a, b);
    cout<<"After swap: "<<a<<" "<<b<<endl;
}

//Program 2 (Swap the numbers using call by reference)
#include<iostream>
using namespace std;
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 7, b = 9;
    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<"After swap: "<<a<<" "<<b<<endl;
}
~~~

# Conclusion
In C++ we have learnt about pointer operations like call by value and call by reference and 
