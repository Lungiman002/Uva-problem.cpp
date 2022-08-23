#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s.size()==1 && s[0]=='0')
            break;

        ll even=0,odd=0;
        for(ll i=0; i<s.size(); i++)
        {
            int k=s[i]-48;
            if(i%2==0)
                even+=k;
            else
                odd+=k;
        }
        ll opt=abs(even-odd);
        if(opt==0 || opt%11==0)cout<<s<<" is a multiple of 11."<<endl;
        else cout<<s<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
