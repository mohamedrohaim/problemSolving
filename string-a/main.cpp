#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int size1=s1.size();
    int size2=s2.size();
    int size=min(size1,size2);
    int flag=0;
    for(int i=0;i<size;i++){
        if(s1[i]<s2[i]){
                cout<<s1<<endl;
                flag=0;
                break;

        }else if(s2[i]<s1[i]){
            cout<<s2<<endl;
                flag=0;
                break;

        }else{
       flag=-1;
        }
    }
    if(flag==-1){
            if(size1>size2){
                cout<<s2<<endl;
            }else{
             cout<<s1<<endl;
            }

    }



    return 0;
}
