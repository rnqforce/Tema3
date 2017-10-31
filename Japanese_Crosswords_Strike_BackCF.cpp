#include <iostream>

using namespace std;

int main()

{
    int n , x  , s=0 , a;

    cin>> n >> x;

    for(int i = 0 ; i < n ; i++)
    {

        cin>>a;

        s+=a;
    }

    if(s==x-n+1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
