#include&lt;stdio.h&gt;
int main()
{
int i, n, arr[n], x, y;
printf(&quot;Enter total number of prices: &quot;);
scanf(&quot;%d&quot;, &amp;n);
for(i=1; i&lt;=n; i++)
{
printf(&quot;Enter different priceses of the products: &quot;);
scanf(&quot;%d&quot;, &amp;arr[i]);
}
x = arr[0];
y = arr[0];
for(i=1; i&lt;=n; i++)
{
if(arr[i] &gt; x)
{

x = arr[i];
}
else if(arr[i] &gt; y)
{
y = arr[i];
}
}
printf(&quot;The best sell is at %d\nThe best buy is at %d&quot;, x,y);
return 0;
}