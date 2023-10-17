#include "main.h"

int _printf(const char *format, ...){

    int charct_num = 0;
    va_list argmnt;

    if (format == NULL)
        return -1;
    
    va_start(argmnt, format);

    while(*format)
    {
        if(*format != '%')
        {
            write(1, format, 1);
            charct_num++;
        }
        else
        {
            format++;  
        if(*format == '\0')
            break;
        if(*format == '%')
        {
          write(1, format, 1);
            charct_num++;
        }
        else if(*format == 'c'){
            char c = va_arg(argmnt, int);
            write(1, &c, 1);
            charct_num++;
        }
        else if(*format == 's'){
            char *str = va_arg(argmnt, char*);
            int len = 0;

            while(str(len) != '\0')
            lenth++;
        write(1, str, len);
        charct_num += len;

        }
        }
        format++;
    }
    va_end(argmnt);
    return charct_num;
}
