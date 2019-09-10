# Problme
How does C deal with different computers systems having different file and newline conventions?

# Solution

C standard creates a standard model and a standard set of I/O functions for dealing with files. At this high level, differences between systems are handled by specific C implementations so that you deal with a uniform interface.

Therefore, to check a newline, you can use `if (ch == '\n').` If the system actually uses the carriage-return/linefeed combination, the I/O functions automatically translate back and forth between the representations.

Conceptually, the C program deals with a stream instead of directly with a file. A `stream` is an idealized flow of data to which the actual input or output is mapped. That means various kinds of input with differing properties are represented by streams with more uniform properties. The process of opening a file then becomes one of associating a stream with the file, and reading and writing take place via the stream.