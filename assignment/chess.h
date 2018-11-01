/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:			P. Bauer
 * Due Date:		October 15, 2014
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */

enum Colour {White, Black};
enum PieceType{
  Pawn, Knight, Rook, Bishop, Queen, King, NoPiece
};
struct ChessPiece{
  enum Colour colour;
  enum PieceType piece;
};

struct ChessSquare{
  bool is_occupied;
  struct ChessPiece piece;
};


typedef ChessSquare ChessBoard[8][8];


bool is_piece(struct ChessPiece board ,enum Colour color, enum PieceType);

void init_chess_board(ChessBoard chess_board);

ChessSquare* get_square(ChessBoard chess_board, int file, int rank);

bool is_square_occupied(ChessBoard chess_board, int file, int rank);

bool add_piece(ChessBoard chess_board, char a, int one, struct ChessPiece black_rook);

ChessPiece get_piece(ChessBoard chess_board,char a, int one);
