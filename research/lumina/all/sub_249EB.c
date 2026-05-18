__int64 __fastcall sub_249EB(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v7; // r13d
  int v8; // r9d
  __int64 result; // rax

  *(_BYTE *)(a1 + 28) = 1;
  v7 = a5;
  sub_15B750(
    a1,
    (unsigned int)"SELECT 1 FROM \"%w\".sqlite_master WHERE name NOT LIKE 'sqliteX_%%' ESCAPE 'X' AND sql NOT LIKE 'creat"
                  "e virtual%%' AND sqlite_rename_test(%Q, sql, type, name, %d, %Q, %d)=NULL ",
    a2,
    a2,
    a3,
    a4);
  result = a5;
  if ( !a3 )
    return sub_15B750(
             a1,
             (unsigned int)"SELECT 1 FROM temp.sqlite_master WHERE name NOT LIKE 'sqliteX_%%' ESCAPE 'X' AND sql NOT LIKE"
                           " 'create virtual%%' AND sqlite_rename_test(%Q, sql, type, name, 1, %Q, %d)=NULL ",
             a2,
             a4,
             v7,
             v8);
  return result;
}
