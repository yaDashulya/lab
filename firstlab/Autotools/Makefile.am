SUBDIRS = sources

man:
	cat ./sources/main.c ./sources/file2.c ./sources/file3.c | grep -C 1 '//<man>' | sed 's/<man>' //g' > manual.txt
