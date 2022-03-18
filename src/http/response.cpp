#include <iostream>
#include <cstdio>
#include <curl/curl.h>

#include <http/response.h>

std::string WebResponse::fetch(std::string url) {
    std::cout << "Fetching " << url << std::endl;
    CURL *curl;
    CURLcode res;
 
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    
        res = curl_easy_perform(curl);
        if(res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
    
        curl_easy_cleanup(curl);
    }
    return url;
}