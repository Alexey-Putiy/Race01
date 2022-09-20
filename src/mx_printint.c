void mx_printchar();

void mx_printint(int n){
    if(n != 0) {
        int i = 0;
        int num = n;
        char c[20];
        
        if(num < 0) {
            mx_printchar('-');
            num = -num;
        }
        while(num != 0){
            c[i++] = num % 10 + '0';
            num = num / 10;
        }
        for(int j = i - 1; j >= 0; j--)
            mx_printchar(c[j]);
    } 
    else 
        mx_printchar('0');
}

