import serial

SERIAL_PORT = "COM3"  # Adjust for Linux: /dev/ttyUSB0 or Mac: /dev/tty.usbserial
BAUD_RATE = 115200

ser = serial.Serial(SERIAL_PORT, BAUD_RATE)

while True:
    if ser.in_waiting > 0:
        command = ser.readline().decode().strip()
        print(f"Received Gesture: {command}")

        if command == "LEFT":
            print("Executing LEFT action...")
        elif command == "RIGHT":
            print("Executing RIGHT action...")
        elif command == "UP":
            print("Executing UP action...")
        elif command == "DOWN":
            print("Executing DOWN action...")
