#include <iostream>
#include <string>
#include <curl/curl.h>
#include <cstdlib>
#include <cstdio>

#include <http/response.h>

size_t WebResponse::writefn(void *ptr, size_t size, size_t nmemb, std::string* data) {
    data->append((char*) ptr, size * nmemb);
    return size * nmemb;
}

// WebResponse::Request* request_structure = (WebResponse::Request*)malloc(sizeof(WebResponse::Request));

std::string WebResponse::fetch(char* url) {
    long response_code;
    int http_version;
    char* content_type;
    char* site_ip;
    std::string response;
    std::string header;

    CURL* curl = curl_easy_init();

    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL,              url);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION,   1L);
        curl_easy_setopt(curl, CURLOPT_USERAGENT,        "coolcow 1.0.0");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION,    WebResponse::writefn);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA,        &response);
        curl_easy_setopt(curl, CURLOPT_HEADERDATA,       &header);

        CURLcode response_ = curl_easy_perform(curl);
        if(response_ != CURLE_OK) {
            std::cout << "Error. " << std::endl; 
            exit(0);
        }
        else {
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE,  &response_code);
            curl_easy_getinfo(curl, CURLINFO_HTTP_VERSION,   &http_version);
            curl_easy_getinfo(curl, CURLINFO_CONTENT_TYPE,   &content_type);
            curl_easy_getinfo(curl, CURLINFO_PRIMARY_IP,     &site_ip);
        }
        curl_easy_cleanup(curl);
    }

    return (std::string)response;
}