program p1;
var pl, r, thirdPart: real;
function Square(r: real):real;
begin
  pl := pi * sqr(r);
  Square := pl;
end;
begin
  Write('Введите радиус круга: ');
  ReadLn(r);
  thirdPart := Square(r) / 3;
  pl := pl - thirdPart;
  WriteLn('Две трети площади круга примерно равны: ', Round(pl));
  Write('Если быть точнее, примерно: ' , pl);
end.
