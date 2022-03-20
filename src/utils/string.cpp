#include <iostream>
#include <utils/string.h>

int String::string_cmp(std::string s1, std::string s2) {
    int length_s1 = s1.length();
    int length_s2 = s2.length();

    if (length_s1 == length_s2) {
        for (int i = 0; i < length_s1; i++) {
            if (s1[i] != s2[i])
                return 0;
        }
    } else 
        return 0;

    return 1;
}