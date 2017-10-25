#include <bits/stdc++.h>

using namespace std;

int v[100];

int binary(int v[] , int x , int n)
{
    int l , r , mij ;

    l=0 ; r=n-1 ; mij=(l+r)/2 ;

    while(l<r)
    {
        if(x=v[mij])

             return mij;

         else
              if(x>v[mij])

                    l=mij;

                    else
                        r=mij;
         mij=(l+r)/2;
    }

    return -1;

}

int main()

{
    int n , x ;

    cin >> n;

    for ( int i = 0 ; i < n ; i++)

        cin >> v[i];


    cin >> x;

      cout<<binary(v,x,n)+1;


}
