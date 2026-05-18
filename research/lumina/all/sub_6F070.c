unsigned __int64 __fastcall sub_6F070(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // r14
  unsigned __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rdi

  v5 = *(_QWORD *)(a1 + 24);
  result = sub_69D50(a2);
  if ( v5 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = (_QWORD *)(v7 + *(_QWORD *)(a1 + 16));
      v7 += 216;
      result = sub_6EF60(v9, a2, a3);
    }
    while ( v5 != v8 );
  }
  return result;
}
