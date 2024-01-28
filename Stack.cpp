// Without STL Used in Stack Operation Used in Push, Pop and Top and Empty Elements

#include <iostream>
#include <stack>

using namespace std;

// Create a Class
class Stack
{
     public:
   // Property 
   int *array;
   int top;
   int size;

   // Constrctor Used
     Stack(int size)
     {
           this->size=size;
           array = new int[size];
           top = -1; // Start of val in -1
     }

      // Behaviour
     // Push Operation

     void Push(int element) // ELements to Work
     {
         if(size - top > 1) // Total Size - Top  > 1 = Space empty
         { 
             top++;
             array[top] = element;
         }

         else
         {
            cout << "Stack is Overflow" << endl;
         }
     }

     // POP Operation
      void Pop()
     {
          // When Push Elements after Pop 
          // Atleast One Elements Push

          if(top >= 0)
          {
              top--;
          }

          else
          {
             cout << "Stack is Underflow" << endl;
          }
     }

     // Peek Operation
      int Peek() // Top Elements
     {
         if(top >=0 && top <size)
         {
             return array[top];
         }  

         else
         {
             cout << "Stack is Empty" << endl;
             return -1;
         }  
     }

     // Empty Operation
     int Empty()
     {
        if(top == -1)
        {
             return true;
        }

        else
        {
            return false;
        }
     }
};

int main()
{
    // Stack Size
    Stack s1(5);

    // Push Elements
    s1.Push(10);
    s1.Push(20);
    s1.Push(30);
    s1.Push(40);
    s1.Push(50);

    cout <<  "Top element: " << s1.Peek() << endl; 

    s1.Pop();

    cout <<  "Top element: " << s1.Peek() << endl; 

    s1.Pop();

    cout <<  "Top element: " << s1.Peek() << endl; 

    return 0;
}