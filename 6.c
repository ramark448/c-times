#include&lt;stdio.h&gt;
int main()
{
int i, w, arr[10], heavy=0;
for(i=0; i&lt;10; i++)
{
printf(&quot;Enter the weight of %d person: &quot;, i+1);
scanf(&quot;%d&quot;, &amp;w);
arr[i] = w;
}
for(i=2; i&lt;10; i++)
{
if((arr[i-2] + arr[i-1]) == arr[i])
{
printf(&quot;The weight of the heaviest person found is %d kgs\n&quot;,

arr[i]);

heavy+=1;
}
}

if(heavy == 0)
{
printf(&quot;There is no heavy person found!&quot;);
}
return 0;
}