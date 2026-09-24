#include <iostream>
<<<<<<< HEAD
#include "List.h"
#include "Data.h"
    int main() {
        std::unique_ptr<List<int>> list = makeList<int>();
        list->addFront(new int(10));
        list->addFront(new int(20));
        list->addFront(new int(30));
        list->print();

        int key = 20;
        std::cout << "search(20): " << (list->search(&key) ? "found" : "not found") << std::endl;

        list->deleteFront();

        list->print();

        std::unique_ptr<List<Data>> roster = makeList<Data>();

        roster->addFront(new Data(1, "Alice"));

        roster->addFront(new Data(2, "Bilal"));

        roster->addFront(new Data(3, "Chen"));

        roster->print();

        Data query(2, "");
        std::cout << "search(id 2): " << (roster->search(&query) ? "found" : "not found") << std::endl;
    return 0;
=======

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.

    const auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
        std::cout << "i = " << i << std::endl;
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
>>>>>>> 72a310767aae8eba33f01687a89a6a95fbb8be34
}