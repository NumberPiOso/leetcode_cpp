#include <iostream>
#include <vector>
using namespace std;

template <class T>

void print_vec(vector<T>& nums){
    int n = nums.size();
    for (int i = 0; i < n; i++)
        cout << nums[i] << ',';
    cout << endl;    
}

template <class T>

T max_el (vector<T>& nums){
    int n = nums.size();
    T max = nums[0];
    for (int i = 1; i < n; i++)
        if (nums[i] > max) max = nums[i];
    return max;
}

int main () {
    vector<int> v1 = {1, 2, 3, 16, 15};
    print_vec(v1);
    cout << max_el(v1);   
}
