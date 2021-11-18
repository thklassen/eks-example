# File: test_code.c
# -----
# Copyright (c) 2021 Wind River Systems, Inc.
#

#ifndef FILE
#include <stdio.h>
#endif

#ifndef FALSE
#define FALSE 0
#define TRUE 1
#endif

/*
 * this define determines if we are using stubs -
 * set to 0 for stubs or 1 for no stubs
 */
#define no_stubs 1

#define MAX_COLOR 5

/*
 * names of the colors
 */
char *color_names[] =
{
  "Blue","Red","Green","Yellow","Orange"
};

/******************************************************************************
 *
 * main routine
 *
 *****************************************************************************/
int main ()
{
  int i;

  printf ("Color list:\n");
  for (i=0;i<MAX_COLOR;i++)
  {
    printf ("%s\n", color_names[i]);
  }

  return 0;
}
