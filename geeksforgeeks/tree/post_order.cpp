#include<iostream>
#include<vector>
using namespace std;

struct node{
	int id;
	struct node *left, *right;
	node(int id){
		this -> id = id;
		left = right = nullptr;
	}
};

void postOrder(struct node* root){
	if(root == nullptr) return;
	
	
	postOrder(root -> left);
	postOrder(root -> right);
	cout << root -> id << "\t";

}

void preOrder(struct node* root){
	if(root == nullptr) return;

	cout << root -> id << "\t";
	preOrder(root -> left);
	preOrder(root -> right);
}

void inOrder(struct node* root){
	if(root == nullptr) return;

	inOrder(root -> left);
	cout << root -> id << "\t";
	inOrder(root -> right);
}

int main(){
	struct node* root = new node(1);

	root -> left = new node(2);

	root -> left -> right = new node(4);
	root -> right = new node(3);
	root -> right -> left = new node(5);
	root -> right -> right = new node(6);
	root -> right -> right -> right = new node(7);

	cout << "PostOrder is: " << endl;
	postOrder(root);

	cout << "Preorder is: " << endl;
	preOrder(root);

	cout << "Inorder is: " << endl;
	inOrder(root);
}