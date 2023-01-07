#include "include/libft.h"
#include "string.h"
#include "stdio.h"

// size_t	ft_size_invert_itr(int size)
// {
// 	size_t	tile;

// 	tile = 1;
// 	while (size > PIXEL)
// 	{
// 		size -= PIXEL;
// 		tile++;
// 	}
// 	return (tile);
// }

// size_t	ft_size_centered_itr(int size)
// {
// 	size_t	tile;

// 	tile = 1;
// 	while (size > PIXEL)
// 	{
// 		size -= (PIXEL * 2);
// 		tile += 2;
// 	}
// 	return (tile);
// }

// size_t	ft_size_invert(int size)
// {
// 	if (size > PIXEL)
// 		return (1 + ft_size_invert(size - PIXEL));
// 	return (1);
// }

// size_t	ft_size_centered(int size)
// {
// 	if (size > PIXEL)
// 		return (2 + ft_size_centered(size - (PIXEL * 2)));
// 	return (1);
// }

// size_t	ft_size_invert_math(size_t size)
// {
// 	size_t	tile;

// 	tile = size / PIXEL;
// 	if (size % PIXEL)
// 		tile++;
// 	return (tile);
// }

// size_t	ft_size_centered_math(size_t size)
// {
// 	size_t	tile;

// 	tile = (size / (PIXEL * 2)) * 2;
// 	if (size % (PIXEL * 2) > PIXEL)
// 		tile += 2;
// 	return (1 + tile);
// }

//Mathematics
// int	main(void)
// {
// 	long int	nbr;
// 	{
// 		// ft_printf("\nnbr: (%d)\n", nbr = 2147483648);
// 		// ft_printf("itr : %d\n", ft_size_centered_itr(nbr));
// 		// // ft_printf("rec : %d\n", ft_size_centered(nbr));
// 		// ft_printf("math: %d\n", ft_size_centered_math(nbr));
// 		// ft_printf("\nnbr: (%d)\n", nbr = 110592);
// 		// ft_printf("itr : %d\n", ft_size_centered_itr(nbr));
// 		// // ft_printf("rec : %d\n", ft_size_centered(nbr));
// 		// ft_printf("math: %d\n", ft_size_centered_math(nbr));
// 	}
// 	{	
// 		ft_printf("\nnbr: (%d)\n", nbr = 1000000);
// 		ft_printf("itr: %d\n", ft_size_invert(nbr));
// 		ft_printf("math: %d\n", ft_size_invert_math(nbr));
// 		ft_printf("\nnbr: (%d)\n", nbr = 48);
// 		ft_printf("itr: %d\n", ft_size_invert(nbr));
// 		ft_printf("math: %d\n", ft_size_invert_math(nbr));
// 		ft_printf("\nnbr: (%d)\n", nbr = 49);
// 		ft_printf("itr: %d\n", ft_size_invert(nbr));
// 		ft_printf("math: %d\n", ft_size_invert_math(nbr));
// 		ft_printf("\nnbr: (%d)\n", nbr = 96);
// 		ft_printf("itr: %d\n", ft_size_invert(nbr));
// 		ft_printf("math: %d\n", ft_size_invert_math(nbr));
// 		ft_printf("\nnbr: (%d)\n", nbr = 97);
// 		ft_printf("itr: %d\n", ft_size_invert(nbr));
// 		ft_printf("math: %d\n", ft_size_invert_math(nbr));
// 		ft_printf("\nnbr: (%d)\n", nbr = 144);
// 		ft_printf("itr: %d\n", ft_size_invert(nbr));
// 		ft_printf("math: %d\n", ft_size_invert_math(nbr));
// 		ft_printf("\nnbr: (%d)\n", nbr = 145);
// 		ft_printf("itr: %d\n", ft_size_invert(nbr));
// 		ft_printf("math: %d\n", ft_size_invert_math(nbr));
// 	}
// }

void	ft_mapiproto(char *str)
{
	char	*mapi;

	mapi = ft_strmapi(str, ft_mapi_capitalize);
	ft_putendl_fd(mapi, 1);
	free(mapi);
}

void	tellme_eng(void)
{
	ft_mapiproto("Not to forget the intangible feelings\n\
I deleted the routine layout\n\
Grasp the phrase I happened to be humming\n\
Spread secret words of the heart into the sky\n\
\
I want to tell you\n\
I want to give you\n\
Nodes of feelings form a link\n\
Echoing to the faraway distance\n\
Words I want to tell you\n\
Sounds I want to give you\n\
Links of feelings form a world\n\
Connecting everything Connecting to everywhere\n\
\
The pure white light feels like you\n\
The voice flows through my hand held against the light\n\
On the rhythm my fingertips suddenly make\n\
Spread all words of the heart into the sky\n\
\
I want to tell you\n\
I want to give you\n\
Nodes of feelings form a link\n\
Reaching over the faraway distance\n\
Words I want to tell you\n\
Sounds I want to give you\n\
Links of feelings form a world\n\
Connecting everything Connecting to everywhere\n\
\
I had been playing the tune without a doubt about the rhythm of my days\n\
I had thought the coming of mornings is a given\n\
The sounds I believe in even for a second, shift my sceneries\n\
Tell your world\n\
\
You want to tell\n\
You want to give\n\
Nodes of feelings form a link\n\
Echoing to the faraway distance\n\
Words you want to tell\n\
Sounds you want to give\n\
Links of feelings form a world\n\
Connecting everything Connecting to everywhere\n");
}

void	tellme_romaji(void)
{
	ft_mapiproto("katachi no nai kimochi wasurenai you ni\n\
kimarikitta reiauto o keshita\n\
futo kuchizusanda fureezu o tsukamaete\n\
mune ni himeta kotoba nose sora ni tokihanatsu no\n\
\
kimi ni tsutaetai koto ga\n\
kimi ni todoketai koto ga\n\
takusan no ten wa sen ni natte\n\
tooku kanata e to hibiku\n\
kimi ni tsutaetai kotoba\n\
kimi ni todoketai oto ga\n\
ikutsu mono sen wa en ni natte\n\
subete tsunageteku doko ni datte\n\
\
masshiro ni sunda hikari wa kimi no you\n\
kazashita te no sukima o tsutau koe ga\n\
futo ugoita yubisaki kizamu rizumu ni\n\
arittake no kotoba nose sora ni tokihanatsu no\n\
\
kimi ni tsutaetai koto ga\n\
kimi ni todoketai koto ga\n\
takusan no ten wa sen ni natte\n\
tooku kanata made ugatsu\n\
kimi ni tsutaetai kotoba\n\
kimi ni todoketai oto ga\n\
ikutsu mono sen wa en ni natte\n\
subete tsunageteku doko ni datte\n\
\
kanadete ita kawaranai hibi o utagawazu ni\n\
asa wa dareka ga kureru mono da to omotteta\n\
isshun demo shinjita oto keshiki o yurasu no\n\
oshiete yo kimi dake no sekai\n\
\
kimi ga tsutaetai koto wa\n\
kimi ga todoketai koto wa\n\
takusan no ten wa sen ni natte\n\
tooku kanata e to hibiku\n\
kimi ga tsutaetai kotoba\n\
kimi ga todoketai oto wa\n\
ikutsu mono sen wa en ni natte\n\
subete tsunageteku doko ni datte\n");
}

void	tellme_both(void)
{
	ft_mapiproto("katachi no nai kimochi wasurenai you ni\n\
	Not to forget the intangible feelings\n\
kimarikitta reiauto o keshita\n\
	I deleted the routine layout\n\
futo kuchizusanda fureezu o tsukamaete\n\
	Grasp the phrase I happened to be humming\n\
mune ni himeta kotoba nose sora ni tokihanatsu no\n\
	Spread secret words of the heart into the sky\n\
\
kimi ni tsutaetai koto ga\n\
	I want to tell you\n\
kimi ni todoketai koto ga\n\
	I want to give you\n\
takusan no ten wa sen ni natte\n\
	Nodes of feelings form a link\n\
tooku kanata e to hibiku\n\
	Echoing to the faraway distance\n\
kimi ni tsutaetai kotoba\n\
	Words I want to tell you\n\
kimi ni todoketai oto ga\n\
	Sounds I want to give you\n\
ikutsu mono sen wa en ni natte\n\
	Links of feelings form a world\n\
subete tsunageteku doko ni datte\n\
	Connecting everything Connecting to everywhere\n\
\
masshiro ni sunda hikari wa kimi no you\n\
	The pure white light feels like you\n\
kazashita te no sukima o tsutau koe ga\n\
	The voice flows through my hand held against the light\n\
futo ugoita yubisaki kizamu rizumu ni\n\
	On the rhythm my fingertips suddenly make\n\
arittake no kotoba nose sora ni tokihanatsu no\n\
	Spread all words of the heart into the sky\n\
\
kimi ni tsutaetai koto ga\n\
	I want to tell you\n\
kimi ni todoketai koto ga\n\
	I want to give you\n\
takusan no ten wa sen ni natte\n\
	Nodes of feelings form a link\n\
tooku kanata made ugatsu\n\
	Reaching over the faraway distance\n\
kimi ni tsutaetai kotoba\n\
	Words I want to tell you\n\
kimi ni todoketai oto ga\n\
	Sounds I want to give you\n\
ikutsu mono sen wa en ni natte\n\
	Links of feelings form a world\n\
subete tsunageteku doko ni datte\n\
	Connecting everything Connecting to everywhere\n\
\
kanadete ita kawaranai hibi o utagawazu ni\n\
	I had been playing the tune without a doubt about the rhythm of my days\n\
asa wa dareka ga kureru mono da to omotteta\n\
	I had thought the coming of mornings is a given\n\
isshun demo shinjita oto keshiki o yurasu no\n\
	The sounds I believe in even for a second, shift my sceneries\n\
oshiete yo kimi dake no sekai\n\
	Tell your world\n\
\
kimi ga tsutaetai koto wa\n\
	You want to tell\n\
kimi ga todoketai koto wa\n\
	You want to give\n\
takusan no ten wa sen ni natte\n\
	Nodes of feelings form a link\n\
tooku kanata e to hibiku\n\
	Echoing to the faraway distance\n\
kimi ga tsutaetai kotoba\n\
	Words you want to tell\n\
kimi ga todoketai oto wa\n\
	Sounds you want to give\n\
ikutsu mono sen wa en ni natte\n\
	Links of feelings form a world\n\
subete tsunageteku doko ni datte\n");
}

	// ft_mapiproto("hatsune miku is 8very cuteo very very 31cute ");
	// ft_mapiproto("1miku");
	// ft_mapiproto("hatsune mIKu's BirtHday is 2007AUGUST 31, same as our country's indePENDEnce day.");
// int	main(void)
// {
// 	unsigned int	colour;
// 	size_t			i;

// 	colour = VALUE_T;
// 	for (i = 0; i <= 256; i++)
// 	{
// 		colour = VALUE_T * i;
// 		// ft_memprint(&colour, 4);
// 		ft_printf("\n");
// 		ft_printf("%u\n", colour);
// 		ft_printf("diff: %u\n", colour - (VALUE_T * (i - 1)));
// 	}
// }
size_t	ft_chrcount(const char *str, char c)
{
	size_t	chr;

	chr = 0;
	if (!str)
		return (0);
	else if (!c)
		return (1);
	while (*str)
		if (*str++ == c)
			chr++;
	return (chr);
}

//memset sucks
// int	main(void)
// {
// 	unsigned int	*ptr;
// 	unsigned int	nbr;
// 	size_t			len;

// 	len = sizeof(int) * 10;
// 	ptr = malloc(len);
// 	nbr = 0x000ff + VALUE_T * 100;
// 	ft_printf("nbr: %u\n", nbr);
// 	memset(ptr, nbr, len);
// 	ft_memprint(ptr, len);
// 	ft_printf("%u\n", *ptr);
// 	ft_memset(ptr, nbr, len);
// 	ft_printf("ft_memprint\n");
// 	ft_memprint(ptr, len);
// 	ft_printf("%u\n", *ptr);
// }

void	ft_iter(char c, int (ft)(int c))
{
	if (ft == ft_toupper)
		printf("ft_upper  : %p\n", ft_toupper);
	if (ft == ft_tolower)
		printf("ft_lower  : %p\n", ft_tolower);
	ft(c);
}

//Function address
// int	main(void)
// {
// 	ft_iter('a', ft_toupper);
// 	ft_iter('b', ft_tolower);
// 	printf("main_upper: %p\n", ft_toupper);
// 	printf("main_lower: %p\n", ft_tolower);
// }

char	*ft_strinsert(const char *first, const char *insert, const char *last)
{
	char	*str;
	size_t	len;

	if ((!first || !insert || !last) || first >= last)
		return (0);
	len = ft_strlen(first) + ft_strlen(insert) + 1;
	str = malloc(len);
	if (!str)
		return (0);
	ft_strlcpy(str, first, last - first + 1);
	ft_strlcat(str, insert, len);
	ft_strlcat(str, last, len);
	return (str);
}

//Insert
// int	main(void)
// {
// 	char	*str;

// 	str = "HatsuneMiku";
// 	str = ft_strinsert(str, " ", ft_strstr(str, "Miku"));
// 	ft_printf("str: (%s)\n", str);
// }

//Star flag
// int	main(void)
// {
// 	ft_printf("ft_printf:	(%.*d)\n", 7, 831);
// 	printf("printf:		(%.*d)\n", 7, 831);
// 	ft_printf("ft_printf:	(%.*d)\n", -7, 831);
// 	printf("printf:		(%.*d)\n", -7, 831);
// 	ft_printf("ft_printf:	(%*d)\n", -7, 831);
// 	printf("printf:		(%*d)\n", -7, 831);
// 	ft_printf("ft_printf:	(%*d)\n", 7, 831);
// 	printf("printf:		(%*d)\n", 7, 831);
// 	ft_printf("ft_printf:	(%.*s)\n", 7, "Hatsune Miku");
// 	printf("printf:		(%.*s)\n", 7, "Hatsune Miku");
// 	ft_printf("ft_printf:	(%.*s)\n", -7, "Hatsune Miku");
// 	printf("printf:		(%.*s)\n", -7, "Hatsune Miku");
// 	// printf("(%.*d)\n", 7, 831);
// 	// printf("(%.*-7d)\n", -7, 831);
// 	// printf("(%*d)\n", -7, 831);
// 	// printf("(%.*.4d)\n", -7, -831);
// // 	printf("(%*d)\n", 7, 831);
// // 	printf("(%-*d)\n", 7, 831);
// // 	printf("(%*--d)\n", -7, 831);
// }

void	ft_memprint(void *ptr, size_t bytes, int bytes_per_len)
{
	unsigned char	*ucptr;
	size_t			i;

	if (bytes_per_len <= 0)
		return ;
	ucptr = ptr;
	while (bytes)
	{
		ft_printf("bytes:");
		i = bytes_per_len;
		while (bytes && i--)
		{
			ft_printf(" [%3d]", *ucptr++);
			bytes--;
		}
		ft_printf("\n");
	}
}

//Other language character
// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	// str = "初音未來, 人類的未來";
// 	str = "初音ミク";
// 	ft_printf("%s\n", str);
// 	ft_printf("len: %d\n", ft_strlen(str));
// 	ft_memprint(str, ft_strlen(str), 3);
// 	str = "ミク";
// 	ft_printf("%s\n", str);
// 	ft_printf("len: %d\n", ft_strlen(str));
// 	ft_memprint(str, ft_strlen(str), 3);
// 	ft_printf("ARGV\n");
// 	while (*++argv)
// 	{
// 		ft_printf("%s\n", *argv);
// 		ft_printf("len: %d\n", ft_strlen(*argv));
// 		ft_memprint(*argv, ft_strlen(*argv), 3);
// 	}
// }

//float
// int	main(void)
// {
// 	printf("1.1:%%f:		%f\n", 1.1);
// 	printf("1.1:%%.f:	%.f\n", 1.1);
// 	printf("1.4:%%.f:	%.f\n", 1.4);
// 	printf("1.5:%%.f:	%.f\n", 1.5);
// 	printf("1.55:%%.f:	%.f\n", 1.55);
// 	printf("1.45:%%.f:	%.f\n", 1.45);
// 	printf("1.5555555:%%.f:	%.f\n", 1.5555555);
// 	printf("1.13456789:%%.f:	%.f\n", 1.13456789);
// 	printf("1.1: %%.6f	%.6f\n", 1.1);
// 	printf("1.1: %%.99f	%.99f\n", 1.1);
// 	float	i;

// 	i = 1;
// 	printf("%.f\n", i);
// 	// printf("%.10f\n", i += .123456789);
// 	// printf("%.10f\n", i + .123456789);
// 	ft_printf("i as d: %d\n", i);
// 	ft_memprint(&i, 4, 4);
// 	// while (i += .1)
// 	// {
// 	// 	printf("%.10f\n", i);
// 	// 	ft_printf("i as d: %d\n", i);
// 	// 	ft_memprint(&i, 4, 4);
// 	// }
// }

void	ft_strlistiter(char **strlist, t_ftstr ft_str, const char *mod)
{
	strlist--;
	while (*++strlist)
		*strlist = ft_strmodify(*strlist, mod, ft_str);
}

// void	asd(void)
// {
// 	char	*ptr;

// 	ptr = malloc(2);
// 	ft_printf("%p\n", ptr);
// 	*ptr = 'M';
// 	free(ptr);
// 	ptr[1] = 'A';
// 	ptr = malloc(1);
// 	*ptr = 'Q';
// 	ft_printf("asd: %s\n", ptr);
// 	// free(ptr);
// }

//interaction with freed memory
// int	main(int argc, char **argv)
// {
// 	char	**split;
// 	size_t	y;

// 	if (argc != 2)
// 		return (!ft_printf("Need one, and only one argument\n"));
// 	split = ft_split(argv[1], '|');
// 	ft_strlistiter(split, ft_strtrim, " ");
// 	y = 0;
// 	while (split[y])
// 	{
// 		ft_printf("%s\n", split[y]);
// 		ft_printf("%p\n", split[y]);
// 		y++;
// 	}
// 	asd();
// 	y = 0;
// 	while (split[y])
// 	{
// 		ft_printf("%s\n", split[y]);
// 		ft_printf("%p\n", split[y]);
// 		y++;
// 	}
// 	system("leaks -q test");
// }

int	main(void)
{
	// int	nbr;
	// char	*str;

	// nbr = 256 * 256 * 65;
	// ft_printf("memchr: %s\n", memchr(&nbr, 65, 4));
	// ft_printf("ft_memchr: %s\n", ft_memchr(&nbr, 65, 4));
	// for (unsigned char c = 0; c < 255; c++)
	// {
	// 	str = ft_utoa_base(c, "01");
	// 	ft_printf("c: %3d; str: %08s\n", c, str);
	// 	free(str);
	// }
	// str = ft_utoa_base(255, "01");
	// ft_printf("c: %3d; str: %08s\n", 255, str);
	// free(str);
	for (unsigned short int uu = 0; uu < (unsigned short int)-1; uu++)
	{
		ft_printf("nbr: %d\n", uu);
		ft_memprint(&uu, sizeof(uu), sizeof(uu));
	}
}
