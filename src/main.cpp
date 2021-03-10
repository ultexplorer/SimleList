#include "include/list.h"

int main(int arg_count, char *args[])
{
    List simpleList;
    if(arg_count>1){
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    }
    else{
        cout << "Ueername not supplied... exeting the program";
    }
    return 0;
}

