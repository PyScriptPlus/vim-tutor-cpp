# vim-tutor-cpp

```cpp
#include <iostream>

#define VIM "Vim tutorial part (1)"


int main() {

   std::cout << VIM << '\n';
   std::cout << "I --> Insert Mode\n";
   std::cout << "x,X --> Delete one character\n";
   std::cout << "o,O --> New line\n";
   std::cout << "r --> replace one character\n";
   std::cout << "a --> append\n";
   std::cout << "u --> undo\n";
   std::cout << "zz --> Center current line on screen (middle of window)\n";
   std::cout << "d --> delete (dw, delete word) | (dd, delete a single line) | (5dd, delete 5 lines)"
           << " | (Hybrid number & command)\n";
   std::cout << "J --> join\n";
   std::cout << "G --> go to line (10G, 2G, 1G, G)\n";
   std::cout << "y --> yank/copy (yy, yw, 10yy, ...)\n";
   std::cout << "p,P --> Paste\n";
   std::cout << "/ --> Search(/cout) Next in the Search --> (n,N)\n";
   std::cout << "$ --> end of line\n";
   std::cout << "^ --> start of line\n";
   std::cout << ". --> repeat\n";
   std::cout << "Hybrid --> ($dd) | (^dd)\n";

   return 0;
}
```
