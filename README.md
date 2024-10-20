# Caesar Text Encryption 

This project implements the Caesar cipher, a simple encryption technique where each letter in a message is shifted by a specified number of positions in the alphabet.

## How It Works:
- The program encrypts or decrypts a message using a shift (rotation) key provided by the user.
- The Caesar cipher shifts each letter of the alphabet by a certain number of positions. For example, with a shift of 1, `A` becomes `B`, `B` becomes `C`, and so on.

## Files:
- **caesar.c**: The main program file that implements the Caesar cipher encryption.

## Libraries Used:
- **string.h**: Standard C library used for string manipulation.

## Usage:
To encrypt a message, run the program and provide a shift key (a number) as a command-line argument. Then input your message to be encrypted.

Example:

```bash
./caesar 3
Enter the message: HELLO
Encrypted message: KHOOR
