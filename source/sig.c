/*
 * sig.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <signal.h>
#include <sig.h>

int to_sig(const char *sig)
{
  if (!my_strcmp(sig, STR_SIGHUP))
    return (SIGHUP);
  else if(!my_strcmp(sig, STR_SIGINT))
    return (SIGINT);
  else if (!my_strcmp(sig, STR_SIGQUIT))
    return (SIGQUIT);
  else if (!my_strcmp(sig, STR_SIGILL))
    return (SIGILL);
  else if (!my_strcmp(sig, STR_SIGTRAP))
    return (SIGTRAP);
  else if (!my_strcmp(sig, STR_SIGIOT))
    return (SIGIOT);
  else if (!my_strcmp(sig, STR_SIGBUS))
    return (SIGBUS);
  else if (!my_strcmp(sig, STR_SIGFPE))
    return (SIGFPE);
  else if (!my_strcmp(sig, STR_SIGKILL))
    return (SIGKILL);
  else if (!my_strcmp(sig, STR_SIGUSR1))
    return (SIGUSR1);
  else if (!my_strcmp(sig, STR_SIGSEGV))
    return (SIGSEGV);
  else if (!my_strcmp(sig, STR_SIGUSR2))
    return (SIGUSR2);
  else if (!my_strcmp(sig, STR_SIGPIPE))
    return (SIGPIPE);
  else if (!my_strcmp(sig, STR_SIGALRM))
    return (SIGALRM);
  else if (!my_strcmp(sig, STR_SIGTERM))
    return (SIGTERM);
  else if (!my_strcmp(sig, STR_SIGSTKFLT))
    return (SIGSTKFLT);
  else if (!my_strcmp(sig, STR_SIGCHLD))
    return (SIGCHLD);
  else if (!my_strcmp(sig, STR_SIGCONT))
    return (SIGCONT);
  else if (!my_strcmp(sig, STR_SIGSTOP))
    return (SIGSTOP);
  else if (!my_strcmp(sig, STR_SIGTSTP))
    return (SIGTSTP);
  else if (!my_strcmp(sig, STR_SIGTTIN))
    return (SIGTTIN);
  else if (!my_strcmp(sig, STR_SIGTTOU))
    return (SIGTTOU);
  else if (!my_strcmp(sig, STR_SIGURG))
    return (SIGURG);
  else if (!my_strcmp(sig, STR_SIGXCPU))
    return (SIGXCPU);
  else if (!my_strcmp(sig, STR_SIGXFSZ))
    return (SIGXFSZ);
  else if (!my_strcmp(sig, STR_SIGVTALRM))
    return (SIGVTALRM);
  else if (!my_strcmp(sig, STR_SIGPROF))
    return (SIGPROF);
  else if (!my_strcmp(sig, STR_SIGWINCH))
    return (SIGWINCH);
  else if (!my_strcmp(sig, STR_SIGIO))
    return (SIGIO);
  else if (!my_strcmp(sig, STR_SIGPWR))
    return (SIGPWR);
  return (FAILURE);
}

int is_validpid(const int pid)
{
  int pid_max;
  int fd;
  char buf[8];

  fd = my_openfd(PIDMAX_PATH, OPEN_READ);
  my_fdgets(fd, buf);
  pid_max = my_atoi(buf);
  my_closefd(fd);
  if (pid < 0 || pid > pid_max)
    return (FALSE);
  return (TRUE);
}
