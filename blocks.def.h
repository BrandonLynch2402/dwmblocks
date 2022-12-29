//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "check_updates", 3600, 20},
	{"", "wttr", 1200, 0},
	{"", "volume", 0, 10},
	{"", "mem", 60, 0},
	{"", "disk", 300, 0},
	{"📅 ", "date '+%a %b %d, %Y %I:%M %p'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
