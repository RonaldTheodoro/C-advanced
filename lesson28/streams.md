# Streams

Sequence of bytes

## iostream

Standard Input / Output Streams Library
Header that defines the standard input/output stream objects:

### cin: Standard input stream
Object of class istream that represents the standard input stream oriented to narrow characters (of type char). It corresponds to the C stream stdin.

The standard input stream is a source of characters determined by the environment. It is generally assumed to be input from an external source, such as the keyboard or a file.

As an object of class istream, characters can be retrieved either as formatted data using the extraction operator (operator>>) or as unformatted data, using member functions such as read.

The object is declared in header <iostream> with external linkage and static duration: it lasts the entire duration of the program.


### cout: Standard output stream
Object of class ostream that represents the standard output stream oriented to narrow characters (of type char). It corresponds to the C stream stdout.

The standard output stream is the default destination of characters determined by the environment. This destination may be shared with more standard objects (such as cerr or clog).

As an object of class ostream, characters can be written to it either as formatted data using the insertion operator (operator<<) or as unformatted data, using member functions such as write.

The object is declared in header <iostream> with external linkage and static duration: it lasts the entire duration of the program.


### cerr: Standard output stream for errors
Object of class ostream that represents the standard error stream oriented to narrow characters (of type char). It corresponds to the C stream stderr.

The standard error stream is a destination of characters determined by the environment. This destination may be shared by more than one standard object (such as cout or clog).

As an object of class ostream, characters can be written to it either as formatted data using the insertion operator (operator<<) or as unformatted data, using member functions such as write.

The object is declared in header <iostream> with external linkage and static duration: it lasts the entire duration of the program.


## fstream

Input/output stream class to operate on files.

Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).

File streams are associated with files either on construction, or by calling member open.


### ifstream: Input stream class to operate on files.

Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).

### ofstream: Output stream class to operate on files.

Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).

File streams are associated with files either on construction, or by calling member open.


#Sources:
http://www.cplusplus.com/reference/iostream/
http://www.cplusplus.com/reference/fstream/fstream/