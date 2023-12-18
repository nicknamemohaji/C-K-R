/*
Q. Write the following function, which evaluates a chess position:
	int evaluate_position(char board[8][8]);

(...)
*/

int evaluate_position(char board[8][8])
{
	int black_sum = 0, white_sum = 0;

	// 체스판의 각 위치를 순회하며 값을 확인한다
	for (int x=0; x<8; x++)
	{
		for (int y=0; y<8; y++)
		{
			switch (board[x][y])
			{
				case 'Q':
					white_sum += 9;
					break ;
				case 'R':
					white_sum += 5;
					break ;
				case 'B':	// fallthrough
				case 'N':
					white_sum += 3;
					break ;
				case 'P':
					white_sum += 1;
					break ;

				case 'q':
					black_sum += 9;
					break ;
				case 'r':
					black_sum += 5;
					break ;
				case 'b':	// fallthrough
				case 'n':
					black_sum += 3;
					break ;
				case 'p':
					black_sum += 1;
					break ;

				default:
					break ;
			}
		}
	}
	return white_sum - black_sum;
}