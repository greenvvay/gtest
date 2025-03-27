#include <iostream>

#include "note/note.hpp"

int main(int argc, char** argv) {
    Note note;
    std::cout << note.func1() << std::endl;
    std::cout << note.func2() << std::endl;
}