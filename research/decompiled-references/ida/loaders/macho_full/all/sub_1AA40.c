bool __fastcall sub_1AA40(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a3 )
    a3 = qlsize();
  if ( a3 <= 0 )
    return 0;
  v3 = a1[10];
  if ( a2 )
  {
    v6 = a2;
    if ( a2 >= v3 )
      return 0;
  }
  else
  {
    if ( !v3 )
    {
      a1[15] = 0;
      a1[16] = a3;
LABEL_7:
      v4 = a1[12] + v3;
      return v4 == qlseek();
    }
    v6 = 0;
  }
  v7 = a1[9] + 20 * v6;
  v3 = *(unsigned int *)(v7 + 8);
  a1[15] = v3;
  v8 = *(unsigned int *)(v7 + 12);
  a1[16] = v8;
  if ( v3 < a3 )
  {
    if ( a3 < v3 + v8 )
    {
      sub_112F0((__int64)"Fat subfile %u is truncated\n", a2);
      v9 = qlsize();
      v3 = a1[15];
      a1[16] = v9 - v3;
    }
    goto LABEL_7;
  }
  sub_112F0((__int64)"Fat subfile %u is outside the file\n", a2);
  return 0;
}

