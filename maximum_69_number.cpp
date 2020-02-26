#include <iostream>
#include <string> 
using namespace std;

int maximum69Number (int num){
    string snum = to_string(num);
    
    for (int i = 0; i < snum.length(); i++)
    {
        if (snum[i] == '6'){
            snum[i] = '9';
            break;
        }
    }

    num = stoi(snum);
    cout << num;
    return num;
}

int main ()
{


}