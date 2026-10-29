__int64 __fastcall sub_AFC0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  int v3; // r12d
  _DWORD *v4; // rbp
  __int64 tinfo_size; // r15
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-40h]

  v1 = a1[1];
  if ( (int)v1 <= 0 )
    goto LABEL_12;
  v2 = 0;
  v3 = 0;
  v10 = 16 * (5LL * (unsigned int)(v1 - 1) + 5);
  do
  {
    v4 = (_DWORD *)(v2 + *a1);
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == -1 )
      return 0;
    v6 = getinf();
    v7 = (tinfo_size + v6 - 1) & -v6;
    cleanup_argloc();
    if ( v3 <= 3 )
    {
      *v4 = 3;
      v4[2] = 26 - v3;
    }
    else
    {
      *v4 = 1;
      *((_QWORD *)v4 + 1) = 4 * v3 + 36;
    }
    v2 += 80;
    v3 += v7 >> 2;
  }
  while ( v2 != v10 );
  if ( v3 <= 3 )
LABEL_12:
    v9 = 0;
  else
    v9 = 4 * v3 + 36;
  a1[7] = v9;
  return 1;
}

