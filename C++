#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr.at(minindex)>arr.at(j))
            {
                minindex=j;
            }
        }
        swap(arr.at(i),arr.at(minindex));
    }
}
