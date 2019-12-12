#include <iostream>
#include <bits/stdc++.h> 
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

template <class T>

T min_el (vector<T>& nums){
    int n = nums.size();
    T min = nums[0];
    for (int i = 1; i < n; i++)
        if (nums[i] < min) min = nums[i];
    return min;
}

void next_permutation(vector<int>& nums){
    int n = nums.size();
    if (n == 0) return;
    int *start = &nums[0];
    int *end = &nums[n-1];
    int *inflex_ptr = nullptr;
    int *after_inflex = nullptr;
    // Si no encuentra hasta exhausto pues simplemente los volteo todos.
    for (int * curr = end; curr != start; --curr)
        if (*curr > *(curr - 1)){
            cout << *curr << " is gt " << *(curr - 1) << endl; 
            inflex_ptr = curr - 1;
            break;
        }

    // Find the value that is just bigger now
    if (inflex_ptr == nullptr){
        cout << " This fucking case \n";
        after_inflex = start;
    } else {
        // I have to find the one that is just bigger
        cout << " This fucking case 2 \n";
        cout << "inflex: " <<  *inflex_ptr << '\n';        
        after_inflex = inflex_ptr + 1; // To reverse
        int * curr;
        for ( curr = inflex_ptr + 2; curr <= end; curr++)
            if (*curr <  *inflex_ptr){
                int temp = *(curr-1);
                *(curr-1) = *inflex_ptr;
                *inflex_ptr = temp;
                break;
            }
    
        if (curr > end){
            int temp = *end;
            *end = *inflex_ptr;
            *inflex_ptr = temp;
        }
    print_vec(nums);
    }
    print_vec(nums);
    // Reverse everything to the right
    while (after_inflex < end){
        int temp = *after_inflex;
        *after_inflex = *end;
        *end = temp;
        after_inflex++;
        end--;
        // *start, *end = *end, *strat in Python 3.7
    }
    return;
}


int main () {
    vector<int> v1 = {1, 4, 3, 2};
    // vector<int> v1 = {9, 5, 4, 3, 1};
    next_permutation(v1);
    print_vec(v1);

    next_permutation(v1);
    print_vec(v1);

    next_permutation(v1);
    print_vec(v1);

    // next_permutation(v1);
    // print_vec(v1);

}
