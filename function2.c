#include "main.h"
int function2(va_list arg, const char *format)
{
	int count = 0;
	if (*format== 'd')
		count += print_d(arg);
	return (count);
}
int print_d(va_list arg)
{
	int num = va_arg(arg -int);
	int temp;
	int len = 0;
	if (num < 0)
	{
		num = -num;
		temp = num;
		while(temp > 0)
		{
			temp = num/10;
			len ++;
		}
		len +=1;
		int buffering [len];
		l
			buffer [0] = '0'
	      		buffer [i] -'0' + (num % 10);
		num /= 10;
	}
	write (1, buffer, len);
		count ++;

else
{
	while (temp > 0)
	{
		temp = num /10;
		len ++;
	}
	int buffering [len];
	for (int i=len -1;
	i > 0; i--)
	{
		buffer[i] = '0' + (num % 10);
	}
	write (1, buffer, len);
	count ++;
	return (count);
}

