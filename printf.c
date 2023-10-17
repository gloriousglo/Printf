#include "main.h"
/**
 * printf_ - function that produces output according to thr given format
 * format: format to print output
 * return: return the numbers of char printed
 */

int printf_ (const char *format){
	int count;
	va_list valist;
	char character;
	char *str;
	int len;
	int number;
	count = 0;
	if (format == NULL)
		return (-1);
	va_start (valist, format);
	while(*format)
	{
		if(*format != "%")
		{
			write(1, format, 1);
			count ++;
		}
		else
		{
			format ++;
			if(*format == "%")
			{
				write(1, format, 1);
				count ++;
			}
			else if(*format =='c')
			{
				character = var_arg (valist, imt);
				write(1, & character, 1);
				count ++
			}
			else if (*format == 's')
			{
				str = va_arg(valist, char*);
			}
			else
			{
				count += function2(valist, format);
			}
			format ++;
		}
		va_end(valist);
		return(count);
	}

