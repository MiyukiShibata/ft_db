#include "ft_db.h"

char *search_datatables(char *db_name)
{
	int		fd;
	int		match;
	char	*line;

	match = 0;

	fd = open("/nfs/2016/e/ebucheit/Desktop/ft_db/database/database.txt", O_RDONLY);

	while (get_next_line(fd, &line) == 1)
	{
		if (ft_strcmp(line, db_name) == 0)
		{
			ft_putstr("MATCH\n");
			match = 1;
			break ;
		}
	}
	if (match == 0)
		line = "NO MATCH";
	return (line);
}




// int main(void)
// {

// 	char *database_directory;
// 	char *table_directory;



// 	char *directory_match;

// 	database_directory = (char*)malloc(sizeof(char*) * 
// 		ft_strlen("/nfs/2016/e/ebucheit/Desktop/ft_db/database/database.txt"));
// 	database_directory = "/nfs/2016/e/ebucheit/Desktop/ft_db/database/database.txt";

// 	char *table_directory = (char*)malloc(sizeof(char*) * 
// 		ft_strlen("/nfs/2016/e/ebucheit/Desktop/ft_db/database/tables"));

	

	
// 	directory_match = search_datatables("NEW_DB");

// 	printf("%s\n", directory_match);


// 	return 0;
// }




