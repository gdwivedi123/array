#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, n, i, j;
	string ans ;
	bool done ;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    ans = "";
	    done = false;
	    vector<string> arr(n);
	    for(i = 0; i < n; i++)
	    {
	        cin>>arr[i];
	    }
	    j = 0;
	    ans ="";
	    while( j < arr[0].size())
	    {
	        for(i = 1;i < n; i++)
	        {
	            if(arr[i][j] != arr[0][j])
	            {
	                done = true;
	                break;
	            }
	        }
	        if(!done)
	        {
	            ans += arr[0][j];
	            j++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    if(ans == "")
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        cout<<ans<<endl;
	    }
	       
	}
	return 0;
}