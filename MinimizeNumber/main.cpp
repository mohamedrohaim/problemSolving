#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=true;
    int arr[n];
    int counter=0;
    int result=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(flag){
            for(int i=0;i<n;i++){
                if(arr[i]%2==0){
                    arr[i]=arr[i]/2;
                    counter+=1;
                    }
                }
                if(counter==n){
                    result+=1;
                    counter=0;
                }else{
                cout<<result;
                flag=false;

                }

            }




    return 0;
}
