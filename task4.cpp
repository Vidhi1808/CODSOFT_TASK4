#include <iostream>
using namespace std;
class Library
{
public:
  int id;
  char name[100];
  char author[100];
  char student[100];
  int price;
  int pages;
};
int main()
{
  Library lib[20];
  int input = 0;
  int count = 0;
  while (input != 3)
  {
    cout << "Enter 1 to input deatils like id,name,author,student,price,pages" << endl;
    cout << "Enter 2 to display details" << endl;
    cout << "Enter 3 to quit" << endl;
    cin >> input;
    switch (input)
    {
    case 1:
    {
    start:
      cout << "Enter Book ID" << endl;
      cin >> lib[count].id;
      cout << "Enter Book Name" << endl;
      cin >> lib[count].name;
      cout << "Enter Book Author" << endl;
      cin >> lib[count].author;
      cout << "Enter Student Name" << endl;
      cin >> lib[count].student;
      cout << "Enter Book Price" << endl;
      cin >> lib[count].price;
      cout << "Enter Book Pages" << endl;
      cin >> lib[count].pages;
      count++;
      break;
    }
    case 2:
    {
      for (int i = 0; i < count; i++)
      {
        cout << "Book Id:" << lib[i].id << endl;
        cout << "Book Name:" << lib[i].name << endl;
        cout << "Enter Book Author" << lib[i].author << endl;
        cout << "Enter Student Name" << lib[i].student << endl;
        cout << "Enter Book Price" << lib[i].price << endl;
        cout << "Enter Book Pages" << lib[i].pages << endl;
      }
      break;
    }
    case 3:
    {
      exit(0);
      break;
    }
    default:
      cout << "You have entered wrong value,please type again" << endl;
      goto start;
    }
  }
  return 0;
}