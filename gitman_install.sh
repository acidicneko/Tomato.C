#!/bin/bash
install() {
	sudo make install
}

uninstall() {
	sudo rm /usr/bin/tomato
	if test -f /usr/bin/tomatonoise; then
  		sudo rm /usr/bin/tomatonoise
	fi
}

update(){
	install
}

if [ $1 = "install" ] ; then 
	install
elif [ $1 = "uninstall" ] ; then
	uninstall
elif [ $1 = "update" ] ; then
	update
else
	echo unknown option
	exit 1
fi
