#include<iostream>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define size 20
using namespace std;

struct node{
    int prn;
    char name[size];
    struct node *next;
};

class member{
    public:
    struct node *head;
    member();
    struct node *create();
    void display(struct node*);
    void count();
    void reverse(struct node*);
    struct node *insert_president();
    void insert_member();
    void insert_secretary();
    struct node *remove();
    struct node *concat(struct node*, struct node*);
    ~member();
};

member :: member(){
    head = NULL;
}

member :: ~member(){
    node *temp, *temp1;
    temp = head->next;
    delete head;
    while(temp != NULL){
        temp1 = temp->next;
        delete temp;
        temp = temp1;
    }
}

struct node *member :: create(){
    struct node *temp = NULL, *New;
    int val, flag;
    char n[size];
    char ans = 'y';
    flag = TRUE;
    do{
      cout<<"Enter the prn of student: ";
      cin>>val;
      cout<<"Enter the name: ";
      cin>>n;
      New = new node();
      if(New == NULL){
        cout<<"Memory not allocated";
      }
      New->prn = val;
      strcpy(New->name, n);
      New->next = NULL;
      if(flag == TRUE){
        head = New;
        temp = head;
        flag = FALSE;
      }
      else{
        temp->next = New;
        temp = New;
      }
      cout<<"Do you want to enter more elements(y/n): ";
      cin>>ans;
    }while(ans == 'y' || ans == 'Y');
    return head;
}
void member :: display(struct node *head){
    struct node *temp;
    temp = head;
    if(temp == NULL){
        cout<<"List is empty";
        return;
    }
    while(temp != NULL){
        cout<<" "<<temp->prn<<" "<<temp->name<<endl;
        temp = temp->next;
    }
}

void member :: count(){
    struct node *temp;
    int count = 0;
    temp = head;
    if(temp == NULL){
        cout<<"List is empty";
        return;
    }
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout<<"Total number of members are: "<<count<<endl;
}
void member :: reverse(struct node *head){
    if(head != NULL){
        reverse(head->next);
    }
        else{
        return;
        }
        cout<<" "<<head->prn<<" "<<head->name<<endl;
}
struct node *member :: remove(){
    struct node *temp, *prev;
    int key;
    prev = new node;
    temp = head;
    cout<<"Enter the prn of the node you want to delete: ";
    cin>>key;
    while(temp != NULL){
        if(temp->prn == key)
        break;
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL){
        cout<<"Node not found"<<endl;
    }
    else{
        if(temp == head)
        head = temp->next;
        else
        prev->next = temp->next;
        delete temp;
        cout<<"The number is deleted";
    }
    return head;
}
void member :: insert_secretary(){
    struct node *New, *temp;
    New = new node;
    cout<<"Enter the prn of the student: ";
    cin>>New->prn;
    cout<<"Enter name of the student: ";
    cin>>New->name;
    New->next = NULL;
    if(head == NULL){
        head = New;
    }
    else{
        temp = head;
        while(temp->next != NULL)
        temp = temp->next;
        temp->next = New;
        New->next = NULL;
    }
    cout<<"The member is inserted";
}
void member :: insert_member(){
    int key;
    struct node *temp, *New;
    New = new node;
    cout<<"Enter the prn of the student: ";
    cin>>New->prn;
    cout<<"\n Enter the name of the student: ";  
	cin>>New->name;
    if(head == NULL){
        head = New;
    }
    else{
        cout<<"Enter the prn after which youu want to insert the node: ";
        cin>>key;
        temp = head;
        do{
        if(temp->prn == key){
            New->next = temp->next;
            temp->next = New;
            break;
        }
        else{
            temp = temp->next;
        }
        }while(temp != NULL);
    }
    cout<<"The number is inserted"<<endl;
}
struct node *member :: insert_president(){
    node *New,*temp;                             
	New=new node;                               
	cout<<"\n Enter the PRN of the student ";    
	cin>>New->prn;
	cout<<"\n Enter the name of the student: ";  
	cin>>New->name;
	if(head==NULL)                               
		head=New;                               
	else
	{
	temp=head;                            
	New->next=temp;                         
	head=New;                               
	}
	cout<<"\n The member is inserted";           
	return head;
}
struct node *member::concat(node *head1,node *head2)        //concatination
{
	struct node *temp;                                  //creating node for link list
	temp=head1;                                  //initialise head1 to temp
	while(temp->next!=NULL)                      //if temp's next equal to NULL
		temp=temp->next;                        //initialise temp's next to temp
	temp->next=head2;                            //initialise head to temp's next
	cout<<"\n The lists are concatenated";       //print
	return head1;
}

int main()
{
	member s;                                       //Object of class ssl
	int ch,ch1;
	char ans='y';                                //initialisation of ans to y
	node *start=NULL;
	node *start1,*start2,*start3;                //creating of node
	start1=NULL;                                 //initialise start1=NULL
	start2=NULL;                                 //initialise start2=NULL
	start3=NULL;                                 //initialise start3=NULL
	
	do
	{
	cout<<"\n 1. Create.";
	cout<<"\n 2. Display members";
	cout<<"\n 3. Insert member";
	cout<<"\n 4. Delete member";
	cout<<"\n 5. Total number of members of club";
	cout<<"\n 6. Display list in reverse using recursion";
	cout<<"\n 7. Concatenate two lists";
	cout<<"\n 8. Exit";
	cout<<"\n Enter your choice: ";
	cin>>ch;
	switch(ch)
{
	case 1:
		start=s.create();                       //creation of list
		break;
	case 2:
		s.display(start);                       //display of list
		break;
	case 3:
		cout<<"\n The members are ";            //insertion
		s.display(start);
		cout<<"\n Menu";
		cout<<"\n 1. Insert President";    
		cout<<"\n 2. Insert Member";       
		cout<<"\n 3. Insert Secretary";    
		cout<<"\n Enter your choice: ";
		cin>>ch1;
	switch(ch1)                             //switch case
{
			          //menu
	case 1:
		start=s.insert_president();   //insert president
		break;
	case 2:
		s.insert_member();            //insert member
		break;
	case 3:
		s.insert_secretary();         //insert secretary
		break;
		}
		break;		
	case 4:
		start=s.remove();                       //delete member
		break;
	case 5:
		s.count();                              //count member
		break;
	case 6:
		s.reverse(start);                       //reverse list
		break;
	case 7:                                      //concatination
		cout<<"\n Enter the data for first division";
		start1=s.create();
		cout<<"\n Enter the data for second division";
		start2=s.create();
		start3=s.concat(start1,start2);
		s.display(start3);
		break;
		}
		cout<<"\n Want to continue to Menu(y/n): ";       //loop conditon 
		cin>>ans;
	}while(ans=='y'||ans=='Y');                            //loop conditon statement
	return 0;
}
