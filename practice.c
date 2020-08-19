#include <string.h>

int* pair_swap_v1(int* a, unsigned int alen, unsigned int* outlen)
{
    // allocate memory for new array
    *outlen = alen;
    int* out_array = (int*)malloc(alen*sizeof(int));
    // swap elements in array
    for(int i=0; i< alen; i+=2) {
        out_array[i] = a[i+1];
        out_array[i+1] = a[i];
    }
    
    return out_array;
}

void pair_swap_v2(int* a, unsigned int alen, int** out, unsigned int* outlen)
{
    // set output array length
    *outlen = alen;
    // swap elements in array
    for(int i=0; i< alen; i+=2) {
        (*out)[i] = a[i+1];
        (*out)[i+1] = a[i];
    }
}

unsigned int expanded_len(char* str)
{
    unsigned int ctr=0;
    unsigned int i=0;
    while(str[i]!= '\0') {
        if(str[i]=='!') {
            ctr+=2;
        } else {
            ctr++;
        }
        i++;
    }
    return ++ctr;
}

char* increase_excitement(char* str)
{
    // allocate memory for new array
    unsigned int out_str_len = expanded_len(str);
    char* out_str = (char*)malloc(out_str_len*sizeof(char));
    // loop through string, finding and doubling '!'
    unsigned int i=0;
    unsigned int j=0;
    while(str[i]!='\0') {
        if(str[i] == '!') {
            out_str[j] = '!';
            out_str[j+1] = '!';
            j+=2;
        }
        else {
            out_str[j] = str[i];
        }
        i++;
    }
    out_str[j] = '\0';
    return out_str;
}

struct dollar {
    unsigned int denom;
    unsigned int print_year;
    unsigned int serial_num;
}

unsigned int total_value(struct dollar* wallet, unsigned int wallet_len)
{
    unsigned int tot = 0;
    for(int i=0; i< wallet_len; i++) {
        tot+= wallet[i]->denom;
    }
    return tot;
}

unsigned int oldest_bill(struct dollar* wallet, unsigned int wallet_len)
{
    unsigned int oldest = wallet[0].print_year;
    for(int i=1; i< wallet_len; i++) {
        if(wallet[i].print_year < oldest) {
            oldest = wallet[i].print_year;
        }
    }
    return oldest;
}

struct dollar oldest_bill_struct(struct dollar* wallet,
                                 unsigned int wallet_len)
{
    unsigned int oldest_index = 0;
    for(int i=1; i< wallet_len; i++) {
        if(wallet[i].print_year < wallet[oldest].print_year) {
            oldest_index = i;
        }
    }
    return wallet[oldest_index];
}



