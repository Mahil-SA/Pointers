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

//Program 1 (Pointer Integer)
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//Program 2 (Pointer Character)
#include<iostream>
using namespace std;
int main()
{
    char a = 'c'; 
    char *ptr;
    ptr = &a;
    cout<< "The value pointed by *ptr is"<<*ptr << endl;
    cout << "The value in b is" <<a << endl;
    cout << "The value in pointer variable ptr is"<<(void*)ptr << endl;
    cout << "the address of variable b is "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//Program 3 (Pointer Float)
 #include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//Program 4 (Access array using pointer and using pointer variable.)
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}

//Program 5 (Access array using pointer and without using pointer variable.)
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
## Program 1
![image](https://github.com/user-attachments/assets/4f7dc4ab-0f35-4f70-8a30-e54993309647)

## Program 2
![image](https://github.com/user-attachments/assets/3447e96d-25f7-43e5-969f-33806e5fb7f1)

## Program 3
![image](https://github.com/user-attachments/assets/57c52385-8449-479b-857b-b59ef1a52cdc)

## Program 4
![image](https://github.com/user-attachments/assets/1240e76b-2eda-43da-a6ab-d741b6b485c9)

## Program 5
![image](https://github.com/user-attachments/assets/1bf4d85d-87aa-4ed8-aa54-aacae3757053)
