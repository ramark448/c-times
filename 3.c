#include&lt;stdio.h&gt;
int main()
{
int n1,n2,opr;

printf(&quot;\n1.\tAddition\n2.\tSubtraction\n3.\tMultiplication\n4.\tDivision\n5.\tSquare\n\nEnt
er your choice: &quot;);

scanf(&quot;%d&quot;,&amp;opr);
if (opr==5)
{
printf(&quot;\nEnter the number: &quot;);

scanf(&quot;%d&quot;,&amp;n1);
}
else
{
printf(&quot;\nEnter the first number: &quot;);
scanf(&quot;%d&quot;,&amp;n1);
printf(&quot;\nEnter the second number: &quot;);
scanf(&quot;%d&quot;,&amp;n2);
}
printf(&quot;\n&quot;);
switch(opr)
{
case 1:
printf(&quot;%d + %d = %d&quot;,n1,n2,n1+n2);
break;
case 2:
printf(&quot;%d - %d = %d&quot;,n1,n2,n1-n2);
break;
case 3:
printf(&quot;%d × %d = %d&quot;,n1,n2,n1*n2);
break;
case 4:
printf(&quot;%d / %d = %f&quot;,n1,n2,(float)n1/(float)n2);
break;
case 5:
printf(&quot;%d^2 = %d&quot;,n1,n1*n1);
break;

}
return 0;
}