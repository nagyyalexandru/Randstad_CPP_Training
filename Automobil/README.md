## C++ Digital Academy, Level 1 Assignment: Implementati o ierarhie de clase (fiecare clasa cu fisierul ei sursa) care sa includa o clasa abstracta care sa contina toate elementele necesare unui obiect de tip automobil (care sa contina minim informatii legate de: combustibil, caroserie, tractiune, putere, echipare, VIN number as a pointer) si diferite tipuri derivate de automobil in functie de caracteristicile fiecaruia.

Subtasks:
1. Exemplificati in main ordinea apelarii constructorilor si destructorilor pentru clasele de baza si derivate
2. Limitati numarul de obiecte ce pot fi create la 1 obiect pentru una dintre clase
3. Implementati "Rule of three" si "Rule of five" pentru clasele derivate
4. Implementati o clasa utilitara ale carei functii sa poata fi apelate fara a folosi un obiect (functii de printare custom, de calcul al mediei etc)


## Steps to Build and Run the Project
1. **Navigate to the `build` directory**:
    ```bash
    cd Automobil/build
2. **Run CMake to configure the project**:
    ``` bash
    cmake ..
    make
3. **Execute the program by running this command from the build directory**: 
    ```bash
    ./AutomobilDemo
