#include&lt;stdio.h&gt;
void conv(int n, int base)
{
int rem=n%base;
if(n==0)
return;
conv(n/base, base);
if(rem &lt; 10)
printf(&quot;%d&quot;, rem);
else
printf(&quot;%c&quot;, (char)(rem+55));
}
int main()
{
int num;
printf(&quot;Enter a decimal number : &quot;);
scanf(&quot;%d&quot;, &amp;num);
printf(&quot;\nBinary number of %d = &quot;,num);
conv(num, 2);
printf(&quot;\n\nOctal number of %d = &quot;,num);
conv(num, 8);

printf(&quot;\n\nHexadecimal number of %d = &quot;,num);
conv(num, 16);
return 0;
}