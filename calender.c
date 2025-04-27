#include <stdio.h>

int e_day(int year);
void days(int i)
{
    switch (i){
            case 1: printf("  %s ","Sun");
                      break;
            case 2: printf("  %s ","Mon");
                       break;
            case 3: printf("  %s ","Tue");
                    break;
            case 4: printf("  %s ","Wed");
                    break;
            case 5: printf("  %s ","Thu");
                    break;
            case 6: printf("  %s ","Fri");
                    break;
            default: printf("  %s \n","Sat");
                    break;
        }
}
void months(int m)
{
    switch (m){
            case 1: printf("\n%s\n","January");
                      break;
            case 2: printf("\n%s\n","February");
                       break;
            case 3: printf("\n%s\n","March");
                    break;
            case 4: printf("\n%s\n","April");
                    break;
            case 5: printf("\n%s\n","May");
                    break;
            case 6: printf("\n%s\n","June");
                    break;
            case 7: printf("\n%s\n","July");
                    break;
            case 8: printf("\n%s\n","August");
                    break;
            case 9: printf("\n%s\n","September");
                    break;
            case 10: printf("\n%s\n","October");
                    break;
            case 11: printf("\n%s\n","November");
                    break;
            default : printf("\n%s\n","December");
                    break;
        }
}
int l_y(int year)
{
    int feb1,feb2;
    feb1=28;
    feb2=29;
    if(year%400==0) return feb2;
    else if(year%100==0) return feb1;
    else if(year%4==0) return feb2;
    else return feb1;


}
void lp_year(int styear, int cn,int fyear)
{
    int l,i,mm,k,sv=1;
    int num=0;
    while(styear<=fyear){
        printf("\n\n%d CALENDAR\n\n",styear);
    for(mm=1;mm<=12;mm++)
    {
        months(mm);
        for(i=1;i<=7;i++)
        {
            days(i);
            sv=0;
        }
        l=0;
        while(l<cn)
        {
            printf("      ");
            sv++;
            l++;
        }
        k=1;
        if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
    {
        while(k<=31)
        {
            sv++; 
            if(k>9){
                printf("  %d  ",k);
                cn++;
                
            }
            else 
             printf("  %d   ",k);
           if(sv%7==0)
            {
                cn=0;
                printf("\n");
            }
            k++;
        }
    }
    if(mm==4||mm==6||mm==9||mm==11)
    {
        while(k<=30)
        {
            sv++; 
            if(k>9){
                printf("  %d  ",k);
                cn++; 
            }
            else 
             printf("  %d   ",k);
           if(sv%7==0)
            {
                cn=0;
                printf("\n");
            }
            k++;
        }
    }
    if(mm==2)
    {
        while(k<=l_y(styear))
        {
            sv++; 
            if(k>9){
                printf("  %d  ",k);
                cn++;
            }
            else 
             printf("  %d   ",k);
           if(sv%7==0)
            {
                cn=0;
                printf("\n");
            }
            k++;

        }
    }  
    }
    styear++;
    }
}
int main()
{
    int cn,styear,fyear,cn1;
    printf("Enter the year for a calender:");
    scanf("%d",&styear);
    printf("Enter the ending year you need :");
    scanf("%d",&fyear);
    if(styear%400==0) cn=e_day(styear)-1;
    else if(styear%100==0) cn=e_day(styear);
    else if(styear%4==0) cn=e_day(styear)-1;
    else cn=e_day(styear);
    lp_year(styear,cn,fyear);  
    printf("\n\nTHANKE YOU \n\n");
}
int e_day(int year)
{
    // month code
    int m_th[]={0,3,3,6,1,4,6,2,5,0,3,5};
    int i,j;
    i=0;
    j=99;
    int n=6,m,in_y,f_y;
    while(j<=2100)
    {   for(n=6;n>=0;n=n-2){
        if(year>=i&&year<=j) 
        {  m=n;
        }
        i=i+100;
        j=j+100;
        }  
    }
    int num=year,t;
    num=num%100;
    t=num/4;
    int total,rem3;
    total=num+t+m+1;
    rem3=total%7;
    
    return rem3;
}

