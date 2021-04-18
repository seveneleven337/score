OBJ = score.o getscore.o eval.o classify.o output.o
APPNAME = score

#a rule to generate executable!
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
#a rule to compile each .c file
%.o : %.c
	gcc -g  -c -o $@ $<
#this rule is very handly
clean:
	rm $(OBJ) $(APPNAME)

