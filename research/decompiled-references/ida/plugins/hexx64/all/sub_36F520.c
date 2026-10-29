int *__fastcall sub_36F520(_QWORD *a1, int **a2, double a3)
{
  int *v3; // rbx
  int v4; // r12d
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  int *v11; // rax
  int *result; // rax

  v3 = *a2;
  if ( a1[58] )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_13D280(a1, v4, a3);
      if ( *(_DWORD *)v6 == 2 )
      {
        v7 = *(_QWORD *)(v6 + 8);
        v8 = *(_DWORD **)v7;
        v9 = *(_QWORD *)v7 + 24LL * *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)v7 == v9 )
          goto LABEL_4;
        while ( (unsigned int)(*v8 - 3) > 1 )
        {
          v8 += 6;
          if ( (_DWORD *)v9 == v8 )
            goto LABEL_4;
        }
        do
LABEL_10:
          v10 = *v3++;
        while ( v10 == -1 );
        ++v4;
        *(_DWORD *)(a1[57] + 4 * v5) = v10;
        v5 = v4;
        if ( (unsigned __int64)v4 >= a1[58] )
        {
LABEL_12:
          v11 = *a2;
          goto LABEL_13;
        }
      }
      else
      {
        if ( (unsigned int)(*(_DWORD *)v6 - 3) <= 1 )
          goto LABEL_10;
LABEL_4:
        v5 = ++v4;
        if ( (unsigned __int64)v4 >= a1[58] )
          goto LABEL_12;
      }
    }
  }
  v11 = *a2;
LABEL_13:
  result = &v11[(_QWORD)a2[1]];
  if ( v3 != result )
  {
    if ( !under_debugger )
      sub_383060(0xC7C4u, a3);
    BUG();
  }
  return result;
}

