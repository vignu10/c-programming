// You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.

// Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.

// The function/method removeHeadNode accepts the argument - head representing the head of the circular linked list.

// The function/method removeHeadNode must remove the head node in the circular linked list and return the revised head. If the circular linked list contains only one node, then it returns NULL.

// Your task is to implement the function removeHeadNode so that it passes all the test cases.

// The following structure is used to represent the Node and is already defined in the default code (Do not write this definition again in your code).

// struct Node
// {
//     int val;
//     struct Node *next;
// };
// Example Input/Output 1:
// Input:
// 7
// 57 10 34 86 65 16 97

// Output:
// 10 34 86 65 16 97

// Explanation:
// After removing the head node, the list becomes 10, 34, 86, 65, 16 and 97.
// Hence the output is 10 34 86 65 16 97

// Example Input/Output 2:
// Input:
// 8
// 10 20 30 40 50 60 70 80

// Output:
// 20 30 40 50 60 70 80

// Example Input/Output 3:
// Input:
// 1
// 23

// Output:
// -1


struct Node* removeHeadNode(struct Node* head)
{
    if(head->next==head)
    {
        free(head);
        return NULL;
    }
    struct Node* ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=head->next;
    free(head);
    head=ptr->next;
}
