#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main() {
  list <int> l = {1,2,3,4,5,6,7,8,9,10};
  stack <int, list <int>> s(l);
  while(s.top() != 7) {
    cout <<"Видалиний елемент стека: " << s.top() << endl;
    s.pop();
  }
  cout <<"Вершина стека: "<< s.top() << endl;
  
}