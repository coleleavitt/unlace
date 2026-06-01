__int64 __fastcall indexer_match(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rax

  v5 = *(_QWORD *)(**(_QWORD **)(qword_2CC85F8 + 1672) + 1880LL);
  result = *(_QWORD *)(*(_QWORD *)v5 + 1672LL);
  if ( *(_BYTE *)(result + 609) )
  {
    v9 = sub_432470(v5 + 40);
    if ( v9 )
      sub_43FD60(*(_QWORD *)(v9 + 16), a1, a3, a4);
    v10 = *(_QWORD *)(a3 + 8);
    v11 = haystack;
    if ( v10 )
    {
      v11 = *(const char **)a3;
      --v10;
    }
    return sub_43AE50(a1, v10, v11, *(int *)(a4 + 8));
  }
  return result;
}
