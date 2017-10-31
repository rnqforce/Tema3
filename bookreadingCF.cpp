#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n , t ,v [100],s=0,k=0;

    cin>> n >> t ;

    for(int i=0 ; i < n && s<t ; i++)
    {
        cin>>v[i];
             s+=86400-v[i];

          k++;
          if(s>=t)
            break;
    }

    if(s<t && (t-s)%86400==0)
        k+=(t-s)%86400;
    else
        if(s<t && (t-s)%86400!=0)
        k+=(t-s)%86400+1;

    cout<<k;
}
