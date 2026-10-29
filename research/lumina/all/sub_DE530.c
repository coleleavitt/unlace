__int64 *__fastcall sub_DE530(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // esi
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  int v11; // r12d
  __int64 *result; // rax
  __int64 *v13; // rdx
  _QWORD *v14; // rsi

  v8 = *(unsigned __int16 *)(a1 + 192);
  v9 = *(_QWORD *)a1;
  if ( (_WORD)v8 )
  {
    v10 = *(_QWORD *)(a1 + 152);
    if ( v10 )
    {
      sub_CD520(v10, (unsigned int)(2 * v8), a3, a4, a5, a6);
      v14 = *(_QWORD **)(a1 + 152);
      if ( v14 )
        sub_C9250(v9, v14);
    }
  }
  v11 = 2 * a2;
  *(_WORD *)(a1 + 192) = a2;
  result = sub_DBF10(v9, 112LL * a2);
  *(_QWORD *)(a1 + 152) = result;
  if ( result && v11 > 0 )
  {
    v13 = &result[7 * (unsigned int)(v11 - 1) + 7];
    do
    {
      result[3] = v9;
      *((_DWORD *)result + 8) = 0;
      *((_WORD *)result + 10) = 1;
      result += 7;
    }
    while ( result != v13 );
  }
  return result;
}
