
# Harvard CS50 – Solutions, Exercises & Projects

Welcome to my public archive for **CS50 – Introduction to Computer Science** by Harvard University. Here you will find my solved problem sets, the final project, and personal study notes.

> **Academic Honesty Reminder**  
> This repository exists for learning and reference. If you are currently enrolled in CS50, *do not copy* any code: read it, understand it, and then write your own.

---

## Table of Contents

1. [Repository Layout](#repository-layout)  
2. [Prerequisites & Setup](#prerequisites--setup)  
3. [How to Use This Material](#how-to-use-this-material)  
4. [Problem Set Details](#problem-set-details)  
5. [Final Project](#final-project)  
6. [Contributing](#contributing)  
7. [License](#license)  
8. [Acknowledgements](#acknowledgements)

---

## Repository Layout

```
CS50/
├── week0/            # Scratch, visual algorithms
├── week1/            # C, compilation, debugging
├── week2/            # Arrays, search & sort algorithms
├── week3/            # Memory and more complex algorithms
├── week4/            # Data structures (hash tables, linked lists)
├── week5/            # Python basics
├── week6/            # Advanced Python, testing, OOP
├── week7/            # SQL, SQLite, relational models
├── week8/            # HTML, CSS, Flask
├── week9/            # JavaScript, interactive front-end
├── final_project/    # My personal website
└── docs/             # Slides, extra notes & screenshots
```

Extra folders:

- **.github/** – issue templates and CI/CD workflows.  
- **scripts/** – helper tools for linting, formatting, and testing.

> Exercise files keep the original CS50 filenames (e.g. `credit.c`, `recover.c`, `finance/`).

---

## Prerequisites & Setup

1. **Git** – clone the repo:
   ```bash
   git clone https://github.com/GPioldi/Harvard-CS50.git
   cd CS50
   ```
2. **C compiler** (GCC or Clang) – required for the early problem sets.
3. **Python 3.10+** – for weeks 5–6.
4. **SQLite 3** – for SQL exercises.
5. **Pipenv** or **virtualenv** (optional) – to manage Python environments.

Install Python dependencies:
```bash
pip install -r requirements.txt
```

---

## How to Use This Material

- Each folder includes a `README_local.md` with set-specific notes.  
- Testing scripts (`check50` and `pytest`) are bundled when relevant.  
- Browse the commit history to watch my solutions evolve over time.

### Example: Run a C exercise
```bash
cd week4/filter
make filter
./filter images/lenna.bmp out.bmp
```

---

## Problem Set Details

| Week | Main Topic | Key Files | Status |
|------|-----------|-----------|--------|
| 0 | Scratch – Starting from Scratch | `GiulianoPioldi_Scratch_CS50.sb3` | ✔️ |
| 1 | C Basics | `hello.c`, `mario.c`, `cash.c`, `credit.c` | ✔️ |
| 2 | Arrays & Cryptography | `scrabble.c`, `readability.c`, `caesar.c`, `substitution.c` | ✔️ |
| 3 | Algorithms | `sort/`, `plurality.c`, `runoff.c`/`tideman.c` | ✔️ |
| 4 | Memory | `volume.c`, `filter`, `recover.c` | ✔️ |
| 5 | Data Structures | `inheritance.c`, `speller.c` | ✔️ |
| 6 | Python | `hello.py`, `mario.py`, `cash.py`, `credit.py`, `readability.py`, `dna.py` | 🛠️ |
| 7 | SQL | `songs.db`, `movies.db`, `fiftyville/` | ✔️ |
| 8 | Web (HTML, CSS, JS) | `trivia/`, `homepage/` | ✔️ |
| 9 | Flask | `birthdays/`, `finance/` | 🛠️ |

*The table will be updated as I refactor or extend solutions.*

### Week 1 Notes
- **Assignments**: Mario (less & more), Cash, Credit  
- **Easier exercise**: Mario (less) – *scheduled*  
- **Harder exercise (completed)**: Mario (more) – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/1/>  
- **Goal**: Practise C basics, loops, and conditionals.  
- **Tip**: Compile early, compile often with `make`.

### Week 2 Notes
- **Assignments**: Readability, Caesar, Substitution, Scrabble  
- **Easier exercise**: Caesar – *scheduled*  
- **Harder exercise (completed)**: Substitution – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/2/>  
- **Goal**: Master arrays, command-line arguments, and string handling.  
- **Tip**: Keep an ASCII table handy for quick char-int conversions.

### Week 3 Notes
- **Assignments**: Plurality, Runoff, Tideman, Sort  
- **Easier exercise**: Plurality – *scheduled*  
- **Harder exercise (completed)**: Tideman – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/3/>  
- **Goal**: Explore classic algorithms and voting systems.  
- **Tip**: Draw flowcharts before you code to clarify edge cases.

### Week 4 Notes
- **Assignments**: Volume, Filter (blur/edge/grayscale), Recover  
- **Easier exercise**: Volume – *scheduled*  
- **Harder exercise (completed)**: Recover – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/4/>  
- **Goal**: Understand memory management and file I/O.  
- **Tip**: Use `debug50` to step through BMP headers byte by byte.

### Week 5 Notes
- **Assignments**: Speller, Inheritance  
- **Easier exercise**: Inheritance – *scheduled*  
- **Harder exercise (completed)**: Speller – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/5/>  
- **Goal**: Work with hash tables, tries, and linked lists.  
- **Tip**: Experiment with different hash functions to improve `speller` speed.

### Week 6 Notes
- **Assignments**: Hello, Mario (Python), Cash, Credit, Readability, DNA  
- **Easier exercise**: Readability.py – *scheduled*  
- **Harder exercise (completed)**: DNA.py – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/6/>  
- **Goal**: Transition from C to Python and leverage built-ins.  
- **Tip**: List comprehensions and f-strings keep Python code concise.

### Week 7 Notes
- **Assignments**: Movies, Songs, Fiftyville  
- **Easier exercise**: Movies – *scheduled*  
- **Harder exercise (completed)**: Fiftyville – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/7/>  
- **Goal**: Query datasets with SQL and practise complex JOINs.  
- **Tip**: Start queries with `SELECT *` to explore the schema, then refine.

### Week 8 Notes
- **Assignments**: Homepage, Trivia  
- **Easier exercise**: Homepage – *scheduled*  
- **Harder exercise (completed)**: Trivia – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/8/>  
- **Goal**: Build responsive websites with HTML, CSS, and JavaScript.  
- **Tip**: Validate your HTML & CSS via W3C to catch subtle issues.

### Week 9 Notes
- **Assignments**: Birthdays, Finance  
- **Easier exercise**: Birthdays – *scheduled*  
- **Harder exercise (completed)**: Finance – ✅  
- **Link**: <https://cs50.harvard.edu/x/2025/psets/9/>  
- **Goal**: Create Flask web apps integrating SQL and external APIs.  
- **Tip**: Store API keys in environment variables, never in code.

---

## Final Project

### **Personal Website – [gpioldi.com](https://gpioldi.com)**

A minimalist, fast, and fully responsive personal website showcasing my portfolio, blog posts, and contact information.

**Tech stack**: Next.js 14, Tailwind CSS, MDX for content, Vercel hosting.  
All source code and deployment scripts live in the `final_project/` directory.

Sneak peek:

![Personal website screenshot](docs/images/gpioldi_home.png)

---

## Contributing

Pull requests and issues are welcome!  Before opening a large PR, please create an *issue* to discuss the change.

1. Fork this repo.  
2. Create a branch: `git checkout -b feature/awesome-thing`.  
3. Run tests: `pytest`.  
4. Commit and open a PR.

> **Style guides**: use `clang-format` for C and `black` for Python before committing.

---

## License

Distributed under the **MIT License**. See `LICENSE` for details.

---

## Acknowledgements

- David Malan and the entire CS50 staff for their excellent course materials.  
- The [CS50 Stack Exchange](https://cs50.stackexchange.com/) community for continuous help.  
- Everyone who reads, forks, or contributes to make these solutions better.

---

> _This is CS50._
