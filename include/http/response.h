#ifndef RESPONSE_H

#define RESPONSE_H

#include <iostream>
#include <curl/curl.h>
#include <string>

namespace WebResponse {
    typedef struct Request {
        std::string  response_value;
        std::string  header_value;
        long         response_code;
        int          http_version;
        char*        content_type;
        char*        site_ip;
    } Request;

    size_t      writefn(void *ptr, size_t size, size_t nmemb, std::string* data);
    std::string fetch(char* url);
}

#endif // RESPONSE_HS