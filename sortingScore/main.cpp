#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    int score=0;
    string str;
    cin>>num;
    cin>>str;
    for(int i=0;i<num;i++){
        if(str[i]=='V'){
            score+=5;

    }else if(str[i]=='W'){
            score+=2;

    }else if(str[i]=='X'){
            i++;

    }else if(str[i]=='Y'){
           str.push_back(str[i+1]);
            i++;
            num++;
    }else if(str[i]=='Y'){
            str.push_back(str[i+1]);
            i++;
            num++;
    }else if(str[i]=='Z'){
        if(str[i+1]=='V'){
            score=score/5;
        }else if(str[i+1]=='W'){
        score=score/2;
        }
        if(str[i+1]=='V'||str[i+1]=='W'){
            i++;
        }

    }


    }
    cout<<score;





    return 0;
}
