import os, sys

objects = []

def compile_files_cpp():
    cpp_files = []
    for root, dirs, files in os.walk(".\\src\\"):
        for file in files:
            cpp_files.append(os.path.join(root,file))

    for cpp_file in cpp_files:
        print(
            f"g++ -I.\\include\\ -lcurl -Wall -Werror -Wno-long-long -O3 -ansi -pedantic -g -c "
            + cpp_file +
            " -o " 
            + 
            cpp_file
            .replace('.cpp', '.o')
        )
        os.system(
            f"g++ -I.\\include\\ -lcurl -Wall -Werror -Wno-long-long -O3 -ansi -pedantic -g -c "
            + cpp_file +
            " -o " 
            + 
            cpp_file
            .replace('.cpp', '.o')
        ) 
        objects.append(cpp_file.replace('.cpp', '.o'))

def link():
    link_cmd = "g++ -lcurl "
    for obj in objects:
        link_cmd += obj.replace('\\\\', '\\') + " "
    link_cmd += "-o .\\builds\\app.exe"
    print(link_cmd)
    os.system(link_cmd)

def delete_o():
    for obj in objects:
        os.system("rm "+obj.replace("\\\\", "\\"))

def execute():
    choice = input("Do you want to execute app now? (y/n): ")
    if choice.lower() == "y" or choice.lower() == "yes":
        print("Executing .\\builds\\app.exe now....")
        os.system("cls")
        os.system(".\\builds\\app.exe")
    elif choice.lower() == "n" or choice.lower() == "no":
        print("OK, so we exit now....")
        print("Exit with 0 code")
        sys.exit(0)
    else:
        print("Unknown choice... Expected 'y' or 'n', so we exit now....")
        print("Exit with 0 code")
        sys.exit(0)

def main():
    compile_files_cpp()
    link()
    delete_o()
    execute()

if __name__ == "__main__":
    main()