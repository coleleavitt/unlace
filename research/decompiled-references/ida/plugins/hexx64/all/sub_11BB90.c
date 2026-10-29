char __fastcall sub_11BB90(unsigned __int8 *a1, __int64 a2, int a3, double a4)
{
  unsigned __int8 v4; // al
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v4 = *a1;
  if ( *a1 == 9 )
  {
    v6 = *((__int64 **)a1 + 1);
    v7 = *v6;
    v8 = *((int *)v6 + 4);
    if ( *(_QWORD *)(v7 + 440) < v8 )
      sub_11B980(a4);
    return sub_1C3090((_DWORD *)(*(_QWORD *)(v7 + 432) + 104 * v8), a2, a3);
  }
  else if ( v4 <= 9u )
  {
    return (unsigned __int8)(v4 - 5) <= 1u;
  }
  else if ( v4 == 15 )
  {
    return sub_1C3090(*((_DWORD **)a1 + 1), a2, a3);
  }
  else
  {
    return 0;
  }
}

