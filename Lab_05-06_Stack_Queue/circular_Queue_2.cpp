#include<bits/stdc++.h>
#define n 5
using namespace std;

int qu[n];
int f=-1; // front index of queue
int b=-1; // back index of queue

void enqueue(int data)
{
    if((b+1)%n==f)
    {
        cout<<"Overflow!!! Queue is full...\n"<<endl;
        return;
    }

    if(f==-1) // initially queue is empty
        f=b=0;

    else
        b = (b+1)%n;

    qu[b]=data;
}

void dequeue()
{
    if(f==-1)
    {
        cout<<"Queue is empty, nothing to pop.\n"<<endl;
        return;
    }

    if(b==f)
        f=b=-1;

    else
        f=(f+1)%n;
}

void display()
{
    if(f==-1)
    {
        cout<<"Queue is empty, nothing to display.\n\n";
        return;
    }

    cout<<"Queue: ";
    if(f<=b)
    {
        for(int i=f;i<=b;i++)
            cout<<qu[i]<<" ";
    }
    else if(b<f)
    {
        for(int i=f;i<n;i++)
            cout<<qu[i]<<" ";
        for(int i=0;i<=b;i++)
            cout<<qu[i]<<" ";
    }
    cout<<endl<<"Front: "<<f<<" Back: "<<b<<endl<<endl;
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    enqueue(60);
    dequeue();
    dequeue();
    enqueue(70);
    enqueue(80);
    display();
    dequeue();
    dequeue();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue();

}

