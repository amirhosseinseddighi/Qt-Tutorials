#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string Name;
    Book *Next;
};

Book *first = nullptr,*last = nullptr;
int count = 0;
void AddNewBook(string name) {
    Book *new_book = new Book;
    new_book -> Next =nullptr;
    new_book -> Name = name;
    if(first == nullptr) {
    first = new_book;
    last = new_book;
    }else {
        last -> Next = new_book;
        last = new_book;
    }
    count++;
}

void AddToLeft(string name) {
    if(first == nullptr) {
        AddNewBook(name);
    }else {
        Book *new_book = new Book;
        new_book->Name = name;
        new_book->Next = first;
        first = new_book;
    }
    count++;
}


void DeleteFromLeft() {
    Book *pointer = first;
    first = first -> Next;
    delete pointer;
    count--;
}

void ShowLibrary() {
    cout << count << endl;
    Book *pointer = first;
    while (pointer != last)
    {
        cout << pointer ->Name << endl; 
        pointer = pointer->Next;  
    }
    cout << last-> Name << endl;
    
}


int main() {
   
    int n;
    cin >> n;
    cin.ignore(); // Baraye fix kardan Segment error
    for(int i=0;i<n;i++) {
       string book_name;
       getline(cin,book_name);
       AddNewBook(book_name);
    }
    // Commands
    string command = "";
    while (true)
    {
        getline(cin,command);
        if(command == "DeleteLeft") {
            DeleteFromLeft();
        }
        if(command == "AddLeft") {
            string name;
            getline(cin,name);
            AddToLeft(name);
        }
        if(command == "AddRight") {
            string name;
            getline(cin,name);
            AddNewBook(name);
        }
        if(command == "Exit") {
            ShowLibrary();
            return 0;
        }
    }
    return 0;
}