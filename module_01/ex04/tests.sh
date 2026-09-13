#!/bin/bash

PROGRAM=./build/sed_is_for_losers

echo "hello world" > t1.txt
$PROGRAM t1.txt world there
echo "Test 1 (normal replace): $(cat t1.txt.replace)"

echo "hello world" > t2.txt
$PROGRAM t2.txt xyz abc
echo "Test 2 (s1 not found): $(cat t2.txt.replace)"

echo "aaaa" > t3.txt
$PROGRAM t3.txt aa b
echo "Test 3 (no overlap): $(cat t3.txt.replace)"

> t4.txt
$PROGRAM t4.txt foo bar
echo "Test 4 (empty file): '$(cat t4.txt.replace)'"

$PROGRAM doesnotexist.txt foo bar
echo "Test 5 (missing file) exit code: $?"

$PROGRAM onlyonearg
echo "Test 6 (wrong arg count) exit code: $?"

rm -f t1.txt t1.txt.replace t2.txt t2.txt.replace t3.txt t3.txt.replace t4.txt t4.txt.replace
