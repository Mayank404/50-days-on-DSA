#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int binarysearch(int arr[], int l, int r, int x)
{
  if (r>=l)
  {
  int mid= l+(r-l)/2;

  if(arr[mid]==x)
  return mid;

  if(arr[mid]<x)
  return binarysearch(arr, mid+1, r, x);

  if(arr[mid]>x)
  return binarysearch(arr, l, mid-1, x);
}
return -1;
}

int main()
{
  int arr[1000], n,i,j,temp=0;
  cout<<"Enter the size of the Array"<<endl;
  cin>>n;
  cout<<"Enter the elements of the Array"<< endl;
  for(i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  for(i=1; i<n; i++)
  {
    for( j=0; j<(n-i); j++)
    if(arr[j]>arr[j+1])
    {
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
  int c;
  cout<<"Enter 1 to search using Linear search."<<endl;
  cout<<"Enter 2 to search using Binary search."<<endl;
  cin>>c;
  switch (c)
  {
    case 1:
    {
    int x;
    cout<<"Enter Element to be Searched."<<endl;
    cin>>x;
    int index=linearsearch(arr, n, x);
    if(index==-1)
      cout<<"Element is not present in the Array."<<endl;
    else
      cout<<"Element found at position:"<<index<< endl;
    break;
    }

    case 2:
    {
    int x;
    cout<<"Enter Element to be Searched."<<endl;
    cin>>x;
    int index=binarysearch(arr, 0, n-1, x);
    if(index==-1)
    cout<<"Element is not present in the Array."<<endl;
    else
    cout<<"Element found at position:"<<index<<endl;
    break;
    }

    default:
    cout<<"Invalid Choice!"<<endl;
  }
  return 0;
}
