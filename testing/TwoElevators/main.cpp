#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string code="";
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
        int c=str[i]-96;
        stringstream stream;
        stream << c;
        string s;
        stream>>s;
        if(c>9){
            s+='0';
        }
        code+=s;

        }
          cout<<code<<endl;


    }
    return 0;
}
