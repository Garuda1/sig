/*
 * main.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 */

#define _POSIX_C_SOURCE 200809L

#include <unistd.h>
#include <unixlib.h>
#include <signal.h>
#include <args.h>
#include <sig.h>

int main(int argc, char **argv)
{
  t_args args;

  if (parse_args(&args, argc, argv) == FAILURE)
    return (FAILURE);
  if (check_args(&args) == FAILURE)
    return (FAILURE);
  return (kill(args.pid, to_sig(args.sig)));
}
