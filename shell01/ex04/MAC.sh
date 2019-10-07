ifconfig | grep '^\tether' | sed 's/ether//' | tr -d ' $' | awk '{print $1}' 
