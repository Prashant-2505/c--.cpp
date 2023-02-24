// heapify algorithm using max heap
 
   #include<bits/stdc++.h>
   using namespace std ;

     void heapify (int arr[], int n, int i)
     {
           int largest = i;
           int left = 2*i;
           int right = 2*i+1;

           if(left<n && arr[largest]<arr[left])
           {
            largest = left;
           }
           if(right<n && arr[largest]<arr[right])
           {
            largest = right;
           }

           if(largest != i)
           {
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
           }
     }

   int main()
   {
   
   int arr[6]= {-1,50,55,45,67,30};
   int n= 5;

   for(int i=n/2; i>0; i--)
   {
    heapify(arr,n,i);
   }

   for(int i=1;i<=n;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
   }