#include <iostream>
#include <vector>

void linear_search(const std::vector<int>& arr, int element) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == element) {
            std::cout << "Element " << element << " found at index " << i << ".\n";
            return; // Exit the function after finding the element
        }
    }
    std::cout << "Element " << element << " not found.\n";
}

void insert_element(std::vector<int>& arr, int index, int element) {
    arr.insert(arr.begin() + index, element);
}

void delete_element(std::vector<int>& arr, int index) {
    arr.erase(arr.begin() + index);
}

void reverse_array(std::vector<int>& arr) {
    std::reverse(arr.begin(), arr.end());
}

void update_array(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            arr[i] += 5;
        } else {
            arr[i] *= 2;
        }
    }
}

void print_array(const std::vector<int>& arr) {
    std::cout << "Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    int choice, n, index, element;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Linear Search\n";
        std::cout << "2. Insert Element\n";
        std::cout << "3. Delete Element\n";
        std::cout << "4. Reverse Array\n";
        std::cout << "5. Update Array\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter the element to search: ";
                std::cin >> element;
                linear_search(arr, element);
                break;
            case 2:
                std::cout << "Enter the index of array to insert element: ";
                std::cin >> index;
                std::cout << "Enter the element to be inserted: ";
                std::cin >> element;
                insert_element(arr, index, element);
                std::cout << "\nAfter insertion array: ";
                print_array(arr);
                break;
            case 3:
                std::cout << "Enter the index of element to be deleted: ";
                std::cin >> index;
                delete_element(arr, index);
                std::cout << "\nAfter deletion: ";
                print_array(arr);
                break;
            case 4:
                reverse_array(arr);
                print_array(arr);
                break;
            case 5:
                update_array(arr);
                print_array(arr);
                break;
            case 6:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Please enter a number between 1 and 6.\n";
        }
    } while (choice != 6);
    return 0;
}

