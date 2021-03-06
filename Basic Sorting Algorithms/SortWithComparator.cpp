/*
Given an integer vector and a bool variable flag, your task is to sort the vector in accordance to the boolean value. 
If the bool value passed is true then sort it in non-decreasing order or vice versa.
*/
//Expected Time Complexity :O(N log N)
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/* Inbuilt sort takes O(NlogN) time complexity */
/*
bool compare(int a, int b)
{
    return a > b;
    
}
*/
vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
   // flag == true ? sort(a.begin(), a.end()) : sort(a.begin(), a.end(), compare) ;
    if(flag) 
        sort(a.begin(), a.end(), less<int>()) ; 
    else
        sort(a.begin(), a.end(), greater<int>()) ;
    return a;
}


