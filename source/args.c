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
#include <sig.h>

int parse_args(t_args *args, const int argc, char **argv)
{
  if (argc != 3)
    return (my_retstr(FAILURE, SYNTAX));
  args -> sig = argv[1];
  args -> pid = my_atoi(argv[2]);
  return (SUCCESS);
}

int check_args(const t_args *args)
{
  if (to_sig(args -> sig) == FAILURE)
    return (my_retstr(FAILURE, ERR_UNKNOWNSIG));
  else if (is_validpid(args -> pid) == FALSE)
    return (my_retstr(FAILURE, ERR_INVALIDPID));
  return (SUCCESS);
}
