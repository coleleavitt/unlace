unsigned __int64 __fastcall sub_1F0600(__int64 *a1, int *a2, int a3, int a4, int a5, double a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // r13
  __int64 i; // rbp
  __int64 v11; // rax
  int *v12; // rdi

  v6 = a5;
  if ( a3 == -1 )
    a3 = 1;
  if ( a5 < (unsigned __int64)a1[1] )
  {
    v9 = a3;
    for ( i = 104LL * a5; ; i += 104 )
    {
      v11 = *a1;
      v12 = (int *)(*a1 + i);
      if ( a4 != -1 && v12[23] != a4 )
        break;
LABEL_9:
      if ( (unsigned __int8)sub_1C4AE0(v12, v12[22], a2, v9, a6) )
        return v6;
      if ( ++v6 >= a1[1] )
        return -1;
    }
    while ( 1 )
    {
      ++v6;
      i += 104;
      if ( v6 >= a1[1] )
        break;
      v12 = (int *)(v11 + i);
      if ( *(_DWORD *)(v11 + i + 92) == a4 )
        goto LABEL_9;
    }
  }
  return -1;
}

