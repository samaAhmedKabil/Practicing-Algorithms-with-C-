#include <iostream>
using namespace std;
int queue[50] ;
int n = 50;
int head = - 1;
int tail = - 1;

void enqueue() {
    int val ;
   if (tail == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
        head = 0 ;
      cout<<" insert value in the queue : "<<endl;
      cin>>val;
      tail++;
      queue[tail] = val;
   }
}

void dequeue() {
   if (head == - 1) {
      cout<<"Queue Underflow ";
   return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[head] <<endl;
      head++;
   }
}

void peek ()
{
    if (head==-1 && tail==-1)
    {
        cout << "Queue is empty !!!" << endl ;
    }
    else
        cout << "The element at the first is :-  " << queue[head] << endl ;
}

void Display_Queue () {
   if (head == - 1 )
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = head; i <=tail ; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
int main() {
      enqueue();
      dequeue();
      peek() ;
      Display_Queue ();
   return 0;
}
