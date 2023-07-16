# <img width="100%" src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&duration=1500&pause=100&center=true&vCenter=true&width=500&lines=Tahun+Kabisat;C%2B%2B+Code" />

### 🔰 Source Code

1. [Tahun Kabisat](https://github.com/galihsch/cpp-gallery/blob/main/src/kabisat/kabisat.cpp)

### 🔰 Flowchart

<a href="https://github.com/galihsch/cpp-gallery/blob/main/src/kabisat/flow_kabisat.png"><img width="300px" src="https://github.com/galihsch/cpp-gallery/blob/main/src/kabisat/flow_kabisat.png?raw=true" /></a>

### 🔰 Pseudocode

```
DECLARE
    INT tahun

BEGIN
    INPUT tahun
    IF tahun MOD 4 = 0 THEN
        IF tahun MOD 100 = 0 THEN
            IF tahun MOD 400 = 0 THEN
                OUTPUT "Tahun Kabisat"
            ELSE
                OUTPUT "Bukan Tahun Kabisat"
            END IF
        ELSE
            OUTPUT "Tahun Kabisat"
        END IF
    ELSE
        OUTPUT "Bukan Tahun Kabisat"
    END IF
END
```

### 🔰 Algoritma

```
1. Deklarasikan variabel tahun.
2. Input tahun.
3. Jika tahun adalah kelipatan 4 dan bukan kelipatan 100, atau tahun merupakan kelipatan 400, maka Tahun adalah Kabisat. Selain itu Bukan Kabisat. 
Tampilkan informasi "Tahun adalah kabisat" atau "Tahun bukan Kabisat".
```
