__int64 __fastcall sub_C4EB0(unsigned __int16 *a1, __int64 a2, __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v4; // bp
  __int64 v5; // r8
  __int16 v6; // r9
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // rax
  bool v10; // cc
  __int16 v11; // r10
  __int64 v12; // r9

  v4 = *a1;
  if ( !*a1 )
    goto LABEL_10;
  v5 = (__int64)(a1 + 4);
  do
  {
    v6 = *(_WORD *)(v5 + 8);
    v7 = *(_QWORD *)v5 & a2;
    if ( v6 < a3 )
      goto LABEL_7;
    if ( a2 == v7 )
      goto LABEL_11;
    if ( v6 <= a3 )
    {
LABEL_7:
      if ( v7 == *(_QWORD *)v5 )
        return 0;
    }
    v5 += 16;
  }
  while ( (unsigned __int16 *)v5 != &a1[8 * (unsigned __int16)(v4 - 1) + 12] );
  if ( v4 <= 2u )
  {
LABEL_10:
    *a1 = v4 + 1;
    v9 = 8LL * v4;
    v5 = (__int64)&a1[v9 + 4];
    a1[v9 + 9] = a4;
LABEL_11:
    v10 = *(_WORD *)(v5 + 10) <= a4;
    *(_QWORD *)v5 = a2;
    result = 1;
    *(_WORD *)(v5 + 8) = a3;
    if ( !v10 )
      *(_WORD *)(v5 + 10) = a4;
    return result;
  }
  v11 = a1[8];
  v5 = (__int64)(a1 + 4);
  v12 = 0;
  do
  {
    if ( (__int16)a1[v12 + 16] < v11 )
    {
      v11 = a1[v12 + 16];
      v5 = (__int64)&a1[v12 + 12];
    }
    v12 += 8;
  }
  while ( 8 * ((unsigned __int16)(v4 - 2) + 1LL) != v12 );
  result = 0;
  if ( a3 < v11 )
    goto LABEL_11;
  return result;
}
