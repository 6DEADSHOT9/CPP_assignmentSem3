#include <iostream>
using namespace std;

class media {
  string title, publication;

 public:
  virtual void read() {
    cout << "|      Enter Title: ";
    getline(cin, title);
    cout << "|      Enter Publication: ";
    getline(cin, publication);
  }
  virtual void show() {
    cout << "|      Title: " << title << endl;
    cout << "|      Publication: " << publication << endl;
  }
};
class book : public media {
  int pages;

 public:
  void read() {
    cout << "|      Enter Pages: ";
    cin >> pages;
  }
  void show() { cout << "|      Number of pages: " << pages << endl; }
};
class tape : public media {
  int time;

 public:
  void read() {
    cout << "|      Enter Playing-Time: ";
    cin >> time;
  }
  void show() { cout << "|      Playing-time: " << time << endl; }
};
int main() {
  media *m;
  media base;
  m = &base;
  book b1;
  tape t1;
  int choice;
  cout << "|      Enter 1 for book and 2 for tapes: ";
  cin >> choice;
  switch (choice) {
    case 1:
      m = &b1;
      m->read();
      m->show();
      break;
    case 2:
      m = &t1;
      m->read();
      m->show();
      break;
    default:
      cout << "|      Invalid choice" << endl;
      break;
  }
  return 0;
}