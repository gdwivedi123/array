#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, i;
   cin >> n;
   int arr[n];
   vector<int> modes;
   for(i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   int currval = arr[0], currcount = 0, maxcount = 1;
   modes.push_back(arr[0]); 
   for(i = 1; i < n; i++)
   {
       if(arr[i] != currval)
       {
           currval = arr[i];
           currcount = 0;
       }
       currcount++;
       if(currcount > maxcount)
       {
           maxcount = currcount;
           modes.clear();
           modes.push_back(arr[i]);
       }
       else if(currcount == maxcount)
       {
           modes.push_back(arr[i]);
       }
   }
   
   cout << "Modes : " ;
   for(auto i : modes)
   {
       cout << i << " ";
   }
   
}