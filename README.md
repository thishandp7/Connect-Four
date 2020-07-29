# Connect-Four

This project was created for the CSCI 440 (Introduction to Artificial Intelligence) course in SCSU.

This project intends to study artificial intelligence. We wanted to determine the effect of ply depth (the number of plies, which are turns by a single player that the 
program looks ahead). Moreover, the effect of getting the first move on the chance of winning. To do this, I wrote a connect four game in C++ to simulate gameplay 
between computer-controlled players. I found out that increasing the ply depth increases the chance of winning, as does getting the first move. I found that the effect 
of a single ply-depth increase was more significant than the effect of getting the first move. I also found that when two identical players faced off, there would be 
more draws if both had even ply depths.

## Using the program:
### Download and Installation:
  - Download and extract “ConnectFour_setup.zip” file.
  - Run “setup.exe” to install the program.

### How to play:
![Image of the Drawing Program](img/howtoplay.PNG)

## Design choices:

### Reason for choosing Connect Four

Unlike, chess or other mildly complex games, connect four is simple and this will help me focus on the study rather than simulating a complex gameplay. There are a relatively small number of possible moves at any given point in the game, limiting the combinatorial explosion. However, the game still allows a rich depth of strategy, unlike games such as tic-tac-toe.

  - A 2D array was used to represent the board.
      | `0` | `0`  | `0`  | `0`  | `0`  | `0`  | `0`  |
      | - | - | - | - | - | - | - |
      | `0` | `0`  | `0`  | `0`  | `0`  | `0`  | `0`  |
      | `0` | `0`  | `0`  | `0`  | `0`  | `0`  | `0`  |
      | `0` | `0`  | `0`  | `0`  | `0`  | `0`  | `0`  |
      | `0` | `1`  | `2`  | `0`  | `2`  | `2`  | `0`  |
      | `1`  | `2` | `2`  | `2`  | `1` | `1`  | `1`  |
      
      (example representation of the game board)
  - 1s represent the human player, 2s represent the AI, and 0s represent the empty cells.
  - Minimax algorithm was used to determine the next move made by the AI.

### Static Evaluation function:
The static evaluation function of this game is implemented by assigning scores to each cell on the board. Those scores are based on how many four disks can be formed form that particular cell in all eight directions. The representations of the scores on the boards are shown as below.

| `3` | `4`  | `5`  | `7`  | `5`  | `4`  | `3`  |
| - | - | - | - | - | - | - |
| `4` | `6`  | `8`  | `10`  | `8`  | `6`  | `4`  |
| `5` | `8`  | `11`  | `13`  | `11`  | `8`  | `5`  |
| `5` | `8`  | `11`  | `13`  | `11`  | `8`  | `5`  |
| `4` | `6`  | `8`  | `10`  | `8`  | `6`  | `4`  |
| `3` | `4`  | `5`  | `7`  | `5`  | `4`  | `3`  |

The static evaluation function calculates the current move by looping through each cell on the scoreboard and accumulating the cell weights which belong to the AI player(2) and subtracting the cell weights that belong to the human player(1). After the algorithm iterates through the entire board, the function will return the final score. 
