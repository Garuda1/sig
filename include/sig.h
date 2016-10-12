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
#define STR_SIGHUP    "SIGHUP"
#define STR_SIGINT    "SIGINT"
#define STR_SIGQUIT   "SIGQUIT"
#define STR_SIGILL    "SIGILL"
#define STR_SIGTRAP   "SIGTRAP"
#define STR_SIGIOT    "SIGIOT"
#define STR_SIGBUS    "SIGBUS"
#define STR_SIGFPE    "SIGFPE"
#define STR_SIGKILL   "SIGKILL"
#define STR_SIGUSR1   "SIGUSR1"
#define STR_SIGSEGV   "SIGSEGV"
#define STR_SIGUSR2   "SIGUSR2"
#define STR_SIGPIPE   "SIGPIPE"
#define STR_SIGALRM   "SIGALRM"
#define STR_SIGTERM   "SIGTERM"
#define STR_SIGSTKFLT "SIGSTKFLT"
#define STR_SIGCHLD   "SIGCHLD"
#define STR_SIGCONT   "SIGCONT"
#define STR_SIGSTOP   "SIGSTOP"
#define STR_SIGTSTP   "SIGTSTP"
#define STR_SIGTTIN   "SIGTTIN"
#define STR_SIGTTOU   "SIGGTOU"
#define STR_SIGURG    "SIGURG"
#define STR_SIGXCPU   "SIGXCPU"
#define STR_SIGXFSZ   "SIGXFSZ"
#define STR_SIGVTALRM "SIGVTALRM"
#define STR_SIGPROF   "SIGPROF"
#define STR_SIGWINCH  "SIGWINCH"
#define STR_SIGIO     "SIGIO"
#define STR_SIGPWR    "SIGPWR"

#define SYNTAX COLOUR_RED "Syntax: " COLOUR_RESET "sig [signal] [pid]\n"
#define ERR_UNKNOWNSIG COLOUR_RED "Error: " COLOUR_RESET "Unknown signal\n"
#define ERR_INVALIDPID COLOUR_RED "Error: " COLOUR_RESET "Invalid PID\n"

#define PIDMAX_PATH "/proc/sys/kernel/pid_max"

int is_validpid(const int pid);
int to_sig(const char *sig);

#endif
