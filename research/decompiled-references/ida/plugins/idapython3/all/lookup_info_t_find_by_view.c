__int64 __fastcall lookup_info_t_find_by_view(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rcx

  v3 = *(_QWORD **)a1;
  v4 = 2LL * *(_QWORD *)(a1 + 8);
  v5 = &v3[v4];
  if ( !(v4 * 8) )
    return 0;
  while ( *v3 != a3 )
  {
    v3 += 2;
    if ( v3 == v5 )
      return 0;
  }
  if ( a2 )
    *a2 = v3[1];
  return 1;
}

