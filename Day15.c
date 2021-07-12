/*Hackerrank Day 15 Linked List 30 days of code
Task
Complete the insert function in your editor so that it creates a new Node (pass  as the Node constructor argument) and inserts it at the tail of the linked list referenced by the  parameter. Once the new node is added, return the reference to the  node.

Note: The  argument is null for an empty list.

Input Format

The first line contains T, the number of elements to insert.
Each of the next  lines contains an integer to insert at the end of the list.

Output Format

Return a reference to the  node of the linked list.

Sample Input

STDIN   Function
-----   --------
4       T = 4
2       first data = 2
3
4
1       fourth data = 1
Sample Output

2 3 4 1
*/
#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
           Node* newhead = new Node(data);
          //Complete this method
          if(head!=NULL)
          {
             Node *current = head;
             while(current->next != NULL) {
                  current = current->next;
          }
          
           current->next = newhead; 
              return head;
      }
           else
           {
               return newhead;
           }
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}