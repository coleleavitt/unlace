char __fastcall sub_11CC50(unsigned __int8 *a1, __int64 a2, int a3, double a4)
{
  char result; // al
  unsigned __int8 v5; // al
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  result = *(_BYTE *)(a2 + 145);
  if ( result )
  {
    v5 = *a1;
    if ( *a1 == 9 )
    {
      v6 = *((__int64 **)a1 + 1);
      v7 = *v6;
      v8 = *((int *)v6 + 4);
      if ( *(_QWORD *)(v7 + 440) < v8 )
        sub_11B980(a4);
      return sub_1C3090((_DWORD *)(*(_QWORD *)(v7 + 432) + 104 * v8), a2, a3);
    }
    else if ( v5 > 9u )
    {
      if ( v5 == 15 )
        return sub_1C3090(*((_DWORD **)a1 + 1), a2, a3);
      else
        return 0;
    }
    else
    {
      return (unsigned __int8)(v5 - 5) <= 1u;
    }
  }
  return result;
}

