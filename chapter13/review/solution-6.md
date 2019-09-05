# Problem
What’s the difference between binary files and text files on the one hand versus binary streams and text streams on the other?

# Solution
## binary files vs text files
All file content is in binary form (zeros and ones). But if a file primarily uses the binary codes for characters to represent text, then it is a text file; it has text content.
If instead the binary values in the file represent machine-language code or numeric data or image or music encoding, the content is binary.

## binary streams vs text streams
Platform newline character is convert to c newline character '\n' when reading from text stream 
C newline character '\n' is converted to platform newline character when writing to text stream

For binary stream, there is no conversions when reading and writing, each byte is been written or read as it is.