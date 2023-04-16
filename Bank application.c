#include&lt;stdio.h&gt;
#include&lt;unistd.h&gt;
#include&lt;string.h&gt;
#include&lt;stdlib.h&gt;
int initial_count=0;
struct bank_details
{
char name[30],account_number[20],phone_number[15];
float balance;
}account_holder[1000];
void flushstdin()
{
int c;
while((c=getchar())!=&#39;\n&#39;&amp;&amp;c!=EOF);
}
void add_details()
{
int n,i,j;
system(&quot;cls&quot;);
FILE *fp=fopen(&quot;details.csv&quot;,&quot;a&quot;);
printf(&quot;Enter the number of persons: &quot;);
scanf(&quot;%d&quot;,&amp;n);
flushstdin();
for(i=initial_count,j=0;i&lt;(initial_count+n);i++,j++)
{
printf(&quot;Enter details of person %d:\n&quot;,j+1);
printf(&quot;\tEnter the name: &quot;);

fgets(account_holder[i].name,30,stdin);
account_holder[i].name[strcspn(account_holder[i].name,&quot;\n&quot;)]=0;
printf(&quot;\tEnter the account number: &quot;);
fgets(account_holder[i].account_number,20,stdin);

account_holder[i].account_number[strcspn(account_holder[i].account_number,&quot;\n&quot;)
]=0;

printf(&quot;\tEnter the phone number: &quot;);
fgets(account_holder[i].phone_number,15,stdin);

account_holder[i].phone_number[strcspn(account_holder[i].phone_number,&quot;\n&quot;)]=
0;

printf(&quot;\tEnter the account balance: &quot;);
scanf(&quot;%f&quot;,&amp;account_holder[i].balance);
flushstdin();
fseek(fp,0,SEEK_END);
if (ftell(fp)!=0)
fprintf(fp,&quot;\n&quot;);

fprintf(fp,&quot;%f,%s,%s,%s&quot;,account_holder[i].balance,account_holder[i].account_num
ber,account_holder[i].name,account_holder[i].phone_number);
}
fclose(fp);
if (n!=0)
printf(&quot;\nDetails added successfully. &quot;);
else
printf(&quot;\nYou Entered 0 persons to add. &quot;);
printf(&quot;Press any key to continue . . .&quot;);
getch();
}
void view_details()
{
system(&quot;cls&quot;);
FILE *fp=fopen(&quot;details.csv&quot;,&quot;r&quot;);
int i,row=0,column=0,found=0;

char buffer[1024];
struct bank_details details[1000];
while(fgets(buffer,1024,fp))
{
column=0;
char* value=strtok(buffer,&quot;,&quot;);
while (value)
{
value[strcspn(value,&quot;\n&quot;)]=0;
if (column==0)
details[row].balance=atof(value);
else if (column==1)
strcpy(details[row].account_number,value);
else if (column==2)
strcpy(details[row].name,value);
else if (column==3)
strcpy(details[row].phone_number,value);
value=strtok(NULL,&quot;,&quot;);
column=column+1;
}
row++;
}
printf(&quot;Persons with low balance:&quot;);
for(i=0;i&lt;row;i++)
{
if (details[i].balance&lt;500.00)
{
printf(&quot;\n\nName: %s\nAccount Number: %s\nPhone Number:

%s\nBalance Amount:
%f&quot;,details[i].name,details[i].account_number,details[i].phone_number,details[i].ba
lance);

found=1;
}
}
if (found==0)
printf(&quot;\n\nNo one have balance amount less than minimum balance&quot;);

fclose(fp);
}
int main()
{
if(access(&quot;details.csv&quot;,F_OK)==-1)
{
FILE *fp=fopen(&quot;details.csv&quot;,&quot;w&quot;);
fclose(fp);
}
add_details();
view_details();
return 0;
}