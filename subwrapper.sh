#!/bin/bash
BLUE='\033[0;36m'
LIGHTRED='\033[1;31m'
NC='\033[0m'

domain=$1
ASSETFINDERDIR="./assetfinder"
HTTPROBEDIR="./httprobe"
NO404DIR="./ono404"
burpimport=false


echo -e $BLUE
echo "[*]Running on $domain"
echo "this is the develope git branch"

#assetfinder $domain | httprobe | ~/tools/ono404/no404.sh |


if [ -z $domain ]; then
		echo -e $LIGHTRED
		echo "[-] You must provide a domain!"
		exit
fi

if [$(echo "$2" | head -c 1) = "-"]; then
	flag = $(echo "$2" | head -c 1)
	if [ $flag = "burpimport"]; then
		$burpimport=true
	fi
fi

if [ -d "$ASSETFINDERDIR" ]; then
	echo -e $LIGHTRED
  	echo "[*] assetfinder dir already exists!"
 # assetfinder $domain > "$ASSETFINDERDIR"
else
	echo -e $BlUE
	echo "[+] Creating assetfinder dir!"
   
	mkdir $ASSETFINDERDIR
fi
if [ -d "$HTTPROBEDIR" ]; then
	echo -e $LIGHTRED
   echo "[*] httprobe dir already exists!"
  # assetfinder $domain > "$ASSETFINDERDIR"
else
	echo -e $BLUE
	echo "[+] Creating httprobe dir!"
   	mkdir $HTTPROBEDIR
fi
if [ -d "$NO404DIR" ]; then
	echo -e $LIGHTRED
   echo "[*] no404 dir already exists!"
  # assetfinder $domain > "$ASSETFINDERDIR"
else
	echo -e $BLUE
	echo "[+] Creating no404 dir!"
   	mkdir $NO404DIR
fi


if [ -f "$ASSETFINDERDIR/$domain" ]; then
	echo -e $LIGHTRED
    echo "[-] $ASSETFINDERDIR/$domain exists."
else
	echo -e $BLUE
	echo "[*] Running assetfinder on $domain and storing the output in $ASSETFINDERDIR/$domain"
	echo -e $NC
	assetfinder $domain | tee "$ASSETFINDERDIR/$domain"
fi

if [ -f "$HTTPROBEDIR/$domain" ]; then
	echo -e $LIGHTRED
    echo "[-] $HTTPROBEDIR/$domain exists."
else
	echo -e $BLUE
	echo "[*] Running httprobe with the output from assetfinder from $domain and storing the output in $ASSETFINDERDIR/$domain"
	echo -e $NC
	cat "$ASSETFINDERDIR/$domain" | httprobe | tee "$HTTPROBEDIR/$domain"
fi


if [ -f "$NO404DIR/$domain" ]; then
	echo -e $LIGHTRED
    echo "[-] $NO404DIR/$domain exists."
else
	echo -e $BLUE
	echo "[*] Checking wich webservers are active from the output of httprobe and storing the output in $NO404DIR/$domain"
	echo -e $NC
	cat "$HTTPROBEDIR/$domain" | ono404 | tee "$NO404DIR/$domain"
fi

cat "$ASSETFINDERDIR/$domain" >> burpimport

echo -e $BLUE
echo "[*] Finished subdomain scan!"
