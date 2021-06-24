#include <iostream>  
#include <unistd.h>                                 //For sleep function
#include <ncurses.h>                                //For alignment

//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */ 

using namespace std;
 
int main()
{
    initscr();
    int h,s,m,a,err;
    err=a=0;
    while(err==0)
    {
        move(12,12);
        cout<<YELLOW<<"Enter hours: \n"<<RESET;
        cout<<BOLDCYAN;
        cin>>h;
        cout<<RESET;
        cout<<YELLOW<<"Enter minutes: \n"<<RESET;
        cout<<BOLDCYAN;
        cin>>m;
        cout<<RESET;
        cout<<YELLOW<<"Enter seconds: \n"<<RESET;
        cout<<BOLDCYAN;
        cin>>s;
        cout<<RESET;

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

    getch();
    endwin();
    return 0;

}