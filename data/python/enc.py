import compileall, os
print(" ☢ Move python files to cybost/data/python/MoveFilesToHere ")
os.system("sleep 2")
x = input(" ☢ Do you moved the files to cybost/data/python/MoveFilesToHere ? [type y if yes and if you didn't moved the files move them now and then type y\n")

compileall.compile_dir('MoveFilesToHere')
print(" ☢ Now you can run the file by typing python filename.pyc[the source code is encrypted]")
