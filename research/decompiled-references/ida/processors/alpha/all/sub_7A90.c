__int64 __fastcall sub_7A90(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  int v3; // ebx
  __int64 v4; // r13
  _DWORD *v5; // r15
  __int64 tinfo_size; // rax
  unsigned __int64 v7; // r14
  __int64 v9; // rax

  v1 = a1[1];
  if ( (int)v1 <= 0 )
    goto LABEL_12;
  v2 = 0;
  v3 = 0;
  v4 = 16 * (5LL * (unsigned int)(v1 - 1) + 5);
  do
  {
    v5 = (_DWORD *)(v2 + *a1);
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == -1 )
      return 0;
    v7 = tinfo_size + 7;
    cleanup_argloc();
    if ( v3 <= 5 )
    {
      *v5 = 3;
      v5[2] = v3 + 16;
    }
    else
    {
      *v5 = 1;
      *((_QWORD *)v5 + 1) = 8 * v3 - 48;
    }
    v2 += 80;
    v3 += v7 >> 3;
  }
  while ( v2 != v4 );
  if ( v3 <= 6 )
LABEL_12:
    v9 = 0;
  else
    v9 = 8 * v3 - 48;
  a1[7] = v9;
  return 1;
}

