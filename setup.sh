black="\033[0;30m"        # Black
red="\033[0;91m"          # Red
green="\033[0;92m"        # Green
yellow="\033[0;93m"       # Yellow
blue="\033[0;94m"         # Blue
purple="\033[0;95m"       # Purple
cyan="\033[0;36m"         # Cyan
white="\033[0;97m"        # White

# Blinking

blblack="\033[5;30m"        # Black
blred="\033[5;91m"          # Red
blgreen="\033[5;32m"        # Green
blyellow="\033[5;93m"       # Yellow
blblue="\033[5;34m"         # Blue
blpurple="\033[5;95m"       # Purple
blcyan="\033[5;36m"         # Cyan
blwhite="\033[5;97m"        # White

# Bold
BBlack="\033[1;30m"       # Black
BRed="\033[1;31m"         # Red
BGreen="\033[1;32m"       # Green
BYellow="\033[1;33m"      # Yellow
BBlue="\033[1;34m"        # Blue
BPurple="\033[1;35m"      # Purple
BCyan="\033[1;36m"        # Cyan
BWhite="\033[1;37m"       # White

# Underline
UBlack="\033[4;30m"       # Black
URed="\033[4;31m"         # Red
UGreen="\033[4;32m"       # Green
UYellow="\033[4;33m"      # Yellow
UBlue="\033[4;34m"        # Blue
UPurple="\033[4;35m"      # Purple
UCyan="\033[4;36m"        # Cyan
UWhite="\033[4;37m"       # White

# Background
On_Black="\033[40m"       # Black
On_Red="\033[41m"         # Red
On_Green="\033[42m"       # Green
On_Yellow="\033[43m"      # Yellow
On_Blue="\033[44m"        # Blue
On_Purple="\033[45m"      # Purple
On_Cyan="\033[46m"        # Cyan
On_White="\033[47m"       # White

# High Intensty
IBlack="\033[0;90m"       # Black
IRed="\033[0;91m"         # Red
IGreen="\033[0;92m"       # Green
IYellow="\033[0;93m"      # Yellow
IBlue="\033[0;94m"        # Blue
IPurple="\033[0;95m"      # Purple
ICyan="\033[0;96m"        # Cyan
IWhite="\033[0;97m"       # White

# Bold High Intensty
BIBlack="\033[1;90m"      # Black
BIRed="\033[1;91m"        # Red
BIGreen="\033[1;92m"      # Green
BIYellow="\033[1;93m"     # Yellow
BIBlue="\033[1;94m"       # Blue
BIPurple="\033[1;95m"     # Purple
BICyan="\033[1;96m"       # Cyan
BIWhite="\033[1;97m"      # White

# High Intensty backgrounds
On_IBlack="\033[0;100m"   # Black
On_IRed="\033[0;101m"     # Red
On_IGreen="\033[0;102m"   # Green
On_IYellow="\033[0;103m"  # Yellow
On_IBlue="\033[0;104m"    # Blue
On_IPurple="\033[10;95m"  # Purple
On_ICyan="\033[0;106m"    # Cyan
On_IWhite="\033[0;107m"   # White

# Various variables you might want for your PS1 prompt instead
Time12h="\T"
Time12a="\@"
PathShort="\w"
PathFull="\W"
NewLine="\n"
Jobs="\j"

# Do not Edit :)
BLACK=$(printf "$black")
WHITE=$(printf "$white")
CYAN=$(printf "$cyan")
BLUE=$(printf "$blue")
RED=$(printf "$red")
GREEN=$(printf "$green")
YELLOW=$(printf "$yellow")
PURPLE=$(printf "$purple")
clear
sleep 0.5
printf "$WHITE Running $RED CYBOST tool $WHITE please wait..."
sleep 3
clear
sleep 0.5
clear
printf "$WHITE Welcome $RED Mr $USER !\n"
printf "\n"
sleep 0.9
printf "$WHITE Cyber Ghost Tool$RED (CYBOST)\n"
printf "$WHITE This tool is under development!\n"
printf "\n"
printf "$WHITE [+] follow me please:\n"
printf "$WHITE [-] Github: $RED     https://github.com/Mr6MJT\n"
printf "$WHITE [-] Telegram: $RED   t.me/CyberGhost9\n"
printf "\n"
printf "$WHITE [!] I developed this tool at 12 Nov 2021,I was 15 years old ^_~"
printf "\n"
printf "\n"
sleep 4.2
printf "$WHITE Installing The requirment,please wait..\n"
sleep 0.5
sudo su
sleep 5
apt-get install nasm > /dev/null 2>&1
apt-get install sox > /dev/null 2>&1
apt-get install sox libsox-fmt-all > /dev/null 2>&1
clear
printf "$RED Press enter to continue\n"
read enter
clear
mv d.sh start.sh
rm setup.sh && bash start.sh
