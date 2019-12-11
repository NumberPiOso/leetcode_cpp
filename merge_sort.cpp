#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void merge(int list1[],int n1,int list2[], int n2, int lista_result[]);
void print(int A[],int N);


int main()
{
    int n1 = 15;
    int n2 = 20;
    int list1[15] = {1,2,3,4,5,6,7,8,9,10};
    int list2[10] = {7,9,15,18,20};
//     // inserting at the back
//     for(i=0;i<10;i++)
//         list1.push_back(i+1);

//    //inserting at the front
//     for(i=0;i<10;i++)
//         list2.push_front(i+1);

//     cout << "Content of List 1: ";
//     showTheContent(list1);
//     cout << "Content of list 2: ";
//     showTheContent(list2);

    int sorted[20];
    merge(list1,n1,list2,n2,sorted);
    
    return 0;
}


void merge(int list1[],int n1,int list2[], int n2, int lista_result[])
{
    int i1 = 0;
    int i2 = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        if (i1 >= n1)
        {
            lista_result[i] = list2[i2];
            i2 += 1;
        }

        else if (i2 >= n2)
        {
            lista_result[i] = list2[i1];
            i1 += 1;
        }

        else if (list1[i1] <= list2[i2])
        {
            lista_result[i] = list1[i1];
            i1 += 1;
        }
        else
        {
            lista_result[i2] = list2[i2];
            i2 += 1;
        }      
    }    
}

void print(int A[],int N)
{
  for (int R = 0; R < N; R++)
    {
    cout << A[R] << endl;
    }
}

