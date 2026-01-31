# Backtracking Fundamentals

**Backtracking** is an algorithmic technique that considers searching every possible combination to solve a computational problem. It is basically a refined form of Brute Force.

## 1. Core Principles
- **Choice**: At each step, you make a choice.
- **Constraints**: You check if the choice satisfies certain conditions.
- **Goal**: You check if the goal is reached.
- **Backtrack**: If a choice does not lead to a solution (or after finding one), you "undo" the last choice and try the next available option.

## 2. State Space Tree
A **State Space Tree** is a tree representing all possible states (choices) of the problem.
- **Nodes**: Represent a state.
- **Branches**: Represent a choice.
- **Pruning**: Abandoning a branch of the tree once we realize it cannot possibly lead to a valid solution.

## 3. The Backtracking Template
Most backtracking problems follow this general recursive structure:

```cpp
void backtrack(State state) {
    if (isGoal(state)) {
        processSolution(state);
        return;
    }

    for (Choice choice : availableChoices(state)) {
        if (isValid(choice, state)) {
            makeChoice(choice, state); // Step 1: Record choice
            backtrack(state);          // Step 2: Recurse
            undoChoice(choice, state); // Step 3: BACKTRACK
        }
    }
}
```

## 4. Common Problems
- **N-Queens Problem**
- **Sudoku Solver**
- **Permutations and Combinations**
- **Rat in a Maze**
- **Subset Sum**

> [!NOTE]
> Backtracking is often much faster than simple brute force because **pruning** allows us to skip large portions of the search space.
