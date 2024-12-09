#!/bin/sh

LUPDATE=""

if [ `which lupdate-qt5` ] ; then
	LUPDATE="`which lupdate-qt5`"
elif [ `which lupdate` ] ; then
	LUPDATE="`which lupdate`"
fi

if [ "$LUPDATE" = "" ] ; then
	echo "Error: lupdate / lupdate-qt5 not found."
	exit 1
fi

cd `dirname $0`/src
$LUPDATE src.pro
