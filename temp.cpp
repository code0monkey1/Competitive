#include <bits/stdc++.h>
using namespace std;
#include "debug.h"
#define FILE_IO   freopen("in.txt","r",stdin); freopen("out.txt","w",stdout); 
struct BST_node
{
	BST_node * left=NULL;
	BST_node *right =NULL;
	int data;
};

BST_node * root=NULL;

BST_node * create(int data){

	BST_node * my_node=new BST_node();
	my_node->data=data;
	return my_node;
}

void ins(int data){

	if(root==NULL){
		root=create(data);
		return root ;
	}

	BST_node* temp=root;

	while(1){

		if(temp->data>=data and temp->left!=NULL)temp=temp->left;
		else if(temp->data<data and temp->right!=NULL)temp=temp->right;
		else break;
	}

	if(temp->data>=data){
		temp->left=create(data);
		return temp->left;
	}
	else temp->right=create(data);
	return temp->right;
}
struct Node
{
	int data;
	Node *next;
	Node *prev;
};
void printy(BST_node* head){

	if(head==NULL)return;
	queue<BST_node*> myque;
	myque.push(head);
	while(!myque.empty()){
		BST_node * b=myque.front();
		cout<<b->data<<" ";
		myque.pop();

		if(b->left!=NULL)myque.push(b->left);
		if(b->right!=NULL)myque.push(b->right);
	}

}

// int height(BST_node* head){

// 	auto temp=head;

// 	if(head==NULL)return 0;

// 	int left=height(temp->left);
// 	int right=height(temp->right);

// 	return max(left,right)+1;
// }



// void pre_order(BST_node* temp){

// 	if(temp==NULL)return;
// 	cout<<temp->data<<" ";
// 	pre_order(temp->left);
// 	pre_order(temp->right);

// }
// void in_order(BST_node* temp){
// 	if(temp==NULL)return;
// 	in_order(temp->left);
// 	cout<<temp->data<<" ";
// 	in_order(temp->right);

// }
// BST_node* delete_node (int value){

// 	BST_node* temp=root;
// 	if(temp==NULL)return NULL;

// 	while(temp!=NULL){

// 		if(temp->right!=NULL and temp->right->data==value)break;
// 		if(temp->left!=NULL and temp->left->data==value)break;
// 		if(temp->right!=NULL and temp->right->data>value)temp=temp->left;
// 		else if(temp->left!=NULL and temp->left->data<value)temp=temp->right;
// 		else break;
// 	}
// 	return temp;
// }
// int  maxx=0;
// int quer(BST_node *ptr){

// 	if(ptr){
// 		int a = quer(ptr->left);
// 		int b = quer(ptr->right);
// 		if (a + b + 1  > maxx)
// 			maxx = a + b+ 1;
// 		return ( a > b? a :b) + 1;
// 	}
// 	else
// 		return 0;
// }
// // int processes(BST_node* ptr){
// // 	auto left=ptr->left;
// // 	auto right=ptr->right;

// // 	int a=0,b=0;
// // 	while(left!=NULL){
// // 		a++,;
// // 		left->next;
// // 	}
// // }


pair<BST_node*,string> traversing( BST_node*  n, int objective_value ,string s){
	pair<BST_node*,string> result={NULL,s};

	if(n==NULL)return {NULL,""};
	if(n->data==objective_value)return {n,s};
	pair<BST_node*,string>  left=traversing(n->left, objective_value,s+"L");
	pair<BST_node*,string>  right=traversing(n->right, objective_value,s+"R");

	if( left.first!=NULL and  left.first->data==objective_value) {
		result={left.first,left.second};
	}
	if( right.first!=NULL and right.first->data==objective_value){

		result={right.first,right.second};
	}

	return result;
}
void find_and_fix(int data_to_fix,int objective_value,char alignment){

	BST_node * n = new BST_node();
	n->data=data_to_fix;

	BST_node * objective_node=traversing(root,objective_value,"").first;
	if(alignment=='L')objective_node->left=n;
	else objective_node->right=n;

}

int validate(BST_node * head){
	static int maxx=INT_MIN;
	if(head==NULL)return 1;

	int temp;
	int processing;
	if(head->left!=NULL and head->left->data<=head->data and head->right!=NULL and head->right->data>head->data) processing= 1;
	if(head->left!=NULL and head->left->data<=head->data) processing= 1;
	else if ( head->right!=NULL and head->right->data>head->data) processing= 1;
	else if (head->right==NULL and head->left==NULL)processing= 1;
	else processing=  0 ;


	if(head->right!=NULL)maxx=max(maxx,head->right->data);
	validate(head->left);
	validate(head->right);
	return (processing and (head->data>=maxx)); 

}
// Node* SortedInsert(Node *head,int data)
// {    Node * n=new Node();
// 	n->data=data;
// 	n->prev=NULL;
// 	n->next=NULL;

// 	if(head==NULL)return n;

// 	Node* temp=head;

// 	while(temp->next!=NULL and temp->data<data)temp=temp->next;


// 	if(temp->data>data){
// 		n->next=temp;
// 		temp->prev=n;

// 		if(temp==head)return n;

// 	}
// 	else{
// 		head->next=n;
// 		n->prev=head;
// 	}
// 	if(temp==head)return head;


// 	return head;
// }

// void printy(BST_node* head){

// 	if(head==NULL)return;
// 	queue<BST_node*> myque;
// 	myque.push(head);
// 	while(!myque.empty()){
// 		BST_node * b=myque.front();
// 		if(!taken[b->data]){
// 			cout<<b->data;
// 			taken[b->data]=1;
// 		}
// 		myque.pop();

// 		if(b->left!=NULL)myque.push(b->left);
// 		if(b->right!=NULL)myque.push(b->right);
// 	}

// }



int main() {
    #ifndef ONLINE_JUDGE
	FILE_IO
 	#endif
    


	return 0;
}