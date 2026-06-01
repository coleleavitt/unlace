int *__fastcall sub_36A620(_QWORD *a1, int **a2)
{
  int *v2; // rbx
  int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int *v10; // rax
  int *result; // rax

  v2 = *a2;
  if ( a1[58] )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = sub_139080(a1, v3);
      if ( *(_DWORD *)v5 == 2 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        v7 = *(_DWORD **)v6;
        v8 = *(_QWORD *)v6 + 24LL * *(_QWORD *)(v6 + 8);
        if ( *(_QWORD *)v6 == v8 )
          goto LABEL_4;
        while ( (unsigned int)(*v7 - 3) > 1 )
        {
          v7 += 6;
          if ( (_DWORD *)v8 == v7 )
            goto LABEL_4;
        }
        do
LABEL_10:
          v9 = *v2++;
        while ( v9 == -1 );
        ++v3;
        *(_DWORD *)(a1[57] + 4 * v4) = v9;
        v4 = v3;
        if ( (unsigned __int64)v3 >= a1[58] )
        {
LABEL_12:
          v10 = *a2;
          goto LABEL_13;
        }
      }
      else
      {
        if ( (unsigned int)(*(_DWORD *)v5 - 3) <= 1 )
          goto LABEL_10;
LABEL_4:
        v4 = ++v3;
        if ( (unsigned __int64)v3 >= a1[58] )
          goto LABEL_12;
      }
    }
  }
  v10 = *a2;
LABEL_13:
  result = &v10[(_QWORD)a2[1]];
  if ( v2 != result )
  {
    if ( !under_debugger )
      sub_37E160(51140);
    BUG();
  }
  return result;
}

