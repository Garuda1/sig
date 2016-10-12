# sig
Linux utility to send signals to processes

## Synopsis

    sig [signal] [pid]

## Description

This utility attempts to send a given signal to the given process ID.

## Return value

On failure to parse the arguments, it returns `FAILURE` as defined in the [unixlib header](https://github.com/Garuda1/unixlib). Otherwise, it returns the value returned by the `kill` POSIX function.

## Example use case

    $ wine internet-explorer.exe
    $ ps ax | grep internet-explorer
     1129 tty2     Sl+    3:28 /garbage/internet-explorer.exe
     4070 pts/0    Sl+    0:00 grep internet-explorer
    $ sig SIGSEGV 1129 #Die you abomination
    $ sudo pacman -Rcs wine
    $ sudo dd if=/dev/null of=/dev/sda
