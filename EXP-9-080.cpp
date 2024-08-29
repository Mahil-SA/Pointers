//Experiment 9 - To study and implement C++ pointer basics.
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

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

//Output
/*
10
10
0x7ffeb15c1244
0x7ffeb15c1248
*/

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

//Output
/*
65
65
0x7ffd89f83fa4
0x7ffd89f83fa4
0x7ffd89f83fa8
*/

//Program 1.3


//Output
/*

*/
//Program 2 (Access array using pointer and without using pointer variable)
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

//Output
/*
1
2
3
4
5
*/
