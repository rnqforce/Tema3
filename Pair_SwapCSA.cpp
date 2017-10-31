#include <bits/stdc++.h>

using namespace std;

int main()

{
       int n , k , v[100000]  , mn,nr, aux, ok=1 ;

       cin >> n >> k ;

       for(int i = 0 ; i < n ; i ++)

        cin>>v[i];

       for(int i = 0 ; i < n && ok ; i++)
       {

           for(int j = i ; j < i+k+1 ; j++)
             {
                 mn=99999;
                 if(mn > v[j])
                   {
                    mn=v[j];

                     nr=j;
                   }

                   }


           if(v[i]>mn)
           {

                aux=v[i];

                v[i]=v[nr];

                v[nr]=aux;

                break;
           }
       }



       for(int i = 0 ; i < n; i++)

        cout << v[i] << " ";

}
