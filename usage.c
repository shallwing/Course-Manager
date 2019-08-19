i
#include "usage.h" 

void gui()
{
	
	char					*times = (char *)malloc(32);
	char					*date = (char *)malloc(32);
	
	system("clear");
	time_get(&times,&date);
	printf("Welcome to Course Management System (CMS)\n\n");
	printf("* Copyright:  (C) 2019 IoT-Yun   All rights reserved.\n");
	printf("* Author:  Donald Shallwing <donald_shallwing@foxmail.com>\n");
	printf("* URL Contact: <http://www.iot-yun.com>\n\n");
	printf("$ Input 'help' to get help\n"); 
	printf("$ Cautiously input ' ' or 'ctrl+c'\n\n");
	printf("Time: %s   %s\n\n", times, date);
}

void print_usage()
{
	printf("##System Usage##\n");
	printf("$add: Regist the message of the course\n");
	printf("$search: Inquire the message of the course\n");
	printf("$browse: Print all message of the course\n");
	printf("$help: Get help\n"); 
	printf("$delete: Remove a message of the course\n");
	printf("$when: Get the current time\n");
	printf("$exit: End of this process\n");
	printf("##Course Attribute##\n");
	printf("$g: Public courses\n");
	printf("$b: Required courses\n");
	printf("$x: Optional courses\n");
	printf("$shang: Last semester\n");
	printf("$xia: Next semester\n");
	printf("##Message Format##\n");
	printf("$  [id]|[name]|[attribute]|[totalTime]|[teachingTime]|[labTime]|[score]|[semester]\n\n");
}

void print_inquire(){
	printf("Usage:\n");
	printf("--a: Inquire the records by attribute\n");
	printf("--s: Inquire the records by score\n");
	printf("--i: Inqure the records by course ID\n");
	printf("Please input your choice:  \n");
}

void print_rank(){
	printf("Usage:\n");
	printf("--s: Rank by score\n");
	printf("--t: Rank by TotalClassTime\n");
	printf("Please input your choice:  \n");
}

void time_get(char **times, char **date)
{
    time_t		timep;
    struct tm*  t_tm;

    memset(*times, 0, TIME_LEN);
    memset(*date, 0, TIME_LEN);

    time(&timep);
    t_tm = localtime(&timep);

    snprintf(*date, TIME_LEN, "%4d-%02d-%02d", t_tm->tm_year+1900, t_tm->tm_mon+1, t_tm->tm_mday);
    snprintf(*times, TIME_LEN, "%02d:%02d:%02d", t_tm->tm_hour, t_tm->tm_min, t_tm->tm_sec);
}

void cms()
{
	printf("CMS:>");
}
