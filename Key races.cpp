#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,a,x,b,y,c1=0,c2=0;
    cin>>s>>a>>x>>b>>y;
    c1=s*a+2*b;
    c2=s*x+2*y;
   /// cout<<c1<<" "<<c2<<endl;
    if(c1<c2)
        cout<<"First";
    else if(c1>c2)
        cout<<"Second";
    else
        cout<<"Friendship";
}
