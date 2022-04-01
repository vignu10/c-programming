
// You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.

// Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.

// The function/method insertNodeAtEnd accepts two arguments - head and data, head representing the head of the circular doubly linked list and data representing an integer value.

// The function/method insertNodeAtEnd must insert the node at the end of the circular doubly linked list and return the head of the circular doubly linked list.

// Your task is to implement the function insertNodeAtEnd so that it passes all the test cases.

// The following structure is used to represent the Node and is already defined in the default code (Do not write this definition again in your code).

// struct Node
// {
//     int data;
//     struct Node *prev, *next;
// };
// Example Input/Output 1:
// Input:
// 6
// 60 93 23 46 54 97
// 50

// Output:
// 60 93 23 46 54 97 50
// 50 97 54 46 23 93 60

// Explanation:
// After inserting the data 50 at the end of the circular doubly linked list, the list becomes 60, 93, 23, 46, 54, 97 and 50.
// Hence the output is
// 60 93 23 46 54 97 50
// 50 97 54 46 23 93 60

// Example Input/Output 2:
// Input:
// 5
// 78 93 67 14 16
// 17

// Output:
// 78 93 67 14 16 17
// 17 16 14 67 93 78



struct Node* insertNodeAtEnd(struct Node *head, int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    if(head==NULL)
    {
        newNode->next=newNode;
        newNode->prev=newNode;
        return newNode;
    }
    struct Node* tail=head->prev;
    tail->next=newNode;
    newNode->next=head;
    head->prev=newNode;
    newNode->prev=tail;
    return newNode;
}
