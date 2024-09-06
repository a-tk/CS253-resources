# Problem Description
Playlist Builder is an application that allows the user to specify a CSV file containing song data and a number of songs on the commandline.  The application will open the CSV, load the specified number of songs from the CSV file into a dynamically allocated array of the specified size, sort the songs in the array based upon their duration, then display the list of songs in the console.

<br />
1. Carefully study the provided Song header file (Song.h) and function definitions (Song.c)
<br /><br />
The Song struct as well as function declarations for the related functions described below have been provided in Song.h. Please do not modify the provided Song.h or Song.c files. Details regarding each function as well as expected return values are included in the comments associated with each function declaration in Song.h. The following is a summary of this content:

- Data members
  - char artist[40];
  - char album[40];
  - char title[40];
  - int duration;
- Related functions
  - Song * CreateSong(const char artist[], const char album[], const char title[], int duration)  
  - int CompareSongs(const void * song1PtrPtr, const void * song2PtrPtr) 
  - void PrintSong(Song * thisSong)
  - void DestroySong(Song * thisSong)
  
<br />
2. Process the command-line arguments passed into main(), validate the correct number of values are passed in, dynamically create a songlist array of the specified size and finally, open the specified file.  Handle any errors that occur by displaying a helpful error message and then exit with a non-zero exit status. 

<br />

## Expected output for incorrect number of command-line arguments
```
./myprog 
Usage: ./myprog <catalog.csv> <size>
```

<br />

## Expected output for missing catalog file
```
./myprog  rush-collection.csv 15
fopen: No such file or directory
```

<br />

## Expected output for size not an integer value
```
./myprog music-collection.csv twelve
Error: Invalid size specied: twelve
```

<br />
3. Iterate through each line in the specified input CSV file, extracting song fields from each line as shown in the CSVParser example, adding each song to the songlist. If the songlist fills up before reaching the of the CSV file, stop processing the CSV file and display a message specifying the number of songs that were successfully loaded. If the end of the CSV file is reached before loading the requested number of songs, display a message specifying the number of songs that were successfully loaded.
<br /><br />

## Expected Program Output (with sample user input)
```
./myprog music-collection.csv 12
Successfully loaded 12 songs!
```

<br />
4. Iterate through the songlist and display each song in the console using the PrintSong() function.
<br /><br />

## Expected Program Output (with small selection from music collection)
```
./myprog music-collection.csv 2
Successfully loaded 2 songs!
------------------------------------------------
Artist: Aerosmith
Album: A Little South Of Sanity Disc 1
Title: Falling In Love (Is Hard On The Knees)
Duration: 209
------------------------------------------------
------------------------------------------------
Artist: Aerosmith
Album: A Little South Of Sanity Disc 1
Title: Hole In My Soul
Duration: 340
------------------------------------------------
```


<br />
5. Release allocated memory. Iterate through the songlist, freeing each Song by calling the DestroySong() function. Then free the songlist.  Also make certain to close any files that were opened.
<br /><br />

## Expected Valgrind Output (with large selection from music collection)
```
valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./myprog  music-collection.csv 915 

==89619== Memcheck, a memory error detector
==89619== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==89619== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==89619== Command: ./myprog music-collection.csv 915

<<<<<<<< PROGRAM OUTPUT REMOVED >>>>>>>>

==89614== 
==89614== HEAP SUMMARY:
==89614==     in use at exit: 0 bytes in 0 blocks
==89614==   total heap usage: 919 allocs, 919 frees, 126,372 bytes allocated
==89614== 
==89614== All heap blocks were freed -- no leaks are possible
==89614== 
==89614== For lists of detected and suppressed errors, rerun with: -s
==89614== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
