#include "MY_STRING.h"

void *MY_memchr(const void *str, int c, int n){
    unsigned char *ret = NULL;
    unsigned char *temp = (unsigned char*)str;
    unsigned char New_c = (unsigned char)c;
    int counter = 0;

    if(NULL == str){

    }else{
        for(counter; counter < n; counter++){
            if(New_c == *temp){
                ret = temp;
                break;
            }
            temp++;
        }
    }
    return ret;
}



int MY_memcmp(const void *str1, const void *str2, int n){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;
    int counter = 0;

    if((NULL == str1) || (NULL == str2)){

    }else{
        for(counter; ((*temp1 != '\0') && (*temp2 != '\0')) && counter < n; counter++){
            if(*temp1 > *temp2){
                return 1;
            }else if(*temp1 < *temp2){
                return -1;
            }else if((*temp1 == *temp2) && (counter == n-1)){
                return 0;
            }
            temp1++;
            temp2++;
        }
    }
}



void *MY_memcpy(void *dest, const void * src, int n){
    unsigned char *temp1 = (unsigned char*)dest;
    unsigned char *temp2 = (unsigned char*)src;
    int counter = 0;

    if((NULL == dest) || (NULL == src)){

    }else{
        for(counter; ((*temp1 != '\0') && (*temp2 != '\0')) && counter < n; counter++){
            *(temp1 + counter) = *(temp2 + counter);
        }
    }
    return dest;
}



void *MY_memmove(void *str1, const void *str2, int n){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;
    int counter = 0;

    if((NULL == str1) || (NULL == str2)){

    }else{
        for(counter; ((*temp1 != '\0') && (*temp2 != '\0')) && counter < n; counter++){
            *(temp1 + counter) = *(temp2 + counter);
        }
    }
    return str1;
}



void *MY_memset(void *str, int c, int n){
    unsigned char *temp = (unsigned char*)str;
    unsigned char new_c = (unsigned char)c;
    int counter = 0;

    if(NULL == str){

    }else{
        for(counter; (*temp != '\0') && counter < n; counter++){
            *(temp + counter) = new_c;
        }
    }
    return str;
}



char *MY_strcat(char *dest, const char *src){
    unsigned char *temp1 = (unsigned char*)dest;
    unsigned char *temp2 = (unsigned char*)src;

    if((NULL == dest) || (NULL == src)){

    }else{
        while((*temp1) != '\0')
            temp1++;
        while((*temp2) != '\0')
        *(temp1++) = *(temp2++);
    }
    return dest;
}



char *MY_strncat(char *dest, const char *src, int n){
    unsigned char *temp1 = (unsigned char*)dest;
    unsigned char *temp2 = (unsigned char*)src;
    int counter = 0;

    if((NULL == dest) || (NULL == src)){

    }else{
        while((*temp1) != '\0')
            temp1++;
        for(counter; counter < n; counter++){
            *(temp1++) = *(temp2++);
            if(*temp2 == '\0')
                break;
        }
        *temp1 = '\0';
    }
    return dest;
}



char *MY_strchr(const char *str, int c){
    unsigned char *ret = NULL;
    unsigned char *temp = (unsigned char*)str;
    unsigned char New_c = (unsigned char)c;

    if(NULL == str){

    }else{
        while(*temp != '\0'){
            if(*temp == New_c){
                ret = temp;
                break;
            }
            temp++;
        }
    }
    return ret;
}



int MY_strcmp(const char *str1, const char *str2){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;

    if((NULL == str1) || (NULL == str2)){

    }else{
        while((*temp1 != '\0') && (*temp2 != '\0')){
            if(*temp1 > *temp2){
                return 1;
            }else if(*temp1 < *temp2){
                return -1;
            }else if((*temp1 == *temp2) && ((*temp1 == '\0') || (*temp2 == '\0'))){
                return 0;
            }
            temp1++;
            temp2++;
            }
        }
    }



int MY_strncmp(const char *str1, const char *str2, int n){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;
    int counter = 0;

    if((NULL == str1) || (NULL == str2)){

    }else{
        for(counter; ((*temp1 != '\0') && (*temp2 != '\0')) && counter < n; counter++){
            if(*temp1 > *temp2){
                return 1;
            }else if(*temp1 < *temp2){
                return -1;
            }else if((*temp1 == *temp2) && (counter == n-1)){
                return 0;
            }
            temp1++;
            temp2++;
            }
        }
}



int MY_strcoll(const char *str1, const char *str2){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;

    if((NULL == str1) || (NULL == str2)){

    }else{
        while((*temp1 != '\0') && (*temp2 != '\0')){
            if(*temp1 > *temp2){
                return 1;
            }else if(*temp1 < *temp2){
                return -1;
            }else if((*temp1 == *temp2) && ((*temp1 == '\0') || (*temp2 == '\0'))){
                return 0;
            }
            temp1++;
            temp2++;
            }
        }
}



char *MY_strcpy(char *dest, const char *src){
    unsigned char *temp1 = (unsigned char*)dest;
    unsigned char *temp2 = (unsigned char*)src;

    if((NULL == dest) || (NULL == src)){

    }else{
        while(*temp2 != '\0'){
            *temp1 = *temp2;
            temp1++;
            temp2++;
        }
    }
    return dest;
}



char *MY_strncpy(char *dest, const char *src, int n){
    unsigned char *temp1 = (unsigned char*)dest;
    unsigned char *temp2 = (unsigned char*)src;
    int counter = 0;

    if((NULL == dest) || (NULL == src)){

    }else{
        for(counter; *temp2 != '\0' && counter < n; counter++){
            *(temp1 + counter) = *(temp2 + counter);
        }
    }
    return dest;
}



int MY_strcspn(const char *str1, const char *str2){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;
    int counter = 0;

    if((NULL == str1) || (NULL == str2)){

    }else{
        while(*temp2 != '\0'){
            while(*temp1 != '\0'){
                if(*temp1 == *temp2){
                    return counter;
                }
                counter++;
                temp1++;
            }
        temp1 = (unsigned char*)str1;
        temp2++;
        counter = 0;
        }
    }
}



char *MY_strerror(int errnum){

}



int MY_strlen(const char *str){
    unsigned char *temp = (unsigned char*)str;
    int counter = 0;

    if(NULL == temp){

    }else{
        while(*temp != '\0'){
                counter++;
                temp++;
            }
        }
    return counter;
}



char *MY_strpbrk(const char *str1, const char *str2){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;

    if((NULL == str1) || (NULL == str2)){

    }else{
        while(*temp2 != '\0'){
            while(*temp1 != '\0'){
                if(*temp1 == *temp2){
                    return temp1;
                }
                temp1++;
            }
        temp1 = (unsigned char*)str1;
        temp2++;
        }
    }
}



char *MY_strrchr(const char *str, int c){
    unsigned char *ret = NULL;
    unsigned char *temp = (unsigned char*)str;
    unsigned char New_c = (unsigned char)c;

    if(NULL == str){

    }else{
        while(*temp != '\0'){
            if(New_c == *temp){
                ret = temp;
            }
            temp++;
        }
    }
    return ret;
}



int MY_strspn(const char *str1, const char *str2){
    unsigned char *temp1 = (unsigned char*)str1;
    unsigned char *temp2 = (unsigned char*)str2;
    int counter = 0;

    if((NULL == str1) || (NULL == str2)){

    }else{
        while(*temp2 != '\0'){
            if(*temp1 != *temp2){
                temp2++;
                continue;
            }else{
                counter++;
                temp2++;
                temp1++;
            }
        }
    }
    return counter;
}



char *MY_strstr(const char *haystack, const char *needle){
    unsigned char *temp1 = (unsigned char*)haystack;
    unsigned char *temp2 = (unsigned char*)needle;
    unsigned char * ret = NULL;

    if((NULL == haystack) || (NULL == needle)){

    }else{
        while(*temp1 != '\0'){
            if(*temp1 != *temp2){
                if(ret != NULL){
                    *temp1 = '\0';
                    break;
                }
                temp1++;
                continue;
            }else{
                if(ret == NULL){
                    ret = temp1;
                }
                temp2++;
                temp1++;
            }
        }
    }
    return ret;
}



int MY_strxfrm(char *dest, const char *src, int n){
    unsigned char *temp1 = (unsigned char*)dest;
    unsigned char *temp2 = (unsigned char*)src;
    int counter = 0;
    int num = 0;

    if((NULL == dest) || (NULL == src)){

    }else{
        for(counter; ((*temp1 != '\0') && (*temp2 != '\0')) && counter < n; counter++){
            *(temp1 + counter) = *(temp2 + counter);
            num++;
        }
    }
    return num;
}

