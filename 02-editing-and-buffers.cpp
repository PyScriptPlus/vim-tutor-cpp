#include <iostream>
#define VIM "Vim tutorial part (2)"

int main() {

   std::cout << VIM << '\n';
   std::cout << "% --> move to Block or Brace and Parentheses\n";
   std::cout << "v --> (Visual Mode) select to text\n";
   std::cout << "Hybrid --> (v) select text and (dd) delete the select text\n";
   std::cout << "> --> Indent selected lines (move right)\n";
   std::cout << "< --> Un-indent selected lines (move left)\n";
   std::cout << "Sort: (v) select text go command mode (:.....sort)\n";
   std::cout << "A --> end line insert\n";
   std::cout << "4 line select with (v) and go command mode (:....normal A;) "
             << "At the end, those 4 lines are placed for each of the 4 large wires.\n";
   std::cout << "Command Mode :set number --> show line number\n";
   std::cout << "Command Mode :set nonumber --> hide line number\n";
   std::cout << "Command Mode :colorscheme default --> theme change IDE"
             << " :colorscheme (click Tab) all color show\n";
   std::cout << "Command Mode :Explore --> File manager\n";
   std::cout << "Command Mode :Vexplore --> Vertical screen\n";
   std::cout << "Command Mode :Sexplore --> Split screen\n";
   std::cout << "Ctrl + W & w | -> | <- Moving between pages\n";
   std::cout << "Exit to Vertical or Split mode :q or :q!\n";
   std::cout << "Vertical Split :Vsexplore\n";
   std::cout << "OS Command in vim :!ls show list file and .....\n";
   std::cout << "OS Command in vim :!df -h  show disk space\n";
   std::cout << "Output command in :.!ls Brings command output into the Vim editor\n";
   // Exam:
   // My list file:
   //myApp
   //vim1.cpp
   //vim2.cpp

   //Exam:
   /*
        Filesystem      Size  Used Avail Use% Mounted on
        tmpfs          1020M  3.8M 1016M   1% /.....
        /dev/sda2       457G   18G  416G   5% /
        tmpfs           2.5G     0  2.5G   0% /dev/....
        efivarfs        320K   47K  269K  15% /sys/firmware/..../.....
        none            1.0M     0  1.0M   0% /run/credentials/...........
        tmpfs           2.5G   12K  2.5G   1% /tmp
        none            1.0M     0  1.0M   0% /run/credentials/.........
        /dev/sda1       1.1G  6.4M  1.1G   1% /boot/efi
        tmpfs           510M  300K  510M   1% /run/user/.....
        none            1.0M     0  1.0M   0% ......................
        /dev/sdb1        30G  183M   30G   1% /run/media/mohammad/......
   */

   std::cout << "Create buffer in terminal example: vim main.cpp main.hpp README.md ";
   std::cout << "3 buffer create show buffer list :ls ";
   std::cout << "Next buffer :bn & Previes buffer :bp & Number find buffer :b1 | b:2 ...\n";
   std::cout << "Name find buffer example: b READ\n"; // Niyazi nist esm kamelesho benevisi
   std::cout << "Buffer delete :bd & :bd!\n";

   std::cout << "Replace pro: :s/a/b/g\n"; // /g ya'ni harchi (a) to in khat bod replace kon ba (b) on
   std::cout << "Example :s/hi/Hello/g\n";

   // Mitunim begim mesal az line 60 ta 65 harchi mamad bod replace kon ba Mohammad
   std::cout << "Example :60,65s/mamad/Mohammad/g\n";

   // Mikham kol file harchi int bod bekone double
   std::cout << "Example :%s/int/double/g\n";

   // Hala mikhaym az line mesal 10 ta 20 ro comment konim
   // Bayad kami regex bazi dar biyarim
   std::cout << "Example :10,20s/^/\/\// \n"; // g ham niyaz nist bezari
   // Warning: In code balayi yek warning ham mide be khater regex \/ vali khob.
   // In dorust chapesh mikone: code payini
   std::cout << "Example :10,20s/^/\\\/\\\// \n";

   // Part 3:
   // Edit config file ~/.vimrc

   return 0;
}
