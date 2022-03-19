#include <iostream>

#include <app/main.h>
#include <http/response.h>
#include <render/window.h>

int main(int argc, char **argv) {
    
    WindowRender::Window window;
    window.init(
        argc, 
        argv,
        WIDTH,
        HEIGHT,
        TITLE
    );

    // std::string request = WebResponse::fetch((char*)"https://solindek.tech/browser-test.html");
    // std::cout << request << std::endl;

    return 0;
}