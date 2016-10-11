/*
 * args.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <args.h>

int init_args(t_args *args)
{
  args -> pid = 0;
  args -> sig = DEFAULT_SIG;
  return (SUCCESS);
}

int parse_args(t_args *args, const int argc, char **argv)
{
  
}
