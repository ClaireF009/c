# Algorithms
## Assignment
You have to implement 4 common algorithms
- Get The Nth Number of the Fibonacci Sequence (for example the 6th number is 8 in the sequence 1-1-2-3-5-8-13 etc)

- Reverse and Integer (example 123 becomes 321)

- Get The Largest Prime Factor of n (The prime factors of 13195 are 5, 7, 13 and 29 so the answer would be 29)

- Find the sum of all prime numbers below 1000

## How to
### First steps
First you want to fork the `c` repo from github. If you do not have a github account, now is a great time to make one.

to fork a repository, in the upper right hand you will see a button called `Fork`. click hat and it will create a copy of this project in your github account. 
### What to modify
You want to modify the `algo.c` file in the `src/` directory. This is auto wired up to the `main.c` file to run a set of assertions. These assertions will determine your grade. 


### How to build/run
In order to build this you need `clang` installed. If you are on mac/linux it should be as easy as 

``` sh
brew install clang //MacOS
apt install clang //deb/ubuntu (if you are using arch you should just know how to get the right package)
```

You will also need a program called `make`. I use `gnumake` which ships with most linux distributions and mac. The Mac one is super old but should work for this project.


``` sh
brew install make //mac
sudo apt install make //ubuntu/deb
```

### windows
My best advice for windows is to either install the WSL2 https://learn.microsoft.com/en-us/windows/wsl/install and follow the ubuntu instructions above

if you dont want to do that use the cygwin project https://www.cygwin.com/ and install the right tools



once you have the tools you want to run 
`make` in the source directory of the algorithms project. this will compile and run your program

once you are done run `make clean` to clean up your workspace (there is a .gitignore file that will keep your repo clean)

#### advanced
if you are really stuck on gcc for a compiler, modify the makefile and set `CC` to `gcc` instead of clang
### how to submit
Once you are done and all assertions pass you will commit your changes to your local branch and then push to github. Once that is done, copy the URL for your fork and submit it on canvas


``` sh
git add .
git commit -m "done doing homnework!"
git push origin master
```

## Rubric
All asertions must pass and your program completes without error. every failed assertion 
