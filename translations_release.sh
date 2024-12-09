#!/bin/sh

LRELEASE=""

if [ `which lrelease-qt5` ] ; then
	LRELEASE="`which lrelease-qt5`"
elif [ `which lrelease` ] ; then
	LRELEASE="`which lrelease`"
fi

if [ "$LRELEASE" = "" ] ; then
	echo "Error: lrelease / lrelease-qt5 not found."
	exit 1
fi

cd `dirname $0`
rm src/resources/qm/*.qm
$LRELEASE src/resources/ts/*.ts
mv src/resources/ts/*.qm src/resources/qm/
