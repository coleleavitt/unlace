__int64 __fastcall sub_1599D0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  const __m128i *v16; // rsi

  if ( a2 >= 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v14 + 8) <= a2 )
        goto LABEL_12;
      if ( !a3 )
        return 0;
      v7 = *(_QWORD *)(a3 + 64);
    }
    else
    {
      if ( !a3 )
        return 0;
      v7 = *(_QWORD *)(a3 + 64);
      v8 = *(_QWORD *)(v7 + 1472);
      if ( a2 < *(_QWORD *)(v8 + 8) )
      {
        if ( (*(_BYTE *)(a3 + 26) & 4) == 0 )
          return 0;
        v9 = v8 + 40LL * *(_QWORD *)(a3 + 512);
        v10 = *(_QWORD *)(v9 + 16);
        v11 = *(_QWORD *)(v9 + 8);
        if ( !v10 || a2 < v11 )
          return 0;
        v12 = *(int *)(a1 + 4);
        v13 = v10 + v11 - 1;
        if ( (int)v12 <= 0 )
          v12 = 1;
        if ( v13 < a2 + v12 - 1 )
          return 0;
      }
      v14 = *(_QWORD *)(a1 + 8);
      if ( a2 >= *(_QWORD *)(v14 + 8) )
      {
LABEL_12:
        *(_QWORD *)(v14 + 8) = a2;
        *(_WORD *)(a1 + 2) = 0;
        return 1;
      }
    }
    if ( *(_QWORD *)(v7 + 128) <= a2 )
      goto LABEL_12;
    v16 = (const __m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1496) + 24LL) + 16LL)
                          & (a2 + *(_QWORD *)(v7 + 1440)));
    if ( !sub_317040((unsigned __int64 **)(v7 + 208), (unsigned __int64)v16) )
    {
      v14 = *(_QWORD *)(a1 + 8);
      goto LABEL_12;
    }
    if ( (a4 & 2) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a2;
      *(_WORD *)(a1 + 2) = 0;
      sub_190300(*(_QWORD *)(a3 + 64), v16);
      return 1;
    }
    return 0;
  }
  return 0;
}

