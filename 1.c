#include&lt;stdio.h&gt;
int main()
{
float phy,che,mat,cut,bio;
int a;
printf(&quot;\nCut-off Calculator&quot;);
printf(&quot;\n1.\tEngineering cut-off\n2.\tMedical cut-off\n\nEnter Your choice: &quot;);
scanf(&quot;%d&quot;,&amp;a);
switch(a)
{
case 1:
printf(&quot;\nEnter Maths Mark: &quot;);
scanf(&quot;%f&quot;,&amp;mat);
printf(&quot;\nEnter Physics Mark: &quot;);
scanf(&quot;%f&quot;,&amp;phy);
printf(&quot;\nEnter Chemistry Mark: &quot;);
scanf(&quot;%f&quot;,&amp;che);
cut=mat+che/2+phy/2;
break;
case 2:
printf(&quot;\nEnter Biology Mark: &quot;);
scanf(&quot;%f&quot;,&amp;bio);
printf(&quot;\nEnter Physics Mark: &quot;);
scanf(&quot;%f&quot;,&amp;phy);
printf(&quot;\nEnter Chemistry Mark: &quot;);

scanf(&quot;%f&quot;,&amp;che);
cut=bio+che/2+phy/2;
break;
default:
return 0;
}
printf(&quot;\n\nCut-off = %.2f\n&quot;,cut);
return 0;
}