//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "~/.config/dwm/statusbar/_traffic.sh",		1,			0},
  //{"", "~/.config/dwm/statusbar/_weather.sh",   120,    0},
	{"", "~/.config/dwm/statusbar/_wifi.sh",			1,			0},
	{"", "~/.config/dwm/statusbar/_audio.sh",			0,			10},
	{"", "~/.config/dwm/statusbar/_cpu.sh",	  		1,			0},
	{"", "~/.config/dwm/statusbar/_battery.sh",		1,			0},
	{"", "~/.config/dwm/statusbar/_date.sh",			3600,		1},
	{"", "~/.config/dwm/statusbar/_displaytime.sh",	1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 1;
