/*
 * args.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#ifndef _ARGS_H
#define _ARGS_H

typedef struct s_args;
struct s_args
{
  int pid;
  char *sig;
};

int init_args(t_args *args);
int parse_args(t_args *args, const int argc, char **argv); /* const char** isn't safe */

#endif
