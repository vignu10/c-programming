
// You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.

// Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.

// The function/method insertNodeAtBeginning accepts two arguments - head and data, head representing the head of the circular doubly linked list and data representing an integer value.

// The function/method insertNodeAtBeginning must insert the node at the beginning of the circular doubly linked list and return the head of the circular doubly linked list.

// Your task is to implement the function insertNodeAtBeginning so that it passes all the test cases.

// The following structure is used to represent the Node and is already defined in the default code (Do not write this definition again in your code).

// struct Node
// {
//     int data;
//     struct Node *prev, *next;
// };
// Example Input/Output 1:
// Input:
// 6
// 79 38 84 77 18 62
// 31

// Output:
// 31 79 38 84 77 18 62
// 62 18 77 84 38 79 31

// Explanation:
// After inserting the data 31 at the beginning of the circular doubly linked list, the list becomes 31, 79, 38, 84, 77, 18 and 62.
// Hence the output is
// 31 79 38 84 77 18 62
// 62 18 77 84 38 79 31

// Example Input/Output 2:
// Input:
// 7
// 55 33 23 75 59 18 12
// 54

// Output:
// 54 55 33 23 75 59 18 12
// 12 18 59 75 23 33 55 54


struct Node* insertNodeAtBeginning(struct Node *head, int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    struct Node* ptr=head;
    if(head==NULL)
    {
        newNode->next=newNode;
        newNode->prev=newNode;
        return newNode;
    }
    struct Node *tail=head->prev;
    newNode->next=head;
    newNode->prev=tail;
    tail->next=newNode;
    head->prev=newNode;
    return newNode;
}
