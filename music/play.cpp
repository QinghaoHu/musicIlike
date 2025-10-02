
#include <cstdlib>   // for system()
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <audio_file>" << std::endl;
        return 1;
    }

    std::string audioFile = argv[1];
    std::string command = "play \"" + audioFile + "\"";

    while (true) {
        int result = std::system(command.c_str());
        if (result != 0) {
            std::cerr << "Error playing file. Exiting loop." << std::endl;
            break;
        }
    }

    return 0;
}
