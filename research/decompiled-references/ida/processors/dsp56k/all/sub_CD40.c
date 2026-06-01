__int64 __fastcall sub_CD40(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  _BYTE *v4; // rsi
  _BYTE *v5; // r8
  __int16 v6; // cx
  __int16 v7; // dx
  _DWORD *v8; // rdx
  int i; // r8d
  int v10; // edi
  int j; // ecx

  result = a1;
  v3 = a1 + 144LL * a2;
  do
  {
    v4 = *(_BYTE **)(result + 8);
    v5 = v4 + 16;
    do
    {
      while ( 1 )
      {
        v6 = 2 * *(_WORD *)(result + 138);
        v7 = 2 * *(_WORD *)(result + 136);
        *(_WORD *)(result + 138) = v6;
        *(_WORD *)(result + 136) = v7;
        if ( (unsigned __int8)(*v4 - 48) <= 1u )
        {
          *(_WORD *)(result + 136) = v7 + 1;
          if ( *v4 == 49 )
            break;
        }
        if ( ++v4 == v5 )
          goto LABEL_7;
      }
      ++v4;
      *(_WORD *)(result + 138) = v6 + 1;
    }
    while ( v4 != v5 );
LABEL_7:
    v8 = (_DWORD *)(result + 36);
    for ( i = 0; i != 5; ++i )
    {
      if ( *(_QWORD *)(result + 24LL * i + 16) )
      {
        v10 = *(v8 - 1);
        for ( j = 0; j != 16; ++j )
        {
          if ( (v10 & (1 << j)) != 0 )
            break;
          ++*v8;
        }
      }
      v8 += 6;
    }
    result += 144;
  }
  while ( result != v3 );
  return result;
}

