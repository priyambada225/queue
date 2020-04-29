#include<iostream>
using namespace std;
#define SIZE 10

class Queue
{
    int a[SIZE];
    int rear;   //same as tail
    int front;  //same as head
  
    public:
    Queue()
    {
        rear = front = -1;
    }
    
    //declaring enqueue, dequeue and display functions
    void enqueue(int x);     
    int dequeue();
    void display();
};

// function enqueue - to add data to queue
void Queue :: enqueue(int x)
{
    if(front == -1) {
        front++;
    }
    if( rear == SIZE-1)
    {
        cout << "Queue is full";
    }
    else
    {
        a[++rear] = x;
    }
    cout<<"inserted elements is :"<<x<<endl;
}

// function dequeue - to remove data from queue
int Queue :: dequeue()

//we remove the element from head position and then move head to the next position.
{
    return a[++front];  // following approach [B], explained above
    
}

// function to display the queue elements
void Queue :: display()
{
    int i;
    for( i = front; i <= rear; i++)
    {
        cout << a[i] << endl;
    }
}
/*
void Queue :: display()//another method to dequeue : we remove the element at head position, and then one by one shift all the other elements in forward position.
{
return a[0];    //returning first element
for (i = 0; i < tail-1; i++)    //shifting all other elements
{
    a[i] = a[i+1];
    tail--;
}
}
*/

// the main function
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.enqueue(6);
    q.dequeue();
    q.dequeue();
    q.enqueue(7);
    
    q.display();
    
    return 0;
}
