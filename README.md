# Connect-Four

This project was created for the CSCI 440 (Introduction to Artificial Intelligence) course in SCSU.

This project intends to study artificial intelligence. We wanted to determine the effect of ply depth (the number of plies, which are turns by a single player that the 
program looks ahead). Moreover, the effect of getting the first move on the chance of winning. To do this, I wrote a connect four game in C++ to simulate gameplay 
between computer-controlled players. I found out that increasing the ply depth increases the chance of winning, as does getting the first move. I found that the effect 
of a single ply-depth increase was more significant than the effect of getting the first move. I also found that when two identical players faced off, there would be 
more draws if both had even ply depths.

### Reason for choosing Connect Four

Unlike, chess or other mildly complex games, connect four is simple and this will help me focus on the study rather than simulating a complex gameplay. There are a relatively small number of possible moves at any given point in the game, limiting the combinatorial explosion. However, the game still allows a rich depth of strategy, unlike games such as tic-tac-toe.
