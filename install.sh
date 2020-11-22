# Script to install all dependencies, then build & install dwmblocks & dwm
CWD=`pwd`

# Install dependencies
if command -v yay &> /dev/null
then
  # I personally dont use yay, sorry if this is incorrect.
  yay -S nerd-fonts-fantasque-sans-mono 
  yay -S ttf-fira-go
elif command -v yaourt &> /dev/null
then
  yaourt -S nerd-fonts-fantasque-sans-mono
  yaourt -S ttf-fira-go
else
  echo "Please install either 'yay' or 'yaourt' then rerun the command"
  exit
fi

# Build & install DWM Blocks
cd dwmblocks
sudo make clean install

# Build & install DWM
cd $CWD
sudo make clean install

# Copy over the dot files
cp ./.dwm/ ~/.config/dwm -r 

