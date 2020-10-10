#include<iostream>
#include<string>
using namespace std;
class Stack
{
	int top;
	int arr[5];
	public:
		Stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
	bool isEmpty()
	{
		if (top==1)
		{
		
			return true;
	}
		else
		{
		
		    return false;}
	}
	bool isFull()
	{
		if(top==4)

			cout<<"is full"<<endl;
	
		else
		
		    return false;
	
	}
	void push(int val)
	{
		if(isFull()==1)
		{
			
			cout<<"is full"<<endl;
	}
		else
		{
			top++;
			arr[top]=val;
		}
	}
	int pop()
	{
		if (isEmpty())
		{
			cout<<"is underflow"<<endl;
	}
		else
		{
			int popval=arr[top];
			arr[top]=0;
			top--;
			return popval;
				
		}
	}
};

int main()
{
	Stack s1;
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	cout<<s1.pop();
}
