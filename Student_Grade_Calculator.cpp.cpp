//SHIFATPREET SINGH
//24070123098
//ENTC B1
#include<iostream>
using namespace std;
int main(){
    float Maths,EDC,DCLD,Signal_Sys;
    cout<<"ENTER THE MARKS IN MATHS"<<endl;
    cin>>Maths;
    cout<<"ENTER THE MARKS IN EDC"<<endl;
    cin>>EDC;
    cout<<"ENTER THE MARKS IN DCLD"<<endl;
    cin>>DCLD;
    cout<<"ENTER THE MARKS IN Signal System"<<endl;
    cin>>Signal_Sys;
    float average;
    average=(Maths+EDC+DCLD+Signal_Sys)/4;
    cout<<"::RESULT REPORT::"<<endl;
    cout<<"THE OVERALL PERCENTAGE IS : "<<average<<"%"<<endl;
    if(average<100 && average>90){
        cout<<"YOUR GRADE IS :O"<<endl;
    }else if(average<=90 && average>80){
        cout<<"YOUR GRADE IS :A+"<<endl;
    }else if(average<=80 && average>75){
        cout<<"YOUR GRADE IS :A"<<endl;
    }else if(average<=75 && average>65){
        cout<<"YOUR GRADE IS :B"<<endl;
    }else if(average<=65 && average>60){
        cout<<"YOUR GRADE IS :C"<<endl;
    }else{
        cout<<"YOUR GRADE IS :F"<<endl;
    }
   return 0;
    
}
/*
ENTER THE MARKS IN MATHS
99
ENTER THE MARKS IN EDC
98
ENTER THE MARKS IN DCLD
97
ENTER THE MARKS IN Signal System
96
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 97.5%
YOUR GRADE IS :O

ENTER THE MARKS IN MATHS
78
ENTER THE MARKS IN EDC
79
ENTER THE MARKS IN DCLD
80
ENTER THE MARKS IN Signal System
86
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 80.75%
YOUR GRADE IS :A+

ENTER THE MARKS IN MATHS
80
ENTER THE MARKS IN EDC
89
ENTER THE MARKS IN DCLD
75
ENTER THE MARKS IN Signal System
67
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 77.75%
YOUR GRADE IS :A

ENTER THE MARKS IN MATHS
76
ENTER THE MARKS IN EDC
78
ENTER THE MARKS IN DCLD
67
ENTER THE MARKS IN Signal System
69
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 72.5%
YOUR GRADE IS :B

ENTER THE MARKS IN MATHS
64
ENTER THE MARKS IN EDC
62
ENTER THE MARKS IN DCLD
63
ENTER THE MARKS IN Signal System
60
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 62.25%
YOUR GRADE IS :C

ENTER THE MARKS IN MATHS
56
ENTER THE MARKS IN EDC
55
ENTER THE MARKS IN DCLD
57
ENTER THE MARKS IN Signal System
4
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 43%
YOUR GRADE IS :F*/