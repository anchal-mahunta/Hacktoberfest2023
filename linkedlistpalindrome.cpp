
class Solution{
  public:
    //Function to check whether the list is palindrome.
bool isPalindrome(Node *head) {
    stack<Node*> s;
    Node* temp = head;

    while (temp != nullptr) {
        s.push(temp);
        temp = temp->next;
    }

    // Reset temp to the head of the linked list
    temp = head;

    while (!s.empty()) {
        Node* topNode = s.top();
        s.pop();

        if (temp->data != topNode->data) {
            return false;
        }

        temp = temp->next;
    }

    return true;
}
};
int main(){
int T,i,n,l,firstdata;
cin>>T;
while(T--)
{ struct Node* head=NULL;
 *tail=NULL;
cin>>n;
cin>>firstdate;
head=new Node(firstdata);
tail=head;
for(i=1;i<n;i++){
cin>>l;
tail->next=newNode(l);
tail=tail->next;
}
Solution obj;
cout<<obj.ispalindrome(head)<<endl;
}
return 0;
}



