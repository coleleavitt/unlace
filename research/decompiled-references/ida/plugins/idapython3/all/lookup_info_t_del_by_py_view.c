__int64 __fastcall lookup_info_t_del_by_py_view(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v6; // rax
  void *v7; // rdi

  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v4 )
    return 0;
  do
  {
    v6 = v3[1];
    v7 = v3;
    v3 += 2;
    if ( v6 == a2 )
    {
      memmove(v7, v3, v4 - (_QWORD)v7 - 16);
      --*(_QWORD *)(a1 + 8);
      return 1;
    }
  }
  while ( v3 != (_QWORD *)v4 );
  return 0;
}

