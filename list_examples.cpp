#include <iostream>
using namespace std;


void print(int A[][3],int N, int M)
{
  for (int R = 0; R < N; R++)
    for (int C = 0; C < M; C++)
    {
       cout << A[R][C] << endl;
    }
}


void sum(int A[][3],int ans[][3],int N, int M)
{
  for (int R = 0; R < N; R++)
    for (int C = 0; C < M; C++)
    {
       //cout << A[R][C] << endl;
       ans[R][C] = A[R][C] - 15;
    }
}

int main ()
{
    int ans[4][3];
    int arr[4][3] ={{12, 29, 11},
                    {25, 25, 13},
                    {24, 64, 67},
                    {11, 18, 14}};
    sum(arr,ans,4,3);
    //print(arr,4,3);
    print(ans,4,3);
    return 0;
}