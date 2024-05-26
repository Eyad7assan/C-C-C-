#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {
    if (argc != 3 && argc != 4) {
        cout << "Usage: " << argv[0] << " input_file output_file [r]" << endl;
        return 1;
    }
    
    string input_file = argv[1];
    string output_file = argv[2];
    string compile_command = "g++ " + input_file + " -o " + output_file;

    // Compile the C++ file using the compile command provided as an argument
    system(compile_command.c_str());

    // Check if the "r" flag is provided and if so, run the compiled executable
    if (argc == 4 && string(argv[3]) == "r") {
        string run_command = "./" + output_file;
        system(run_command.c_str());
    }

    return 0;
}