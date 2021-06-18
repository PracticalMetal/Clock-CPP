#include <iostream>  
#include <unistd.h>                                 //For sleep function
 
using namespace std;
 
int main()
{
    int h,s,m,a,err;
    err=a=0;
    while(err==0)
    {
        cout<<"Enter hours: \n";
        cin>>h;
        cout<<"Enter minutes: \n";
        cin>>m;
        cout<<"Enter seconds: \n";
        cin>>s;

        if(h<24 && m<60 && s<60)
        err++;
        else
        system("clear");
    }
    while(a==0)
    {
        system("clear");
        cout<<h<<":"<<m<<":"<<s<<"\n";
        sleep(1);                               //sleep() is used to suspend the execution of program temporarily for the given time               
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;

        }
        if(h>24)
        {
            h=0;
        }
    }
    return 0;

}