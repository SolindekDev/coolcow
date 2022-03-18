#include <iostream>

#include <http/response.h>

int main(int argc, char **argv) {
    WebResponse::fetch("https://google.com/");
    return 0;
}