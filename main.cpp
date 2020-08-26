#include<iostream>
#include"BinaryTree.hpp"
#include"Deque.hpp"
using namespace std;

int main(){
BinaryTree bt;
BinaryTree bt1("khalid");
BinaryTree bt2("mohamed");
BinaryTree bt3("aden", bt1, bt2);
BinaryTree bt4("najib", bt3, bt1);
BinaryTree bt5("ikrama", bt4, bt3);
cout<<"the height is "<<bt5.height()<<endl;
cout<<"the size of the tree is "<<bt5.size()<<endl;
cout<<"is the tree empty? "<<bt5.is_empty()<<endl;
Deque<string>preorderQ;
bt5.pre_order(preorderQ);
cout<<"The preorder list of elements is ";
preorderQ.print_queue();
cout<<endl;
Deque<string>postorderQ;
bt5.post_order(postorderQ);
cout<<"The postorder list of elements is ";
postorderQ.print_queue();
cout<<endl;
Deque<string>inorderQ;
bt5.in_order(inorderQ);
cout<<"The inorder list of elements is ";
inorderQ.print_queue();
return 0;
}
