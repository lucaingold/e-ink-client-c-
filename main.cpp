#include <iostream>
#include <sstream>
#include <cstdlib>  // For exit()
#include "IT8951.h" // Include the IT8951 header

int main(int argc, char *argv[]) {
    // Initialize the IT8951 display
    if (IT8951_Init()) {
        std::cerr << "IT8951_Init error" << std::endl;
        return 1;
    }

    IT8951DisplayExample();
    IT8951DisplayExample2();
    std::cout << "IT8951_GUI_Example" << std::endl;
    IT8951_GUI_Example();

    // Check command-line arguments
    if (argc != 4) {
        std::cerr << "Error: argc != 4." << std::endl;
        exit(1);
    }

    uint32_t x, y;
    std::istringstream(argv[1]) >> x;
    std::istringstream(argv[2]) >> y;

    IT8951_BMP_Example(x, y, argv[3]);

    IT8951_Cancel();

    return 0;
}
