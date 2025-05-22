# Harvard CS50 – Soluzioni, Esercizi e Progetti

Benvenut* nel mio archivio pubblico dedicato al corso **CS50 – Introduction to Computer Science** di Harvard University.  Qui raccolgo gli *problem set*, i progetti finali e le note personali che ho sviluppato durante il percorso.

> **Nota sull’integrità accademica**  
> Questo repository è pensato per studio, revisione e condivisione del sapere.  Se stai attualmente frequentando CS50, non copiare il codice: usa il materiale solo come riferimento e scrivi le tue soluzioni da zero.

---

## Sommario

1. [Struttura della repository](#struttura-della-repository)
2. [Prerequisiti & installazione](#prerequisiti--installazione)
3. [Come utilizzare il materiale](#come-utilizzare-il-materiale)
4. [Dettagli sui problem set](#dettagli-sui-problem-set)
5. [Progetto finale](#progetto-finale)
6. [Contribuire](#contribuire)
7. [Licenza](#licenza)
8. [Ringraziamenti](#ringraziamenti)

---

## Struttura della repository

```
CS50/
├── week0/            # Scratch, algoritmi visuali
├── week1/            # C, compilatori, debugging
├── week2/            # Array, algoritmi di ricerca e ordinamento
├── week3/            # Algoritmi complessi e memoria
├── week4/            # Data structures (hash tables, linked lists)
├── week5/            # Python basics
├── week6/            # Python avanzato, test, OOP
├── week7/            # SQL, SQLite, modelli relazionali
├── week8/            # HTML, CSS, Flask
├── week9/            # JavaScript, front-end interattivo
├── final_project/    # Il mio progetto conclusivo
└── docs/             # Appunti, slide e risorse aggiuntive
```

Cartelle aggiuntive:

- **.github/** – issue templates, workflow CI/CD.
- **scripts/** – utility per verificare il codice (linting, formattazione, test).

> Gli esercizi mantengono la stessa nomenclatura dell’assegnazione originale (es. `credit.c`, `recover.c`, `finance/`).

---

## Prerequisiti & installazione

1. **Git** – clonare la repo:
   ```bash
   git clone https://github.com/tuo-utente/CS50.git
   cd CS50
   ```
2. **Compilatore C** (GCC o Clang) – per i primi problem set.
3. **Python 3.10+** – per gli esercizi delle settimane 5-6.
4. **SQLite 3** – per i database SQL.
5. **Pipenv** o **virtualenv** (opzionale) – gestione ambienti virtuali.

Installa le dipendenze Python:
```bash
pip install -r requirements.txt
```

---

## Come utilizzare il materiale

- Ogni cartella contiene un file `README_local.md` con istruzioni specifiche.
- Gli script di test (`check50` ed `pytest`) sono inclusi quando possibile.
- Usa i commit come *timelapse* per capire l’evoluzione delle soluzioni.

### Eseguire un esercizio d’esempio
```bash
cd week4/filter
make filter
./filter images/lenna.bmp out.bmp
```

---

## Dettagli sui problem set

| Settimana | Argomento principale | File chiave | Stato |
|-----------|---------------------|-------------|-------|
| 0 | Scratch | `mario.sb3` | ✔️ completato |
| 1 | C, Mario | `mario.c` | ✔️ |
| 2 | Criptografia | `caesar.c`, `substitution.c` | ✔️ |
| 3 | Algoritmi | `plurality.c`, `tideman.c` | ✔️ |
| 4 | Data structures | `filter`, `recover.c` | ✔️ |
| 5 | Python | `dna.py`, `readability.py` | ✔️ |
| 6 | Flask | `finance/` | 🛠️ in revisione |
| 7 | SQL | `movies.db`, `songs.db` | ✔️ |
| 8 | HTML/CSS | `homepage/` | ✔️ |
| 9 | JavaScript | `search/`, `ports/` | ✔️ |

🔄 Aggiornerò la tabella man mano che completo/refactorizzo il codice.

---

## Progetto finale

**"Go-Study" – piattaforma web per creare e condividere flashcard con spaced-repetition**  
Tecnologie: Flask, SQLite, Bootstrap, Vanilla JS.  
Trovi codice, demo e documentazione nella cartella `final_project/`.

![Go-Study screenshot](docs/images/gostudy.png)

---

## Contribuire

Pull request e segnalazioni sono benvenute!  
Per maggiore chiarezza, apri prima una *issue* descrivendo la modifica/bug.

1. Fai un *fork* del progetto.
2. Crea un branch: `git checkout -b fix/bug-name`.
3. Esegui i test: `pytest`.
4. Fai il commit e apri la PR.

> **Linee guida di stile**: usa `clang-format` per C e `black` per Python.

---

## Licenza

Distribuito con licenza **MIT**. Vedi `LICENSE` per i dettagli.

---

## Ringraziamenti

- David Malan e l’intero team CS50 per il materiale didattico.  
- [CS50 Stack Exchange](https://cs50.stackexchange.com/) e la community per l’aiuto costante.  
- Chiunque legga e contribuisca a migliorare queste soluzioni.

---

> _This is CS50._
