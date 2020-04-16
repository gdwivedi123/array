#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, n, i, j;
	bool done ;
	char ch;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    string prefix;
	    done = false;
	    vector<string> arr(n);
	    for(i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    i = 0;
	    while(i < arr[0].length())
	    {
	        ch = arr[0][i];
	        for(j = 1; j < n; j++)
	        {
	            if((arr[j].length() <= i) || (arr[j][i] != ch))
	            {
	                done = true;
	                break;
	            }
	        }
	        if(done)
	        {
	            break;
	        }
	        else
	        {
	            prefix.push_back(ch);
	            i++;
	        }
	    }
	   if(prefix.empty())
	   {
	       cout << -1 << endl;
	   }
	   else
	   {
	       cout << prefix << endl;
	   }
	}
	return 0;
}