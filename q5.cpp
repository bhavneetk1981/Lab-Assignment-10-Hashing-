
#include <iostream>
#include <unordered_set>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    head->next->next->next = new Node{4, NULL};

    head->next->next->next->next = head->next;

    unordered_set<Node*> s;
    Node* temp = head;

    while(temp != NULL)
    {
        if(s.find(temp) != s.end())
        {
            cout << "true";
            return 0;
        }

        s.insert(temp);
        temp = temp->next;
    }

    cout << "false";

    return 0;
}

