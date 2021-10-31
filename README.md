# Ncurses-BrightSiPhon
This is a version of BrightSiPhon (https://github.com/brysonpayne/BrightSiPhon) that uses ncurses background colours instead of WMI. 
BrightSiPhon is a proof-of-concept for exfiltrating data out of air-gapped Windows systems. It changes screen brightness via WMI where max brightness is 1 and minimum brightness is 0. 

This version is a C program that uses the ncurses library to do the same. A white screen represents a 1, a black screen represents 0. A cyan screen is used as calibration. Every 1 second represents a bit. 


References:
Payne, B., Marquez, M. (2021). BrightSiPhon: Hacking Air-Gapped Systems. Hacker Halted 2021. Atlanta, GA. October 7-8, 2021.
https://github.com/brysonpayne/BrightSiPhon

HackerHalter2021: BrightSiPhon: Hacking Air-Gapped Systems
https://www.hackerhalted.com/featured-speaker-bryson-payne/
