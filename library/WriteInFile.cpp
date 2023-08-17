#include <fstream>
#include <iostream>
#include "WriteInFile.h"

namespace WriteInFile {
    void writeToFile(const std::string& filename, const std::string& content) {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << content;
            outFile.close();
            std::cout << "Content written to " << filename << std::endl;
        } else {
            std::cerr << "Unable to open " << filename << " for writing." << std::endl;
        }
    }
}

