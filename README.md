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
   git clone https://github.com/your-username/CS50.git
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
| 0 | Scratch | `mario.sb3` | ✔️ done |
| 1 | C, Mario | `mario.c` | ✔️ |
| 2 | Cryptography | `caesar.c`, `substitution.c` | ✔️ |
| 3 | Algorithms | `plurality.c`, `tideman.c` | ✔️ |
| 4 | Data structures | `filter`, `recover.c` | ✔️ |
| 5 | Python | `dna.py`, `readability.py` | ✔️ |
| 6 | Flask | `finance/` | 🛠️ under review |
| 7 | SQL | `movies.db`, `songs.db` | ✔️ |
| 8 | HTML/CSS | `homepage/` | ✔️ |
| 9 | JavaScript | `search/`, `ports/` | ✔️ |

*The table will be updated as I refactor or extend solutions.*

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
