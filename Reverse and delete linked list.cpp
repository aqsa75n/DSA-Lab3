#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class list
{
    node *start,*temp;
public:
    list()
    {
        start = NULL;
        temp = NULL;
    }
    void addnode(int n)
    {
        node *newnode;
		newnode= new node;
        newnode->data = n;
        newnode->next = NULL;

        if(start == NULL)
        {
            start = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }
    void display()
    {
        node *temp;
        temp = start;
        while (temp != NULL)
        {
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void reverse()
	{
	    node *prevNode, *curNode;
		if(start!= NULL)
		{
		    prevNode = start;
            curNode = start->next;
            start= start->next;
			prevNode->next = NULL;
		while(start != NULL)
        {
            start = start->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = start;
        }

        start = prevNode;
        }
   }
};
int main()
{
    list a;
    int ch,A;
    do
	{
		cout << "\nOperations on List.. \n";
	    cout << "\n1. Addnode\n2. Display\n3. Reverse and display";
	    cout << "\nEnter your choice: ";
	    cin >> ch;
	    switch (ch)
	    {
	    	case 1:
	    		cout<<"\nEnter a data of node:";
		    	cin>>A;
		        a.addnode(A);
			    break;
		    case 2:
				a.display();
				break;
			case 3:
				a.reverse();
				a.display();
		    default:
				cout << "\nThe choice is invalid..";
		
	    }   
   }while (ch!=4);
}
