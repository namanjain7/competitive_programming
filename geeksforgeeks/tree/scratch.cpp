#include<iostream>
#include<vector>
#include <queue>
using namespace std;

struct node{
	int data;
	struct node *left, *right;
	node(int data){
		this -> data = data;
		left = right = nullptr;
	}
};

int main(){
	struct node* root = new node(1);

	root -> left = new node(2);

	root -> left -> right = new node(4);
	root -> right = new node(3);
	root -> right -> left = new node(5);
	root -> right -> right = new node(6);
	root -> right -> right -> right = new node(7);

	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* curr = q.front();
		q.pop();
		cout << curr -> data << endl;
		if(curr -> left != nullptr) q.push(curr -> left);
		if(curr -> right != nullptr) q.push(curr -> right);
	}
}