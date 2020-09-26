#include <iostream>

using namespace std;

int main()
{
    int wt[30],bt[30],tat[30];
    int n;
    float awt,atat=0.00;
    cout<<"\n enter no. of processes :  ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n enter burst time of process "<<i+1<<": ";
        cin>>bt[i];
    }
    wt[0]=0;
    cout<<"\n waiting time of process 1 is : "<<wt[0]<<endl;
    for(int i=1;i<n;i++)
    {  wt[i]=wt[i-1]+bt[i-1];
        cout<<"\n waiting time of process : "<<i+1<<" is "<<wt[i]<<endl;
        
    }
    tat[0]=0;
    for(int j=0;j<n;j++)
    {   
        tat[j]=bt[j]+wt[j];
        cout<<"\n turnaround time of process : "<<j+1<<" is "<<tat[j]<<endl;
    }
    for(int i=0;i<n;i++)
    {
      awt=awt+wt[i];
    }
    cout<<"\n average waiting time is : "<<awt/n<<endl;
    for(int j=0;j<n;j++)
    {
        atat=atat+tat[j];
    }
    cout<<"\n average turnaround time is : "<<atat/n;
    return 0;
}

