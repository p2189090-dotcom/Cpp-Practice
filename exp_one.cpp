#include <iostream>

int main();

void foo(){
    std::cout<<"Program worked because of foo()\n";
    main();
}

int main(){
    std::cout<<"Program worked because of main";
    foo();
}
