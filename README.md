### Jungle & Animal Management System

Welcome to the Jungle & Animal Management System! This project is a C++ application designed to manage a virtual jungle environment, allowing users to add, remove, search, and display information about various animals. The system provides a robust framework for managing animal data and offers several functionalities to keep track of the animals in the jungle.

### Features

1. **Add New Animals**: Users can add new animals to the jungle by providing the animal's name, species, and age. The new animal is set to available and added to the list.
2. **Remove Animals**: Users can remove animals from the jungle by specifying the animal's name. The animal is then marked as unavailable and removed from the list.
3. **Search Animals**: The system allows users to search for animals by name, age, or species.
4. **Display Animals**: Users can display all the animals currently available in the jungle.
5. **Display Total Number of Animals**: The system displays the total number of animals in the jungle.

### Classes and Structure

#### `animal` Class
- **Attributes**: `name`, `species`, `age`, `available`
- **Methods**: Constructors, Destructor, Getters and Setters, `checkAvailable()`, `DisplayInfo()`
  
The `animal` class manages individual animal data, including their name, species, age, and availability status. It provides methods to set and get these attributes, check availability, and display the animal's information.

#### `Jungle` Class
- **Attributes**: `animal* animals`, `int a_size`
- **Methods**: Constructor, Destructor, `AddAnimal()`, `RemoveAnimal()`, `SearchbyName()`, `SearchbyAge()`, `SearchbySpecies()`, `DisplayAnimals()`, `DisplayTotal()`

The `Jungle` class manages the collection of animals. It provides methods to add and remove animals, search for animals by various criteria, display all animals, and display the total number of animals in the jungle.

#### Main Program
The main program provides a user interface to interact with the Jungle & Animal Management System. It includes a menu-driven interface that allows users to select options for adding, removing, searching, and displaying animals.

### File Structure

- **`animal.h`**: Header file for the `animal` class.
- **`animal.cpp`**: Implementation file for the `animal` class.
- **`jungle.h`**: Header file for the `Jungle` class.
- **`jungle.cpp`**: Implementation file for the `Jungle` class.
- **`main.cpp`**: Main program file that includes the user interface and interactions.

### How to Run

1. **Compile**: Use a C++ compiler to compile the files. For example:
   ```sh
   g++ -o JungleManagement main.cpp jungle.cpp animal.cpp
   ```
2. **Run**: Execute the compiled program:
   ```sh
   ./JungleManagement
   ```

### Future Enhancements

- **Sort Animals**: Implement sorting functionality to sort animals by different criteria such as name, species, or age.
- **Advanced Search**: Improve search functionality to support partial matches and more complex queries.
- **Graphical Interface**: Develop a graphical user interface (GUI) for better user experience.

This project demonstrates object-oriented programming principles in C++ and provides a practical application for managing a collection of objects with various attributes and methods.
