# Chapter 15 Excercise 6

a) main.c f1.c f2.c will need to be compiled when built for the first time

b) f1.c is changed -> f1.c will need recompiling

c) f1.h is changed -> main.c f1.c and f2.c will need to be recompiled as they all depend on f1.h

d) f2.h is changed -> only f1.c and f2.c will need to be recompiled as both depend on f2.h.
   main.c does not depend on f2.h so doesn't need to recompile.
