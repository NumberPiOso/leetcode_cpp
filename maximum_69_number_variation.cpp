#include <iostream>
#include <string> 
using namespace std;

int maximum69Number (int num){
    string s = to_string(num);
}

int main ()
{
    int num = 9669;
    string snum = to_string(num);
    

    int low_6 = -1;
    int high_9 = -1;
    for (int i = 0; i < snum.length(); i++)
    {
        if (low_6 == -1)
            if (snum[i] == '6')
                low_6 = i;
        if (snum[i] == '9')
            high_9 = i;
    }

    if (high_9 > low_6)
        if (low_6 != -1){
            snum[low_6] = '9';
            snum[high_9] = '6';
        }
    cout << snum;
}