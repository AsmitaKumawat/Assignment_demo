#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *add;
};
node* insertatbeg(node *head, int n)
{
    node *p=new node;
    p->data =n;
    p->add= head;
    head=p;
    return head;
}
void traverse(node*temp)
{
    while(temp!=NULL)

    {
        cout<<temp->data<<"\t";
        temp=temp->add;
    }
}
insertatpos(node *temp, int n,int pos)
{
    node*p=new node;
    p->data=n;
    int i=1;
    while(i<pos-1)
    {
        temp=temp->add;
        i++;
    }
    p->add=temp->add;
    temp->add=p;
}
int main()
{
    node*head =new node;
    head->data =10;
    head->add=NULL;
    head =insertatbeg(head,8);
    traverse(head);
    cout<<endl;
    head =insertatbeg(head,1);
    traverse(head);
    cout<<endl;
    head =insertatbeg(head,7);
    traverse(head);
    cout<<endl;


    insertatpos(head,3,3);
    traverse(head);
}
