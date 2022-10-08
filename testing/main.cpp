#include <iostream>
#include<string>

using namespace std;


struct employee{

int eno;
string ename;
string job;
float salary;
float bonus;
float total_salary;


};




void set_bounus(employee &e,float persent){
    e.bonus=e.salary*persent;
}
void print(employee arr[],int size_arr){
    for(int i=0;i<size_arr;i++){
            cout<<"emp no : "<<arr[i].eno<<"\n";
            cout<<"emp name : "<<arr[i].ename<<"\n";
            cout<<"emp job : "<<arr[i].job<<"\n";
            cout<<"emp salary : "<<arr[i].salary<<"\n";
            cout<<"emp bounus : "<<arr[i].bonus<<"\n";
            cout<<"emp total salary : "<<arr[i].salary+arr[i].bonus<<"\n";
            cout<<"************ \n";




    }




}
void get_data(employee arr[],int arr_size){
    for(int i=0;i<arr_size;i++){
            cout<<"enter emp no , em name , job : \n";
            cin>>arr[i].eno >>arr[i].ename >>arr[i].job;
            if(arr[i].job=="Manager"){
                arr[i].salary=5000.0;
            }else if(arr[i].job=="Engineer"){
                arr[i].salary=3000.0;

             }else if(arr[i].job=="Clerck"){
                arr[i].salary=2000.0;
             }else{
             arr[i].salary=1000.0;
             }

    }
}


int main()
{
   employee emps [5];
   get_data(emps,5);
   set_bounus(emps[1],0.10f);
   print(emps,5);

    return 0;
}
