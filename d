
black="\033[0;30m"        # Black
red="\033[0;91m"          # Red
green="\033[0;92m"        # Green
yellow="\033[0;93m"       # Yellow
blue="\033[0;94m"         # Blue
purple="\033[0;95m"       # Purple
cyan="\033[0;36m"         # Cyan
white="\033[0;97m"        # White
blblack="\033[5;30m"        # Black
blred="\033[5;91m"          # Red
blgreen="\033[5;32m"        # Green
blyellow="\033[5;93m"       # Yellow
blblue="\033[5;34m"         # Blue
blpurple="\033[5;95m"       # Purple
blcyan="\033[5;36m"         # Cyan
blwhite="\033[5;97m"        # White
BBlack="\033[1;30m"       # Black
BRed="\033[1;31m"         # Red
BGreen="\033[1;32m"       # Green
BYellow="\033[1;33m"      # Yellow
BBlue="\033[1;34m"        # Blue
BPurple="\033[1;35m"      # Purple
BCyan="\033[1;36m"        # Cyan
BWhite="\033[1;37m"       # White
UBlack="\033[4;30m"       # Black
URed="\033[4;31m"         # Red
UGreen="\033[4;32m"       # Green
UYellow="\033[4;33m"      # Yellow
UBlue="\033[4;34m"        # Blue
UPurple="\033[4;35m"      # Purple
UCyan="\033[4;36m"        # Cyan
UWhite="\033[4;37m"       # White
On_Black="\033[40m"       # Black
On_Red="\033[41m"         # Red
On_Green="\033[42m"       # Green
On_Yellow="\033[43m"      # Yellow
On_Blue="\033[44m"        # Blue
On_Purple="\033[45m"      # Purple
On_Cyan="\033[46m"        # Cyan
On_White="\033[47m"       # White
IBlack="\033[0;90m"       # Black
IRed="\033[0;91m"         # Red
IGreen="\033[0;92m"       # Green
IYellow="\033[0;93m"      # Yellow
IBlue="\033[0;94m"        # Blue
IPurple="\033[0;95m"      # Purple
ICyan="\033[0;96m"        # Cyan
IWhite="\033[0;97m"       # White
BIBlack="\033[1;90m"      # Black
BIRed="\033[1;91m"        # Red
BIGreen="\033[1;92m"      # Green
BIYellow="\033[1;93m"     # Yellow
BIBlue="\033[1;94m"       # Blue
BIPurple="\033[1;95m"     # Purple
BICyan="\033[1;96m"       # Cyan
BIWhite="\033[1;97m"      # White
On_IBlack="\033[0;100m"   # Black
On_IRed="\033[0;101m"     # Red
On_IGreen="\033[0;102m"   # Green
On_IYellow="\033[0;103m"  # Yellow
On_IBlue="\033[0;104m"    # Blue
On_IPurple="\033[10;95m"  # Purple
On_ICyan="\033[0;106m"    # Cyan
On_IWhite="\033[0;107m"   # White
Time12h="\T"
Time12a="\@"
PathShort="\w"
PathFull="\W"
NewLine="\n"
Jobs="\j"
BLACK=$(printf "$black")
WHITE=$(printf "$white")
CYAN=$(printf "$cyan")
BLUE=$(printf "$blue")
RED=$(printf "$red")
GREEN=$(printf "$green")
YELLOW=$(printf "$yellow")
PURPLE=$(printf "$purple")


printf "$RED ☢ encrypt:     $WHITE Encrypt a text.\n"
printf "$RED ☢ decrypt:     $WHITE Decrypt a text.\n"
printf "$RED ☢ encrpy:      $WHITE Encrypt any python file.\n"
printf "$RED ☢ calc:        $WHITE Calculator.\n"
printf "$RED ☢ virus:       $WHITE Build virus.\n"
printf "$RED ☢ mal:         $WHITE Generate Malware. [soon]\n"
printf "$RED ☢ echoS:       $WHITE Echo Server.\n"
printf "$RED ☢ echoC:       $WHITE Echo Client.\n"
printf "$RED ☢ ports:       $WHITE Check Open ports. [soon]\n"
printf "$RED ☢ ddos:        $WHITE Ddos attack. [soon]\n"
printf "$RED ☢ chat:        $WHITE Chat With Your Friends Online by MJTCHAT software.\n"
printf "$RED ☢ assm:        $WHITE Assembler: [.asm -> .o].\n"
printf "$RED ☢ link:        $WHITE Linker: [.o -> binary executable file].\n"
printf "$RED ☢ diss:        $WHITE Dissasemble a file.\n"
printf "$RED ☢ strip:       $WHITE Strip a binary executable file.\n"
printf "$RED ☢ mjtio:       $WHITE Print the source code of mjtio.asm header.\n"
#printf "$RED ☢ chc:         $WHITE Change any c file to .sh.\n"
printf "$RED ☢ delf:        $WHITE Overwrite a file to hide its contents, and optionally delete it.\n"
#printf "$RED ☢ comp:        $WHITE Compress files.\n"
#printf "$RED ☢ decomp:      $WHITE Decompress the compressed file.\n"
printf "$RED ☢ DtoB:        $WHITE Change decimal to binary.\n"
printf "$RED ☢ chr:         $WHITE Chat with robot.\n"
printf "$RED ☢ h4cker:      $WHITE Make the codes moving on the screen.\n"
printf "$RED ☢ music:       $WHITE play Music that help you to study.[soon]\n"
printf "$RED ☢ cl:          $WHITE Clear the screen.\n"
printf "$RED ☢ UPDATE:      $WHITE update cybost tool.\n"

printf "\n"
printf "$WHITE ─[$USER]─[$PWD]$RED ─╼>$ "
read m
pl () {
    cd data && play 2.mp3 > /dev/null 2>&1 && cd ..
}

if [ $m == "encrypt" ]
then
      pl
      cd bin && chmod +x enc.cpp && ./enc.cpp
      cd ..
elif [ $m == "decrypt" ]
then
      pl
      cd bin && chmod +x dec.cpp && ./dec.cpp
      cd ..
elif [ $m == "calc" ]
then
      pl
      cd bin && chmod +x calc.cpp && ./calc.cpp
      cd ..
elif [ $m == "virus" ]
then
      pl
      cd data && bash gv
      cd ..
elif [ $m == "delf" ]
then
      pl
      cd df
      bash dff
      cd ..
elif [ $m == "DtoB" ]
then
      pl
      cd bin && chmod +x DtoB.cpp
      ./DtoB.cpp
      cd ..
elif [ $m == "h4cker" ]
then
        pl
	cd bin && chmod +x locc.cpp && ./locc.cpp
	cd ..
elif [ $m == "echoS" ]
then
	pl
	cd bin && chmod +x echoS.c && ./echoS.c
	cd ..
elif [ $m == "echoC" ]
then
	pl
	cd bin && chmod +x echoC.c && ./echoC.c
        cd ..
elif [ $m == "cl" ]
then
	clear
	exec bash $0
elif [ $m == "UPDATE" ]
then
	cd .. && rm -r CYBOST && git clone https://github.com/Mr6MJT/CYBOST
elif [ $m == "chat" ]
then
	pl
	printf "$RED [1]- Create chat room\n"
	printf "$RED [2]- Join chat room\n"
	printf "\n"
	printf "$WHITE ─[$USER]─[CYBOST]$RED ─╼>$ "
	read cj
	if [ $cj -eq 1 ]
	then
		cd bin && chmod +x chatS.cpp && ./chatS.cpp
		cd ..
	elif [ $cj -eq 2 ]
	then
		cd bin && chmod +x chatC.cpp && ./chatC.cpp
		cd ..
	fi	
elif [ $m == "chr" ]
then
        pl
        cd bin && chmod +x chr.cpp && ./chr.cpp
	cd ..
elif [ $m == "encrpy" ]
then
        pl
	cd data && cd python && python enc.py
	cd ..
	cd ..
elif [ $m == "assm" ]
then
        pl
	printf "$RED ☢ Enter the name of the assembly file with .asm: \n"
	printf "\n"
	printf "$WHITE ─[$USER]─[CYBOST]$RED ─╼>$ "
	read assm
	printf "$RED ☢ Enter the name of the object file with .o: \n"
	printf "\n"
        printf "$WHITE ─[$USER]─[CYBOST]$RED ─╼>$ "
	read obj
	nasm -f elf64 $assm -o $obj
elif [ $m == "link" ]
then
        pl
	printf "$RED ☢ Enter the name of the object file with .o: \n"
	printf "\n"
	printf "$WHITE ─[$USER]─[CYBOST]$RED ─╼>$ "
	read ol
	printf "$RED ☢ Enter the name of the binary executable file: \n"
	printf "\n"
	printf "$WHITE ─[$USER]─[CYBOST]$RED ─╼>$ "
	read bl
	ld $ol -o $bl
elif [ $m == "strip" ]
then
	pl
	printf "$RED ☢ Move the$WHITE Binary Executable File to cybost directory.\n"
	sleep 1
	printf "$RED ☢ Enter the name of the$WHITE Binary Executable File.\n"
        printf "$WHITE ─[$USER]─[CYBOST]$RED ─╼>$ "
	read cyb
	strip --strip-all $cyb
elif [ $m == "mjtio" ]
then
	pl
 	cd data && cat mjtio.asm
	cd ..
else
	printf "$RED ✘ $m:$WHITE Command Not Found"
fi
printf "\n"
printf "$WHITE Press Enter to continue.\n"
read enter
pl
exec bash $0
