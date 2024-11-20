#define NORMAL "\x1b[30m"
#define RED1 "\x1b[38;5;88m"//RED
#define RED2 "\x1b[38;5;124m"
#define RED3 "\x1b[38;5;160m"
#define RED4 "\x1b[38;5;196m"
#define BLUE1 "\x1b[38;5;20m"//BLUE
#define BLUE2 "\x1b[38;5;27m"
#define BLUE3 "\x1b[38;5;12m"//fix blue palette pls
#define BLUE4 "\x1b[38;5;26m"
#define BLUE5 "\x1b[38;5;32m"
#define BLUE6 "\x1b[38;5;39m"
#define BLUE7 "\x1b[38;5;45m"
#define BLUE8 "\x1b[38;5;21m"
#define BLUE9 "\x1b[38;5;33m"
#define BLUE10 "\x1b[38;5;4m"
#define BLUE11 "\x1b[38;5;25m"
#define BLUE12 "\x1b[38;5;67m"
#define BLUE13 "\x1b[38;5;111m"
#define ORANGE1 "\x1b[38;5;166m"//ORANGE
#define ORANGE2 "\x1b[38;5;202m"
#define ORANGE3 "\x1b[38;5;208m"
#define ORANGE4 "\x1b[38;5;215m"
#define BROWN1 "\x1b[38;5;94m" //BROWN
#define BROWN2 "\x1b[38;5;130m"
#define BROWN3 "\x1b[38;5;136m"
#define BROWN4 "\x1b[38;5;137m"
#define BROWN5 "\x1b[38;5;180m"
#define PURPLE1 "\x1b[38;5;19m" //PURPLE
#define PURPLE2 "\x1b[38;5;55m"
#define PURPLE3 "\x1b[38;5;57m"
#define PURPLE4 "\x1b[38;5;93m"
#define PURPLE5 "\x1b[38;5;105m"
#define PURPLE6 "\x1b[38;5;140m"
#define PURPLE7 "\x1b[38;5;147m"
#define PURPLE8 "\x1b[38;5;183m"
#define MAGENTA1 "\x1b[38;5;54m" //MAGENTA
#define MAGENTA2 "\x1b[35m"
#define PINK1 "\x1b[38;5;125m" //PINK
#define PINK2 "\x1b[38;5;161m"
#define PINK3 "\x1b[38;5;204m"
#define PINK4 "\x1b[38;5;211m"
#define PINK5 "\x1b[38;5;212m"
#define PINK6 "\x1b[38;5;218m"
#define PINK7 "\x1b[38;5;167m"
#define PINK8 "\x1b[38;5;210m"
#define PINK9 "\x1b[38;5;217m"
#define PBLUE1 "\x1b[38;5;153m" //PASTEL
#define PBLUE2 "\x1b[38;5;117m"
#define PYELLOW1 "\x1b[38;5;222m"
#define PYELLOW2 "\x1b[38;5;229m"
#define PPINK1 "\x1b[38;5;224m"
#define PPURPLE1 "\x1b[38;5;189m"
#define PPURPLE2 "\x1b[38;5;225m"
#define PORANGE1 "\x1b[38;5;223m"
#define PORANGE2 "\x1b[38;5;216m"
#define PGREEN1 "\x1b[38;5;150m"
#define PGREEN2 "\x1b[38;5;187m"
#define PRED1 "\x1b[38;5;217m"
#define GREEN1 "\x1b[38;5;28m" //GREEN
#define GREEN2 "\x1b[38;5;2m"
#define GREEN3 "\x1b[38;5;10m"
#define GREEN4 "\x1b[38;5;78m"
#define FGREEN1 "\x1b[38;5;22m"
#define FGREEN2 "\x1b[38;5;64m"
#define FGREEN3 "\x1b[38;5;107m"
#define FGREEN4 "\x1b[38;5;151m"
#define YELLOW1 "\x1b[33m" //YELLOW
#define YELLOW2 "\x1b[38;5;178m"
#define YELLOW3 "\x1b[38;5;221m"
#define YELLOW4 "\x1b[38;5;11m"
#define TEAL1 "\x1b[38;5;23m" //TEAL
#define TEAL2 "\x1b[38;5;30m"
#define TEAL3 "\x1b[38;5;37m"
#define TEAL4 "\x1b[38;5;116m"
#define TRQ1 "\x1b[38;5;24m" //TURQOISE
#define TRQ2 "\x1b[38;5;31m"
#define TRQ3 "\x1b[38;5;74m"
#define TRQ4 "\x1b[38;5;153m"
#define BLACK1 "\x1b[38;5;0m" //GRAYSCALE
#define BLACK2 "\x1b[38;5;236m"
#define GRAY1 "\x1b[38;5;241m"
#define GRAY2 "\x1b[38;5;8m"
#define GRAY3 "\x1b[38;5;145m"
#define GRAY4 "\x1b[38;5;254m"
#define WHITE1 "\x1b[38;5;255m"

char *numtocolor[85] = { //array indexing is faster than switch statements
    RED1,RED2,RED3,RED4,ORANGE1,
    ORANGE2,ORANGE3,ORANGE4,
    YELLOW1,YELLOW2,YELLOW3,YELLOW4,
    GREEN1,GREEN2,GREEN3,GREEN4,
    FGREEN1,FGREEN2,FGREEN3,FGREEN4,
    TRQ1,TRQ2,TRQ3,TRQ4,
    TEAL1,TEAL2,TEAL3,TEAL4,
    BLUE1,BLUE2,BLUE3,BLUE4,BLUE5,BLUE6,BLUE7,BLUE8,BLUE9,BLUE10,BLUE11,BLUE12,BLUE13,
    MAGENTA1,MAGENTA2,
    PURPLE1,PURPLE2,PURPLE3,PURPLE4,PURPLE5,PURPLE6,PURPLE7,PURPLE8,
    PINK1,PINK2,PINK3,PINK4,PINK5,PINK6,PINK7,PINK8,PINK9,
    PRED1,
    PORANGE1,PORANGE2,
    PYELLOW1,PYELLOW2,
    PGREEN1,PGREEN2,
    PBLUE1,PBLUE2,
    PPURPLE1,PPURPLE2,
    PPINK1,
    BROWN1,BROWN2,BROWN3,BROWN4,BROWN5,
    BLACK1,BLACK2,
    GRAY1,GRAY2,GRAY3,GRAY4,
    WHITE1
};
