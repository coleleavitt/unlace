__int64 __fastcall sub_14ECE0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  unsigned __int8 v9; // al
  unsigned __int8 v10; // dl
  int v14; // ecx

  v9 = *(_BYTE *)a4;
  v10 = *(_BYTE *)a3;
  if ( *(_BYTE *)a4 != v10 )
  {
    if ( v10 == 14 )
    {
      if ( sub_121960((unsigned __int8 *)a4, *(_QWORD *)(a3 + 8) + 16LL, 0) )
      {
        sub_120F80(a2, (unsigned __int8 *)a3);
        return 1;
      }
      v9 = *(_BYTE *)a4;
    }
    if ( v9 == 14 && sub_121960((unsigned __int8 *)a3, *(_QWORD *)(a4 + 8), 0) )
      goto LABEL_6;
    return 0;
  }
  sub_120F80(a2, (unsigned __int8 *)a4);
  if ( sub_1213D0((unsigned __int8 *)a2, a1, a3, 1u) )
    return 1;
  v14 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a2 + 4) <= v14 || (sub_1231B0(a2, a1, a5, v14), !sub_121960((unsigned __int8 *)a2, a3, 0)) )
  {
    sub_120F80(a2, (unsigned __int8 *)a3);
    do
    {
      if ( *(_DWORD *)(a2 + 4) > *(_DWORD *)(a1 + 88) )
        break;
      if ( sub_14E450(a2, a1, a4) )
        return 1;
    }
    while ( sub_12D530(a1, a6, a7, a2, 2 * *(_DWORD *)(a2 + 4), 0, 0) );
    return 0;
  }
LABEL_6:
  sub_120F80(a2, (unsigned __int8 *)a4);
  return 1;
}

