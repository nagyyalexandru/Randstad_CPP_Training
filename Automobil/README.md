## C++ Digital Academy, Level 1 Assignment: Implementati o ierarhie de clase (fiecare clasa cu fisierul ei sursa) care sa includa o clasa abstracta care sa contina toate elementele necesare unui obiect de tip automobil (care sa contina minim informatii legate de: combustibil, caroserie, tractiune, putere, echipare, VIN number as a pointer) si diferite tipuri derivate de automobil in functie de caracteristicile fiecaruia.

Subtasks:
1. Exemplificati in main ordinea apelarii constructorilor si destructorilor pentru clasele de baza si derivate
2. Limitati numarul de obiecte ce pot fi create la 1 obiect pentru una dintre clase
3. Implementati "Rule of three" si "Rule of five" pentru clasele derivate
4. Implementati o clasa utilitara ale carei functii sa poata fi apelate fara a folosi un obiect (functii de printare custom, de calcul al mediei etc)

## Project Structure
Automobil/
├── build/           # Directory for build files (where CMake will create files)
├── lib/             # Directory for header files (.h)
├── src/             # Directory with source files (main.cpp, Automobil.cpp, etc.)
├── CMakeLists.txt   # CMake configuration file

## Steps to Build and Run the Project
1. **Navigate to the `build` directory**:
    ```bash
    cd Automobil/build
2. **Run CMake to configure the project**:
    ``` bash
    cmake ..
This command tells CMake to configure the project based on the CMakeLists.txt file located in the parent directory (..). CMake will generate Makefiles within the build directory.
3. **Execute the program by running this command from the build directory**: 
    ```bash
    ./AutomobilDemo

# After running these commands, the program will execute and exemplify every subtask mentioned earlier in the assignment.
