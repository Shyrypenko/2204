#include <iostream>
#include <limits>

void initializeMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Введите элемент [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

void initializeMatrix(double** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Введите элемент [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

void initializeMatrix(char** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Введите элемент [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void printMatrix(double** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void printMatrix(char** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void findDiagonalMinMax(int** matrix, int size, int& min, int& max) {
    min = std::numeric_limits<int>::max();
    max = std::numeric_limits<int>::min();
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
}

void findDiagonalMinMax(double** matrix, int size, double& min, double& max) {
    min = std::numeric_limits<double>::max();
    max = std::numeric_limits<double>::min();
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
}

void findDiagonalMinMax(char** matrix, int size, char& min, char& max) {
    min = std::numeric_limits<char>::max();
    max = std::numeric_limits<char>::min();
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
}

int main() {
    int size;

    std::cout << "Введите размер квадратной матрицы: ";
    std::cin >> size;

    int** intMatrix = new int* [size];
    for (int i = 0; i < size; i++) {
        intMatrix[i] = new int[size];
    }
    initializeMatrix(intMatrix, size);
    printMatrix(intMatrix, size);
    int intMin, intMax;
    findDiagonalMinMax(intMatrix, size, intMin, intMax);
    std::cout << "Минимум на диагонали (int): " << intMin << std::endl;
    std::cout << "Максимум на диагонали (int): " << intMax << std::endl;

    double** doubleMatrix = new double* [size];
    for (int i = 0; i < size; i++) {
        doubleMatrix[i] = new double[size];
    }
    initializeMatrix(doubleMatrix, size);
    printMatrix(doubleMatrix, size);
    double doubleMin, doubleMax;
    findDiagonalMinMax(doubleMatrix, size, doubleMin, doubleMax);
    std::cout << "Минимум на диагонали (double): " << doubleMin << std::endl;
    std::cout << "Максимум на диагонали (double): " << doubleMax << std::endl;

    char** charMatrix = new char* [size];
    for (int i = 0; i < size; i++) {
        charMatrix[i] = new char[size];
    }
    initializeMatrix(charMatrix, size);
    printMatrix(charMatrix, size);
    char charMin, charMax;
    findDiagonalMinMax(charMatrix, size, charMin, charMax);
    std::cout << "Минимум на диагонали (char): " << charMin << std::endl;
    std::cout << "Максимум на диагонали (char): " << charMax << std::endl;

    for (int i = 0; i < size; i++) {
        delete[] intMatrix[i];
        delete[] doubleMatrix[i];
        delete[] charMatrix[i];
    }
    delete[] intMatrix;
    delete[] doubleMatrix;
    delete[] charMatrix;

    return 0;
}
