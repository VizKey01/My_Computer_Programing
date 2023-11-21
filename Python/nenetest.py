def add_vehicle():
    vehicle_id = input('Enter vehicle id: ')
    vehicle_types = {"1": "Sedan", "2": "Van", "3": "Truck"}
    while True:
        vehicle_type = input("Enter vehicle's type [1:Sedan, 2:Van, 3:Truck]: ")
        if vehicle_type in vehicle_types:
            break
        else:
            print("Invalid type. Please choose from 1:Sedan, 2:Van, 3:Truck.")

    with open("vehicles.txt", "a") as file:
        file.write(f'{vehicle_id},{vehicle_type}\n')
    print("Vehicle data has been added.")

def show_all_vehicles():
    vehicle_info = {}
    try:
        with open("vehicles.txt", "r") as file:
            for line in file:
                vehicle_id, vehicle_type = line.strip().split(",")
                if vehicle_type in vehicle_info:
                    vehicle_info[vehicle_type] += 1
                else:
                    vehicle_info[vehicle_type] = 1
        if not vehicle_info:
            print("Data is not found.")
        else:
            for vehicle_type, count in vehicle_info.items():
                vehicle_id, vehicle_type = line.strip().split(",")
                print(f'ID: {vehicle_id}, Type: {vehicle_type}')
                print(f'The number of {vehicle_type} is {count}')
    except FileNotFoundError:
        print("Data is not found.")

def show_vehicle_by_type():
    # vehicle_type = input('Enter type id [1:Sedan, 2:Van, 3:Truck]: ')
    found = False
    count = 0
    try:
        with open("vehicles.txt", "r") as file:
            vehicle_type = input("Enter type id [1:Sedan, 2:Van, 3:Truck]: ")
            for line in file:
                print(f'ID: {line}')
                if line == vehicle_type:
                    print(f'ID: {line}')
                    count += 1
                    
            if count == 0:
                print(f'This id not found.')
            else:
                print(f'The number of {vehicle_type} is: {count}')
    except FileNotFoundError:
        print("Data is not found.")
        
while True:
    print('==== Select Menu ====')
    print('1. Add vehicle data')
    print('2. Show all vehicle')
    print('3. Show vehicle by type')
    print('4. Exit')
    menu = input('Select menu number [1-4]: ')
    if menu == '1':
        add_vehicle()
    elif menu == '2':
        show_all_vehicles()
    elif menu == '3':
        show_vehicle_by_type()
    elif menu == '4':
        break
    else:
        print("Invalid menu choice. Please choose from 1 to 4.")
