// You are required to complete the given code. You can click on Run anytime to check the compilation/execution status of the program. You can use printf to debug your code. The submitted code should be logically/syntactically correct and pass all test cases. Do not write the main() function as it is not required.

// Code Approach: For this question, you will need to complete the code as in the given implementation. We do not expect you to modify the approach.

// The function/method removeTailNode accepts the arguments - head and tail representing the head and tail of the circular linked list.

// The function/method removeTailNode must remove the tail node in the circular linked list and return the revised tail.

// Your task is to implement the function removeTailNode so that it passes all the test cases.

// The following structure is used to represent the Node and is already defined in the default code (Do not write this definition again in your code).

// struct Node
// {
//     int val;
//     struct Node *next;
// };
// Example Input/Output 1:
// Input:
// 5
// 93 29 48 53 30

// Output:
// 93 29 48 53

// Explanation:
// After removing the tail node, the list becomes 93, 29, 48 and 53.
// Hence the output is 93 29 48 53

// Example Input/Output 2:
// Input:
// 10
// 97 10 67 71 16 53 59 57 85 23

// Output:
// 97 10 67 71 16 53 59 57 85


struct Node* removeTailNode(struct Node* head, struct Node* tail)
{
       struct Node* ptr= head;
       while(ptr->next!=tail)
       {
           ptr=ptr->next;
       }
       ptr->next=head;
       free(tail);
        return ptr;
}



