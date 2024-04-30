# The below two definitions are shorthands
EXECS=airbnb
OBJS=main.o functions.o
#      target called 'default' which is nothing but same as
#      'airbnb'
default: airbnb
main.o: main.c app.h
		gcc -c main.c


functions.o: functions.c app.h
		gcc -c functions.c


airbnb: functions.o main.o
		gcc functions.o main.o -o airbnb


# a new target called clean it simply removes some files
clean:
		rm -f $(OBJS) $(EXECS)
# same as rm -f a.out myprog mymain.o ops.o