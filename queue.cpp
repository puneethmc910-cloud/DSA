#include<iostream>
#define s 5
using namespace std;

class queue
{
    public:
    int front,rear;
    int q[s];
    int item;
    queue()
    {
        rear=-1;
        front=0;
    }
    
    void enqueue()
    {
        if(rear==s-1)
        {
            cout<<"full";
        }
        else
        {
            rear++;
            q[rear]=item;
        }
    }
    
    void dequeue()
    {
        if(rear==-1)
        {
            cout<<"\nEmpty";
        }
        else
        {
            front++;
        }
    }
    
    
    void display()
    {
        if(rear==-1)
        {
            cout<<"\nempty";
        }
        
        else
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<"\nQueue elemets are "<<i<<" : "<<q[i];
            }
        }
    }
};
    
    
    int main()
    {
        int choice;
        queue p;
        for(;;)
        {
            cout<<"\n1.insert\n2.delete\n3.display\n";
            cout<<"enter the choice between (1-3):";
            cin>>choice;
            switch(choice)
            {
                case 1:
                cout<<"\nenter the elemenet inserted : ";
                cin>>p.item;
                p.enqueue();
                break;
                
                case 2:
                p.dequeue();
                break;
                
                case 3:
                p.display();
                break;
                
                default:exit(0);
            }
        }
        return 0;
    }
