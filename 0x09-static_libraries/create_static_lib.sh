create_static_lib.sh
#!/bin/bash
gcc -c ./*.c
ar -rc liball.a ./*.o
