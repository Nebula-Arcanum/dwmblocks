//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"/home/leon/Programs/suckless/dwmblocks/scripts/volume",	0,		11},
	{"",	"/home/leon/Programs/suckless/dwmblocks/scripts/datetime",	1,		11},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
