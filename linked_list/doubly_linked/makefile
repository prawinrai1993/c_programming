project : main.o delete.o input.o print.o save.o update_database.o quit.o reverse.o delall.o
	gcc -o project main.o delete.o input.o print.o save.o update_database.o reverse.o quit.o delall.o

main	: main.c
	gcc -c  -o main.o main.c

delete	:delete.c
	gcc -c -o delete.o delete.c

input 	:input.c
	gcc -c -o input.o input.c

reverse :reverse.c
	gcc -c -o reverse.o reverse.c

print	:print.c
	gcc -c -o print.o print.c

delete :delall.c
	gcc -c -o del_all.o delall.c

save :save.c
	gcc -c -o save.o save.c

update_database	:update_database.c
		gcc -c -o update_database.o update_database.c


quit :quit.c
	gcc -c -o quit.o quit.c
