#include <iostream>
using namespace std;
const int MAX=10;
class Job
{
	int id;
	int priority;
	public:
	void readData()
	{
		cout<<"\nEnter Job ID :: ";
		cin>>id;
		cout<<"\nEnter Job Priority :: ";
		cin>>priority;
	}
	void displayData()
	{
		cout<<"\n\t"<<id;
		cout<<"\t\t"<<priority;
	}
	friend class Queue;
};
class Queue
{
	Job data[MAX];
	int front,rear;
	public:
	Queue()
	{
		front=rear=-1;
	}
	void enqueue();
	void dequeue();
	int isFull();
	int isEmpty();
	void display();
};
int Queue::isFull()
{
	if(rear==MAX-1)
		return 1;
	else
		return 0;
}
int Queue::isEmpty()
{
	if(rear==-1||front==rear+1)
		return 1;
	else
		return 0;
}
void Queue::enqueue()
{
	if(isFull())
		cout<<"\nCan't add ! Queue is Full !";
	else
	{
		Job temp;
		temp.readData();
		if(rear==-1)
		{
			front++;
			data[++rear]=temp;
			cout<<"\nJob added successfully !";
		}
		else
		{
			int i=rear;
			while(i>=0 && data[i].priority>temp.priority)
			{
				data[i+1]=data[i];
				i--;
			}
			data[i+1]=temp;
			rear++;
			cout<<"\nJob added successfully !";
		}
	}
}
void Queue::dequeue()
{
	if(isEmpty())
		cout<<"\nCan't delete ! Queue is Empty !";
	else
	{
		front++;
		cout<<"\nJob removed successfully !";
	}
}
void Queue::display()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty !";
	}
	else
	{
		cout<<"\n\tJob ID\t\tJob Priority";
		cout<<"\n\t----------------------------";
		for(int i=front;i<=rear;i++)
		data[i].displayData();
	}
}
int main()
{
	int ch;
	Queue q;
	cout<<"\n--------------Job Queue Menu (With Priorities)--------------";
	cout<<"\n1. Add Job";
	cout<<"\n2. Remove Job";
	cout<<"\n3. Display Jobs";
	cout<<"\n4. Exit";
	do
	{
		cout<<"\nEnter your choice:";
		cin>>ch;	
		switch(ch) {
			case 1:
				q.enqueue();
				break;
			case 2:
				q.dequeue();
				break;
			case 3:
				q.display();
				break;
		}
	}while(ch!=4);
}
