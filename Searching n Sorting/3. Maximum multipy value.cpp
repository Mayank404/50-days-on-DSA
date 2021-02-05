#include<iostream>
using namespace std;


void sort(int a[],int n)
{
  int  i, j, p=0;
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(i!=j)
        {
          if(p<(a[i]*a[j]))
          {
            p=a[i]*a[j];
          }
        }
      }
  }
    cout<<p<<endl;
}

int main()
{
  int arr[30], i, x, t;
  cout<<"Enter no. of test cases."<<endl;
  cin>>t;
  while(t--)
  {
      cout<<"Enter no. of elements."<<endl;
    cin>>x;
    cout<<"Enter the elements of the array."<<endl;
    for(i=0;i<x;i++)
    {
      cin>>arr[i];
    }
  sort(arr, x);
  }
  return 0;
}
