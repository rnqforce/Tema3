#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, k ,s = 0, v[100];

    cin>>n>>k;

    for(int i = 0 ; i < n ; i ++)
        cin>>v[i];

    sort(v , v + n);

    for(int i = 0 ; i < k ; i ++)

        s+=v[i];

    if(s%100!=0)
        cout<<s/100+1;
    else
        cout<<s/100;
}
