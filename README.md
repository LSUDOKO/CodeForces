# CodeForces Solutions

A curated collection of competitive programming solutions for problems from [Codeforces](https://codeforces.com/), organized by difficulty rating and contest. This repository documents a continuous learning journey in algorithmic problem solving, from foundational problems to advanced rating tiers.

## Table of Contents

- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Difficulty Distribution](#difficulty-distribution)
- [Naming Convention](#naming-convention)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Academic Integrity](#academic-integrity)
- [License](#license)

## Overview

This repository serves as a personal archive of competitive programming practice and progress. It contains solutions to problems across a wide range of difficulty ratings, as well as complete contest submissions. The primary implementation language is C++, with additional solutions in other languages where appropriate.

The collection is maintained with the following objectives:

- To track and demonstrate steady progress across difficulty tiers.
- To provide reference implementations for common algorithms and techniques.
- To share clean, working solutions with the competitive programming community.

## Repository Structure

The repository is organized into difficulty-based directories, contest archives, and supplementary sections.

```
├── Rating 800/          Problems rated 800
├── Rating 900/          Problems rated 900
├── Rating 1000/         Problems rated 1000
├── Rating 1100/         Problems rated 1100
├── Rating 1200/         Problems rated 1200
├── Rating 1300/         Problems rated 1300
├── Rating 1400/         Problems rated 1400
├── Rating 1500/         Problems rated 1500
├── Rating 1600/         Problems rated 1600
├── Rating 1700/         Problems rated 1700
├── Contests/            Complete contest submissions (29 contests)
├── codechef/            Solutions to CodeChef problems
├── codearena/           Solutions to CodeArena problems
└── fundamental_of_c++/  Foundational C++ programs and examples
```

### Ratings

Each `Rating NNNN/` directory contains standalone solution files for problems with a matching difficulty rating. Solutions are self-contained and require no additional dependencies beyond a standard C++ compiler.

### Contests

The `Contests/` directory contains full contest attempts, with each subdirectory (e.g., `contest_1`, `contest_28`) holding the solutions submitted for that contest.

## Difficulty Distribution

The following table summarizes the number of solution files in each rating tier:

| Rating | Solutions |
| ------ | --------: |
| 800    | 81        |
| 900    | 29        |
| 1000   | 38        |
| 1100   | 35        |
| 1200   | 14        |
| 1300   | 10        |
| 1400   | 8         |
| 1500   | 6         |
| 1600   | 5         |
| 1700   | 1         |
| **Total** | **227** |

In addition to the rating-based solutions, the repository contains 29 contest archives and supplementary problem sets, bringing the total to over 340 C++ solution files.

## Naming Convention

Solution files follow a consistent naming pattern derived from the original problem identifier:

```
<Problem_ID> <Problem_Title>.cpp
```

Examples:

- `A. Watermelon.cpp`
- `A. Next Round.cpp`
- `B. Queue at the School.cpp`

Contest submissions follow the pattern `<Problem_Letter>.cpp` within their contest directory.

## Getting Started

The solutions are written in C++ and are compatible with the GNU Compiler Collection (GCC). To compile and run any solution:

```bash
g++ -std=c++17 -O2 -Wall "A. Watermelon.cpp" -o solution
./solution
```

Each program reads from standard input and writes to standard output, matching the Codeforces judge interface. For problems with file-based I/O, the corresponding file operations are included in the source.

## Contributing

Contributions that improve the quality of this collection are welcome. Suggested areas include:

- Additional solutions with clear, well-commented implementations.
- Alternative approaches for existing problems.
- Corrections to any incorrect or suboptimal solutions.

Please ensure any contribution adheres to the existing naming convention and compiles without warnings under the compilation flags listed above.

## Academic Integrity

These solutions are intended for educational and reference purposes. Using them to submit during live contests violates the Codeforces [rules](https://codeforces.com/blog/entry/4088) and undermines the value of competitive programming practice. Use this material to study, compare approaches, and learn new techniques, rather than to complete active contests.

## License

This repository is intended to be distributed under the MIT License, permitting use, sharing, and modification of the solutions in accordance with the license terms. Note that the repository does not currently include a `LICENSE` file; one should be added to formally apply the license.
