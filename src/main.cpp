#include <iostream>
#include "Print.h"
#include "WriteInFile.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " [-c|-f]" << std::endl;
        return 1;
    }

    if (std::string(argv[1]) == "-c") {
        Print::printHelloWorld();
    } else if (std::string(argv[1]) == "-f") {
        WriteInFile::writeToFile("helloWorld.txt", "helloWorld\n");
    } else {
        std::cerr << "Invalid option: " << argv[1] << std::endl;
        return 1;
    }

    return 0;
}

