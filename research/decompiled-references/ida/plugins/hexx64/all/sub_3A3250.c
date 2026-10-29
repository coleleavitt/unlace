bool __fastcall sub_3A3250(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  const char *v6; // rsi
  const char *v7; // rdi

  if ( **(_QWORD **)(a1 + 24) != **(_QWORD **)(a2 + 24) )
    return 0;
  if ( (unsigned int)sub_1C2AD0(*(int **)(a1 + 32), *(int **)(a2 + 32), a3) )
    return 0;
  v4 = *(_QWORD **)(a2 + 32);
  v5 = *(_QWORD **)(a1 + 32);
  if ( v5[2] != v4[2] )
    return 0;
  v6 = s1;
  if ( v4[5] )
    v6 = (const char *)v4[4];
  v7 = s1;
  if ( v5[5] )
    v7 = (const char *)v5[4];
  return strcmp(v7, v6) == 0;
}

