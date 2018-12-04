Program Kalendar; 
var d, m, y, dn, i: integer;
month: String; 
begin 
i := 0;
  
writeln('Введите номер дня недели 1 января:'); 
 readln(y); 
   if (y >= 1) and (y <= 7) then begin
   if (y = 1) then writeln('1 января - понедельник'); 
   if (y = 2) then writeln('1 января - вторник'); 
   if (y = 3) then writeln('1 января - среда'); 
   if (y = 4) then writeln('1 января - четверг'); 
   if (y = 5) then writeln('1 января - пятница'); 
   if (y = 6) then writeln('1 января - суббота'); 
   if (y = 7) then writeln('1 января - воскресенье'); 
end else 
   writeln('День недели это число от 1 до 7');
  
  
writeln('Введите номер месяца: ');
 readln(m);
  if (m >= 1) and (m <= 12) then begin
    case (m) of 
      1 : begin dn := 0; month := 'января'; end;
      2 : begin dn := 30; month := 'февраля'; end;
      3 : begin dn := 58; month := 'марта'; end;
      4 : begin dn := 89; month := 'апреля'; end;
      5 : begin dn := 119; month := 'мая'; end;
      6 : begin dn := 150; month := 'июня'; end;
      7 : begin dn := 180; month := 'июля'; end;
      8 : begin dn := 211; month := 'августа'; end;
      9 : begin dn := 242; month := 'сентября'; end;
      10 : begin dn := 272; month := 'открября'; end;
      11 : begin dn := 303; month := 'ноября'; end;
      12 : begin dn := 333; month := 'декабря'; end; 
  
else writeln('Месяц это число от 1 до 12');
end;
end;
  
 writeln('Введите номер дня:');
  readln(d);
 writeln('Вы выбрали', ' ', d, ' ', month);
    if (d >= 1) and (d <= 31) then dn := dn + d
    else writeln('День это число от 1 до 31');
    
 while (dn > i) do i := i + 7;     

   i := (i - dn);

   i := 6 - i + (y - 1);
   i := i mod 7;
   write('Этот день - ');
	case (i) of
	0 : writeln('понедельник');
	1 : writeln('вторник');
	2 : writeln('среда');
	3 : writeln('четверг');
	4 : writeln('пятница');
	5 : writeln('суббота');
	6 : writeln('воскресенье');
	else writeln('Ошибка в программе');
	end;
end.
