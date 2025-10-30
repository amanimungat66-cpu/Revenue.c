/*
 * Name: Amani Munga Tunje
 * Reg:CT100/G/26225/25
 * Discription:1D array
 * Calculate Total weekly renenue and Average daily revenue
 */
#include <stdio.h>
//main funtion
int main()
{
    //1D array contain revenue of each day
    int revenue[7]={1500,3000,1000,2000,2500,4000,3500};
    int weekly_revenue=0;//total revenue
    int average_revenue;//average revenue
    int length = sizeof(revenue)/sizeof(revenue[0]);
    
    //using for loop to calculate weekly and average revenue
    for(int i=0;i<length;i++)
    {
        weekly_revenue+=revenue[i];
    }
    printf("Total weekly revenue %d \n",weekly_revenue);
    
    average_revenue=weekly_revenue/length;
    
    printf("Average weekly revenue %d",average_revenue);
    
    return 0;
}