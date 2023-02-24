// using priority queue as max heap and min heap

#include<bits/stdc++.h>
using namespace std ;
   
int main()
{
    // as max heap
priority_queue<int> pq;

pq.push(55);
pq.push(12);
pq.push(70);
pq.push(32);
pq.push(99);
cout<<"priority_queue as max heap"<<endl;


// as we know in max heap the top element is always be maximum then all elements
cout<<pq.top()<<endl;
// lets remove top element and check who is new top it shuld be max
pq.pop();
cout<<pq.top()<<endl;
// now chaeck the size of pq
cout<<pq.size()<<endl;

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;



cout<<"priority_queue as min heap"<<endl;
// as min heap
priority_queue<int, vector<int>, greater<int>> minheap;

minheap.push(55);
minheap.push(12);
minheap.push(70);
minheap.push(32);
minheap.push(99);

// as we know in min heap the top element is always be minimum then all elements
cout<<minheap.top()<<endl;
// lets remove top element and check who is new top it shuld be min
minheap.pop();
cout<<minheap.top()<<endl;
// now chaeck the size of minheap
cout<<minheap.size()<<endl;
return 0;
}