#include<iostream>
#include<string>
using namespace std;

#define MAX_SIZE 5

// Template Stack Class
 template<class T>
 class Stack
 {
 private:
 T stack[MAX_SIZE];
 int TOP;

 public:

 // Constructor
 Stack()
 {
 TOP = -1;
 }

 // Push Function
  void push(T data)
 {
  if(TOP == MAX_SIZE-1)
  {
  cout << "\n Stack Overflow\n";
  }
  else
  {
  TOP++;
  stack[TOP] = data;
  cout << data << " Inserted Successfully\n";
  }
  }

  // Pop Function
   void pop()
  {
  if(TOP == -1)
  {
  cout << "\n Stack Underflow\n";
  }
  else
  {
  cout << "Deleted Element : " << stack[TOP] << endl;
  TOP--;
  }
  }

 // Display Function
  void display()
  {
  if(TOP == -1)
  {
  cout << "\n Stack is Empty\n";
  }
  else
  {
  cout << "\n Stack Elements are:\n";
  for(int i = TOP; i >= 0; i--)
  {
  cout << stack[i] << endl;
  }
  }
  }

   // Check Empty
   bool isEmpty()
  {
  return (TOP == -1);
  }
 // Check Full
  bool isFull()
  {
  return (TOP == MAX_SIZE-1);
  }
  };
   
   // Integer Stack Menu
   void intStackMenu()
   {
   Stack<int> s;
   int ch, data;
   do
   {
   cout<<"\n----- INT STACK -----";
   cout<<"\n1.Push";
   cout<<"\n2.Pop";
   cout<<"\n3.Display";
   cout<<"\n4.Main Menu";
   cout<<"\nEnter Choice: ";
   cin>>ch;
   switch(ch)
   {
   case 1:
   cout<<"Enter Integer: ";
   cin>>data;
   s.push(data);
   break;

   case 2:
   s.pop();
   break;
    case 3:
  s.display();
     break;

   case 4:
   break;

   default:
   cout<<"Invalid Choice";
   }

   }
   while(ch!=4);
   }

   // Character Stack Menu
   void charStackMenu()
   {
   Stack<char> s;
   int ch;
   char data;
   do
   {
   cout<<"\n----- CHAR STACK -----";
   cout<<"\n1.Push";
   cout<<"\n2.Pop";
   cout<<"\n3.Display";
   cout<<"\n4.Main Menu";
   cout<<"\n Enter Choice: ";
   cin>>ch;

   switch(ch)
   {
   case 1:
   cout<<"Enter Character: ";
   cin>>data;
   s.push(data);
   break;

   case 2:
   s.pop();
   break;

   case 3:
   s.display();
   break;

   case 4:
   break;

   default:
   cout<<"Invalid Choice";
   }
   }
   while(ch!=4);
   }

   // Float Stack Menu
   void floatStackMenu()
   {
   Stack<float>s;
   int ch;
   float data;

   do
   {
   cout<<"\n    FLOAT STACK       ";
   cout<<"\n1.Push";
   cout<<"\n2.Pop";
   cout<<"\n3.Display";
   cout<<"\n4.Main Menu";
   cout<<"\n Enter Choice: ";
   cin>>ch;

   switch(ch)
   {
   case 1:
   cout<<"Enter Float: ";
   cin>>data;
   s.push(data);
   break;
   case 2:
   s.pop();
   break;
   case 3:
   s.display();
   break;
   case 4:
   break;
   default:
   cout<<"Invalid Choice";
   }
   }
   while(ch!=4);
   }
   // Double Stack Menu
   void doubleStackMenu()
   {
   Stack<double> s;
   int ch;
   double data;
   do
   {
   cout<<"\n----- DOUBLE STACK -----";
   cout<<"\n1.Push";
   cout<<"\n2.Pop";
   cout<<"\n3.Display";
   cout<<"\n4.Main Menu";
   cout<<"\nEnter Choice: ";
   cin>>ch;
   switch(ch)
   {
   case 1:
   cout<<"Enter Double: ";
   cin>>data;
   s.push(data);
   break;
   case 2:
   s.pop();
   break;
   case 3:
   s.display();
   break;
   case 4:
   break;
   default:
   cout<<"Invalid Choice";
   }
   }
   while(ch!=4);
   }
  // String Stack Menu
   void stringStackMenu()
   {
   Stack<string> s;
   int ch;
   string data;
   do
   {
   cout<<"\n----- STRING STACK -----";
   cout<<"\n1.Push";
   cout<<"\n2.Pop";
   cout<<"\n3.Display";
   cout<<"\n4.Main Menu";
   cout<<"\nEnter Choice: ";
   cin>>ch;
   switch(ch)
   {
   case 1:
   cout<<"Enter String: ";
   cin>>data;
   s.push(data);
   break;
   case 2:
   s.pop();
   break;
   case 3:
   s.display();
   break;
   case 4:
   break;
   default:
   cout<<"Invalid Choice";
   }
   }
   while(ch!=4);
   }

    int main()
    {
    int choice;
    do
    {
    cout << "\n  -----------------------------------";
    cout << "\n STACK APPLICATION USING TEMPLATES ";
    cout << "\n  -----------------------------------";
    cout << "\n1. Integer Stack";
    cout << "\n2. Character Stack";
    cout << "\n3. Float Stack";
    cout << "\n4. Double Stack";
    cout << "\n5. String Stack";
    cout << "\n6. Exit";
    cout << "\n   ****************************************";
    cout << "\nEnter Your Choice : ";
    cin >> choice;
    switch(choice)
    {
    case 1:
    cout << "\nInteger Stack Ready...\n";
    intStackMenu();
    break;
    case 2:
    cout << "\nCharacter Stack Ready...\n";
    charStackMenu();
    break;
    case 3:
    cout << "\nFloat Stack Ready...\n";
    floatStackMenu();
    break;
    case 4:
    cout << "\nDouble Stack Ready...\n";
    doubleStackMenu();
   break;
    case 5:
    cout << "\nString Stack Ready...\n";
    stringStackMenu();
    break;
    case 6:
    cout << "\nThank You... Program Terminated.\n";
    break;
    default:
    cout << "\nInvalid Choice! Please Try Again.\n";
    }
    }
    while(choice != 6);
    return 0;
       }
