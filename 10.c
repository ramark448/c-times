#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
int main()
{
printf(&quot;Enter a paragraph :&quot;);
int i,n=1,a=0;
char s[20];
gets(s);
a=strlen(s);

for(i=0;i&lt;=a-1;i++)
{
if(s[i]==&#39; &#39;)
{
n+=1;
}
}
if(a&lt;0)
printf(&quot;0 words&quot;);
else
printf(&quot;The number of words : %d&quot;,n);
return 0;
}