#include<stdio.h>
int main()
{
int hr,fm,sec,fs,d,fh,min,minutes,hour;
printf("enter hours, minutes and secs\n");
scanf("%d%d%d" ,&hr,&min,&sec);
fs=sec%60;
minutes=(sec/60) + min;
fm=minutes%60;
hour=(minutes/60) + hr;
fh=hour%24;
d=hour/24;
if (fh>=0 && fh<12)
{
	printf("It is day %d and the time is %d : %d : %d a.m." ,d , fh , fm , fs);
}
else if (fh==12)
{
	printf("It is day %d and the time is %d : %d : %d noon" ,d,fh,fm,fs);
}
else if (fh>12 && fh<24)
{
	fh=fh-12;
	printf("It is day %d and the time is %d : %d : %d p.m." ,d,fh,fm,fs);
}
}
