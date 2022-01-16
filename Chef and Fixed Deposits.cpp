#include <bits/stdc++.h>
using namespace std;

int main() { int t;
cin>>t;
while(t--)
{
    int n,x; cin>>n>>x; vector<int> v; int a;
    for(int i=0;i<n;i++)
   
   {
       cin>>a; v.push_back(a);
   }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    int sum=0,f=0, ctr=0;
    for(int i=0;i<n;i++)
    {  ctr++;
       sum=sum+v[i];
        if(sum>=x)
        {f=ctr;break;}
        
    } if(f==0) cout<<"-1"<<endl; else cout<<ctr<<endl;
    
}
	// your code goes here
	return 0;
}
