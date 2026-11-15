
#include <iostream>
#include <unordered_set>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void insert(Node*& head, int value)
{
    Node* newNode = new Node{value, NULL};

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    insert(head1, 10);
    insert(head1, 15);
    insert(head1, 4);
    insert(head1, 20);

    insert(head2, 8);
    insert(head2, 4);
    insert(head2, 2);
    insert(head2, 10);

    unordered_set<int> s1, s2, uni, inter;

    Node* temp = head1;

    while(temp != NULL)
    {
        s1.insert(temp->data);
        uni.insert(temp->data);
        temp = temp->next;
    }

    temp = head2;

    while(temp != NULL)
    {
        s2.insert(temp->data);
        uni.insert(temp->data);
        temp = temp->next;
    }

    for(int x : s1)
    {
        if(s2.find(x) != s2.end())
            inter.insert(x);
    }

    Node* unionList = NULL;
    Node* intersectionList = NULL;

    for(int x : uni)
        insert(unionList, x);

    for(int x : inter)
        insert(intersectionList, x);

    cout << "Intersection List: ";
    display(intersectionList);

    cout << "Union List: ";
    display(unionList);

    return 0;
}

