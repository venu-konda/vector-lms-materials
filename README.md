# Vector Institute LMS materials

Personal backup of the course materials from my Vector India embedded-systems training
(batch V23HE7), downloaded from the institute's Moodle LMS on 17 October 2026.

This content belongs to Vector Institute and is kept here as a **private** archive for my own
reference. Do not redistribute it.

## Courses

| Course | Files | Size | Mostly |
| --- | ---: | ---: | --- |
| [`BlackBerry - 190624/`](BlackBerry%20-%20190624/) | 0 | 0.0 MB |  |
| [`V23HE7 - 8051/`](V23HE7%20-%208051/) | 32 | 17.8 MB | pdf 12, pptx 10, zip 8, asm 1 |
| [`V23HE7 - ARM/`](V23HE7%20-%20ARM/) | 223 | 86.3 MB | pdf 92, docx 43, c 32, h 15 |
| [`V23HE7 - Aptitude/`](V23HE7%20-%20Aptitude/) | 92 | 55.2 MB | pdf 90, docx 2 |
| [`V23HE7 - C/`](V23HE7%20-%20C/) | 309 | 58.7 MB | c 158, pdf 130, h 9, other 7 |
| [`V23HE7 - CPP/`](V23HE7%20-%20CPP/) | 231 | 6.3 MB | cpp 174, pdf 47, h 8, c 1 |
| [`V23HE7 - DS/`](V23HE7%20-%20DS/) | 105 | 27.9 MB | c 47, pdf 34, cpp 12, other 6 |
| [`V23HE7 - Linux/`](V23HE7%20-%20Linux/) | 103 | 30.7 MB | pdf 55, c 40, docx 3, ppt 2 |
| [`V23HE7 - TCP IP/`](V23HE7%20-%20TCP%20IP/) | 39 | 11.6 MB | c 17, pptx 7, pdf 6, h 5 |

1134 files, 295 MB in total. Each course folder has an `INDEX.md` that lists every
section and module in the order it appears in the LMS, including modules that had nothing to
download (assignments, quizzes, forums, links).

## Layout

```
<course>/<section>/<module>/<files>
```

Folder names are the section and module names as shown on the LMS. Folder-type modules keep
their own sub-folders. One file could not be downloaded because the server refuses to serve it
(a stray editor swap file in `V23HE7 - C/NOTES and Documents/ClassPrograms/FILE/`).

## How this was made

Downloaded through the Moodle mobile web-service API with the script `vector_lms_backup.py`
(kept outside this repository). Re-running the script skips files that are already present, so
it can be used to pick up new material later.
