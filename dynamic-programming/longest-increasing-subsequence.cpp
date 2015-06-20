/* find the length of longest increasing subsequence in NlogN time */
#include <bits/stdc++.h>
using namespace std;
int n,i,a[100002];
int main() 
{
    int n,i;
    cin>>n;
    set<int> array;
    set<int>::iterator t;
    for(i=1;i<=n;i++)
	{
        cin>>a[i];
		const bool check = array.find(a[i]) != array.end();
		if(!check)
		{
			array.insert(a[i]);
        	t = array.find(a[i]);
        	t++;
			if(t!=array.end())
			{array.erase(t);}
		}
    }
    cout<<array.size()<<endl;
    return 0;
}
