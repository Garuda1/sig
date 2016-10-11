/*
 * sig.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#ifndef _SIG_H
#define _SIG_H


/* Used when parsing the arguments */
#define SIGHUP    "SIGHUP"
#define SIGINT    "SIGINT"
#define SIGQUIT   "SIGQUIT"
#define SIGILL    "SIGILL"
#define SIGTRAP   "SIGTRAP"
#define SIGIOT    "SIGIOT"
#define SIGBUS    "SIGBUS"
#define SIGFPE    "SIGFPE"
#define SIGKILL   "SIGKILL"
#define SIGUSR1   "SIGUSR1"
#define SIGSEGV   "SIGSEGV"
#define SIGUSR2   "SIGUSR2"
#define SIGPIPE   "SIGPIPE"
#define SIGALRM   "SIGALRM"
#define SIGTERM   "SIGTERM"
#define SIGSTKFLT "SIGSTKFLT"
#define SIGCHLD   "SIGCHLD"
#define SIGCONT   "SIGCONT"
#define SIGSTOP   "SIGSTOP"
#define SIGTSTP   "SIGTSTP"
#define SIGTTIN   "SIGTTIN"
#define SIGTTOU   "SIGGTOU"
#define SIGURG    "SIGURG"
#define SIGXCPU   "SIGXCPU"
#define SIGXFSZ   "SIGXFSZ"
#define SIGVTALRM "SIGVTALRM"
#define SIGPROF   "SIGPROF"
#define SIGWINCH  "SIGWINCH"
#define SIGIO     "SIGIO"
#define SIGPWR    "SIGPWR"

#define SYNTAX COLOUR_RED "Syntax:" COLOUR_RESET " sig [signal] [pid]\n"
#define DEFAULT_SIG SIGKILL /* Ahahaha */

#endif
