typedef enum {
  PAWN,
  KNIGHT,
  BISHOP,
  ROOK,
  QUEEN,
  KING,
  EMPTY
} Piece;

typedef enum {
  WHITE,
  BLACK
} Color;

typedef struct {
  Piece p;
  Color c;
} Square;

Square board[8][8] = {
  {{.p=ROOK, .c=WHITE},{.p=KNIGHT, .c=WHITE},{.p=BISHOP, .c=WHITE},{.p=QUEEN, .c=WHITE},{.p=KING, .c=WHITE},{.p=BISHOP, .c=WHITE},{.p=KNIGHT, .c=WHITE},{.p=ROOK, .c=WHITE}},
  {{.p=PAWN, .c=WHITE},{.p=PAWN, .c=WHITE},{.p=PAWN, .c=WHITE},{.p=PAWN, .c=WHITE},{.p=PAWN, .c=WHITE},{.p=PAWN, .c=WHITE},{.p=PAWN, .c=WHITE},{.p=PAWN, .c=WHITE}},
  {{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},},
  {{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},},
  {{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},},
  {{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},{.p=EMPTY, .c=BLACK},},
  {{.p=PAWN, .c=BLACK},{.p=PAWN, .c=BLACK},{.p=PAWN, .c=BLACK},{.p=PAWN, .c=BLACK},{.p=PAWN, .c=BLACK},{.p=PAWN, .c=BLACK},{.p=PAWN, .c=BLACK},{.p=PAWN, .c=BLACK}},
  {{.p=ROOK, .c=BLACK},{.p=KNIGHT, .c=BLACK},{.p=BISHOP, .c=BLACK},{.p=QUEEN, .c=BLACK},{.p=KING, .c=BLACK},{.p=BISHOP, .c=BLACK},{.p=KNIGHT, .c=BLACK},{.p=ROOK, .c=BLACK}},
};


