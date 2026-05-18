unsigned __int64 __fastcall sub_71010(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  sub_69D50(a2);
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = (_QWORD *)(v4 + *(_QWORD *)(a1 + 16));
      v4 += 104;
      sub_70FC0(v6, a2);
    }
    while ( v3 != v5 );
  }
  return sub_69D50(a2);
}
