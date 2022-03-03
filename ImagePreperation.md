These are the commands ran from a fresh Ubuntu 20.04 image.

Install dependencies provided by `apt`

    sudo apt update
    sudo apt upgrade
    sudo apt install bison build-essential cmake curl flex gawk git libboost-dev libgmp-dev libmpfr-dev python3-pip scons sollya libsollya-dev

Install `opam` and set compiler version

    sudo bash -c "sh <(curl -fsSL https://raw.githubusercontent.com/ocaml/opam/master/shell/install.sh)"
    opam init
    opam switch create 4.11.0
    eval $(opam env --switch=4.11.0)
    echo "eval \$(opam env --switch=4.11.0)" >> ~/.bashrc
    opam install num

Install python packages used

    sudo pip3 install matplotlib sly z3-solver bigfloat

Let OpTuner install it's requirements

    make requirements

Download and build the math libraries used, as well as metalibm.

    cd implementations/timing
    make
