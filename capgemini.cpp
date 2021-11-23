#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name; // vector<int> v;
    cin>>name;
    for(int i=0;i<name.size();i++)
    { int ctr=0;
        for(int j=i+1;j<name.size();j++)
        {
            if(name[i]==name[j] && name[j]!='*')
            {ctr++; name[j]='*';
            }
            
        } ctr=ctr+1;
       if(name[i]!='*')
      { cout<<name[i]<<':';
        while(ctr--)
       { if(name[i]!='*')
       {  
           cout<<'$'; }
       } cout<<','; }
    }
}

