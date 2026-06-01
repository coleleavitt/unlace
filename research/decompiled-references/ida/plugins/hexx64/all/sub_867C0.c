__int64 __fastcall sub_867C0(char ***a1, __int64 a2, double a3)
{
  char *v4; // rsi
  unsigned int v5; // eax
  char **v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  int v9; // r14d
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  v4 = (*a1)[1];
  v5 = unpack_dd();
  v6 = *a1;
  v7 = v5;
  if ( (*a1)[1] - **a1 < (unsigned __int64)v5 )
    return 0;
  v8 = v5;
  v9 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)qalloc_or_throw(48, (__int64)v4, (__int64)v6, v7);
      v10[2] = -1;
      v4 = (char *)(v10 + 2);
      v10[3] = -4294967226LL;
      v10[4] = 0xFFFFFFFFLL;
      v10[5] = 0;
      *v10 = a2;
      v11 = *(_QWORD **)(a2 + 8);
      v10[1] = v11;
      *v11 = v10;
      ++*(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 8) = v10;
      if ( !(unsigned __int8)sub_85210(a1, (__int64)(v10 + 2), a3) )
        break;
      if ( ++v9 == v8 )
        return 1;
    }
    return 0;
  }
  return 1;
}

