#include &lt;stdio.h&gt;
void towers(int, char, char, char);
int main()
{
int num;
printf(&quot;Enter the number of disks : &quot;);
scanf(&quot;%d&quot;, &amp;num);
printf(&quot;The sequence of moves involved in the Tower of Hanoi are :\n&quot;);
towers(num, &#39;A&#39;, &#39;C&#39;, &#39;B&#39;);
return 0;
}
void towers(int num, char frompole, char topole, char auxpole)
{
if (num == 1)
{
printf(&quot;\n Move disk 1 from pole %c to pole %c&quot;, frompole, topole);
return;
}
towers(num - 1, frompole, auxpole, topole);
printf(&quot;\n Move disk %d from pole %c to pole %c&quot;, num, frompole, topole);
towers(num - 1, auxpole, topole, frompole);
}