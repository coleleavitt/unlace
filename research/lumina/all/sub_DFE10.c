__int64 __fastcall sub_DFE10(__int64 a1, __int64 a2, int a3, int a4, int a5, const void *a6)
{
  int v9; // ebp
  const char *v10; // rsi
  int v11; // edx
  int v12; // ebp
  __int64 result; // rax

  if ( a5 )
    sub_DFD90(a1, " AND ", 5);
  if ( a3 > 1 )
  {
    sub_DFD90(a1, "(", 1);
  }
  else if ( a3 != 1 )
  {
    goto LABEL_12;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = "<expr>";
    v11 = *(__int16 *)(*(_QWORD *)(a2 + 8) + 2LL * (a4 + v9));
    if ( v11 != -2 )
    {
      v10 = "rowid";
      if ( v11 != -1 )
        v10 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL)
                             + 16LL * *(__int16 *)(*(_QWORD *)(a2 + 8) + 2LL * (a4 + v9)));
    }
    ++v9;
    sub_DFDD0(a1, v10);
    if ( a3 <= v9 )
      break;
    sub_DFD90(a1, ",", 1);
  }
  if ( a3 == 1 )
  {
LABEL_12:
    v12 = 0;
    result = sub_DFD90(a1, a6, 1);
    if ( !a3 )
      return result;
    goto LABEL_15;
  }
  v12 = 0;
  sub_DFD90(a1, ")", 1);
  sub_DFD90(a1, a6, 1);
  sub_DFD90(a1, "(", 1);
LABEL_15:
  while ( 1 )
  {
    ++v12;
    result = sub_DFD90(a1, "?", 1);
    if ( a3 == v12 )
      break;
    sub_DFD90(a1, ",", 1);
  }
  if ( a3 > 1 )
    return sub_DFD90(a1, ")", 1);
  return result;
}
