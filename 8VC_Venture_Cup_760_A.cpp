#include<bits/stdc++.h>

using namespace std;


int main()
{
   int n,m,d,pil,pos,res,startDay,numRows=0,daysInMonth;


       cin>>m>>startDay;
       if(m==1||m== 3|| m==5|| m==7 ||m==8 ||m==12 ||m==10)
       {
           daysInMonth=31;
       }
       else if(m==2)
       {
           daysInMonth=28;
       }
       else if(m==4||m== 6 ||m==11 ||m==9)
       {
           daysInMonth=30;
       }

       int daysInWeek=7;

       numRows = (startDay + daysInMonth - 1) / daysInWeek;
        if ((startDay+daysInMonth - 1) % daysInWeek != 0) {
            numRows++;
        }


        cout<<numRows<<endl;
        return 0;
}
