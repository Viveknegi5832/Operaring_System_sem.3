#include <iostream>

using namespace std;

int main()
{
    int n,temp,temp1,temp2;
    int bt[10],wt[10],tat[10],prior[10],p[10];
    float atat=0,awt=0;
    cout<<"Enter the number of proccess : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the burst time of process "<<i+1<<" : ";
        cin>>bt[i];
        cout<<"\nEnter the priority of process   "<<i+1<<" : ";
        cin>>prior[i];
        p[i]=i;
    }
   for(int i=0;i<n;i++) 
    {
       for(int j=i+1;j<n;j++)
        {
          if(prior[j]<prior[i]) 
         {
         temp=prior[i];
         temp1=bt[i];
         temp2=p[i];
         prior[i]=prior[j];
         bt[i]=bt[j];
         p[i]=p[j];
         prior[j]=temp;
         bt[j]=temp1;
         p[j]=temp2;
        }
       }
   }
    wt[0]=0;
    tat[0]=bt[0];
    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=wt[i]+bt[i];
    }
    for(int i=0;i<n;i++)
    {
        awt=awt+wt[i];
        atat=atat+tat[i];
        cout<<"\nWaiting time of program "<<p[i]+1<<" is "<<wt[i]<<" and it's turnaround time is "<<tat[i];
    }
    awt=awt/n;
    atat=atat/n;
    cout<<"\nAverage waiting time is "<<awt;
    cout<<"\nAverage turnaround time is "<<atat;
}
