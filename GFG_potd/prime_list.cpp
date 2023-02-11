//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
        bool isPrime(int n){
            for(int i = 2; i*i <=n;i++){
                if(n%i==0)return false;
            }
            return true;
        }
    Node *primeList(Node *head){
        Node* temp = head;
        while(temp){
            int num = temp->val;
            int p1 = num,p2=num;
            if(num==1){
                temp->val=2;
                temp=temp->next;
                continue;
            }
            while(!isPrime(p1))
            p1--;
            while(!isPrime(p2))
            p2++;
            if(num-p1<=p2-num)
            temp->val=p1;
            else
            temp->val=p2;
            temp=temp->next;
        }
        return head;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends