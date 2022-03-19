import os, sys

objects = []

def compile_files_cpp():
    cpp_files = []
    for root, dirs, files in os.walk("./src/"):
        for file in files:
            cpp_files.append(os.path.join(root,file))

    for cpp_file in cpp_files:
        print("g++ -I./include/ -lcurl  -lGL -lGLU -lglut -Wall -Werror -Wno-long-long -O3 -ansi -pedantic -c "+ cpp_file + " -o " + cpp_file.replace('.cpp', '.o'))
        os.system("g++ -I./include/ -lcurl  -lGL -lGLU -lglut -Wall -Werror -Wno-long-long -O3 -ansi -pedantic -c "+ cpp_file +" -o " + cpp_file.replace('.cpp', '.o')) 
        objects.append(cpp_file.replace('.cpp', '.o'))

def link():
    link_cmd = "g++ "
    for obj in objects:
        link_cmd += obj + " "
    link_cmd += "-o ./builds/app -lcurl  -lGL -lGLU -lglut"
    print(link_cmd)
    os.system(link_cmd)

def delete_o():
    for obj in objects:
        os.system("rm "+obj)

def execute():
    choice = input("Do you want to execute app now? (y/n): ")
    if choice.lower() == "y" or choice.lower() == "yes":
        print("Executing ./builds/app now....")
        os.system("clear")
        os.system("./builds/app")
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