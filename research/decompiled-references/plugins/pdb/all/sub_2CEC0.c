__int64 __fastcall sub_2CEC0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v6; // r10
  __int64 v8; // rax
  int v9; // r11d
  unsigned int v10; // ecx
  __int64 v11; // rsi
  int v13; // edx
  unsigned int v14; // edx
  __int64 v15; // rax

  v4 = *a1;
  if ( (a2 & ~*a1) != 0 )
    return 0;
  v6 = a2;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  v11 = a1[1];
  while ( 1 )
  {
    if ( qword_93F00[v8] >= v6 )
      goto LABEL_8;
    v13 = *((unsigned __int8 *)a1 + v8++ + 32);
    v11 += (unsigned int)(v9 * v13);
    if ( v8 == 7 )
      break;
    v10 = dword_93F40[v8];
    v9 = v10;
  }
  do
  {
    if ( under_debugger )
      BUG();
    a4 = 30204;
    interr(30204);
LABEL_8:
    ;
  }
  while ( !v10 );
  v14 = a3;
  if ( a4 < a3 )
    return 0;
  v15 = a3;
  while ( 1 )
  {
    while ( (v15 & ~v4) != 0 )
    {
      v14 *= 2;
      v15 = v14;
      if ( v14 > a4 )
        return 0;
    }
    if ( v6 == v15 )
      break;
    v11 += v10;
    v14 *= 2;
    v15 = v14;
    if ( v14 > a4 )
      return 0;
  }
  return v11;
}
