__int64 __fastcall sub_1EC980(__int64 *a1, int *a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // r13
  __int64 i; // rbp
  __int64 v10; // rax
  int *v11; // rdi

  v5 = a5;
  if ( a3 == -1 )
    a3 = 1;
  if ( a5 < (unsigned __int64)a1[1] )
  {
    v8 = a3;
    for ( i = 104LL * a5; ; i += 104 )
    {
      v10 = *a1;
      v11 = (int *)(*a1 + i);
      if ( a4 != -1 && v11[23] != a4 )
        break;
LABEL_9:
      if ( (unsigned __int8)sub_1C10A0(v11, v11[22], a2, v8) )
        return v5;
      if ( ++v5 >= a1[1] )
        return -1;
    }
    while ( 1 )
    {
      ++v5;
      i += 104;
      if ( v5 >= a1[1] )
        break;
      v11 = (int *)(v10 + i);
      if ( *(_DWORD *)(v10 + i + 92) == a4 )
        goto LABEL_9;
    }
  }
  return -1;
}

