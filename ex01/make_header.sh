
#!/bin/bash

TARGET_DIRECTORY=$(pwd)
# Directory containing the header.el and other required files
DIRECTORY=~/.emacs.d

# Run Emacs in batch mode to set the load-path and load all the required files before executing header.el
for FILE in "$TARGET_DIRECTORY"/*.cpp "$TARGET_DIRECTORY"/*.hpp
do
	emacs --batch "$FILE" --eval "(progn
                        (setq default-directory \"$DIRECTORY\")
                        (add-to-list 'load-path \"$DIRECTORY\")
                        (load \"string\")
                        (load \"list\")
                        (load \"comments\")
                        (load \"header2\")
                        (header-insert)
                        (save-buffer)
                        (kill-emacs))"
done
