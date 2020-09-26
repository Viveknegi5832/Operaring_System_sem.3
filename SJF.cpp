#include <iostream>
using namespace std;
int main()
{
    int wt[30],bt[30],tat[30],p[30];
    int n,t;
    float awt,atat=0.00;
    cout<<"\n Enter no. of processes : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n Enter burst time of process "<<i+1<<": ";
        cin>>bt[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(bt[j]>bt[j+1])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;
                
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }
    wt[0]=0;
    cout<<"\n Waiting time of process 1 is "<<wt[0]<<endl;
    for(int i=1;i<n;i++)
    {  wt[i]=wt[i-1]+bt[i-1];
        cout<<"\n Waiting time of process "<<i+1<<" is "<<wt[i]<<endl;
        
    }
    tat[0]=0;
    for(int j=0;j<n;j++)
    {   
        tat[j]=bt[j]+wt[j];
        cout<<"\n Turnaround time of process "<<j+1<<" is "<<tat[j]<<endl;
    }
    for(int i=0;i<n;i++)
    {
      awt=awt+wt[i];
    }
    cout<<"\n average waiting time is "<<awt/n<<endl;
    for(int j=0;j<n;j++)
    {
        atat=atat+tat[j];
    }
    cout<<"\n average turnaround time is "<<atat/n;
    return 0;
}
