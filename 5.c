#include&lt;stdio.h&gt;
int main()
{
float arr[4][2];
float w,h,s;
int i;
for(i=0;i&lt;4;i++)
{
printf(&quot;Enter the height of %d st in meter :&quot;,i+1);
scanf(&quot;%f&quot;,&amp;h);
printf(&quot;Enter the weight of %d st in kg :&quot;,i+1);
scanf(&quot;%f&quot;,&amp;w);
arr[i][0]=h;
arr[i][1]=w;
}
for(i=0;i&lt;4;i++)
{
s=arr[i][1]/(arr[i][0]*arr[i][0]);
printf(&quot;The BMI of %d st person is : %f \n&quot;,i+1,s);
}
return 0;

}