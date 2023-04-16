#include &lt;stdio.h&gt;
unsigned long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction =&#39;y&#39;;
int main()
{
while (pin != 1119)

{
printf(&quot;ENTER YOUR SECRET PIN NUMBER:&quot;);
scanf(&quot;%d&quot;, &amp;pin);
if (pin != 1119)
printf(&quot;PLEASE ENTER VALID PASSWORD\n&quot;);
}
do
{
printf(&quot;********Welcome to ATM Service**************\n&quot;);
printf(&quot;1. Check Balance\n&quot;);
printf(&quot;2. Withdraw Cash\n&quot;);
printf(&quot;3. Deposit Cash\n&quot;);
printf(&quot;4. Quit\n&quot;);
printf(&quot;******************?**************************?*\n\n&quot;);
printf(&quot;Enter your choice: &quot;);
scanf(&quot;%d&quot;, &amp;choice);
switch (choice)
{
case 1:
printf(&quot;\n YOUR BALANCE IN Rs : %lu &quot;, amount);
break;
case 2:
printf(&quot;\n ENTER THE AMOUNT TO WITHDRAW: &quot;);
scanf(&quot;%lu&quot;, &amp;withdraw);
if (withdraw % 100 != 0)
{
printf(&quot;\n PLEASE ENTER THE AMOUNT IN MULTIPLES

OF 100&quot;);

}
else if (withdraw &gt;(amount - 500))
{
printf(&quot;\n INSUFFICENT BALANCE&quot;);
}
else
{
amount = amount - withdraw;
printf(&quot;\n\n PLEASE COLLECT CASH&quot;);
printf(&quot;\n YOUR CURRENT BALANCE IS%lu&quot;, amount);
}
break;
case 3:
printf(&quot;\n ENTER THE AMOUNT TO DEPOSIT&quot;);
scanf(&quot;%lu&quot;, &amp;deposit);
amount = amount + deposit;

printf(&quot;YOUR BALANCE IS %lu&quot;, amount);
break;
case 4:
printf(&quot;\n THANK YOU FOR USING THIS ATM&quot;);
break;
default:

printf(&quot;\n INVALID CHOICE&quot;);
}
printf(&quot;\n\n\n DO YOU WANT TO USE THIS ATM ?(y/n): &quot;);
fflush(stdin);
scanf(&quot;%c&quot;, &amp;transaction);
if (transaction == &#39;n&#39;|| transaction == &#39;N&#39;)

k = 1;
} while (!k);
printf(&quot;\n\n THANK YOU FOR USING THIS ATM SERVICE&quot;);
return 0;
}