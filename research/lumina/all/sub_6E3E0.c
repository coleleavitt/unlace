unsigned __int64 __fastcall sub_6E3E0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  result = sub_69D50(a2);
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      v7 = v5 + *(_QWORD *)(a1 + 16);
      v5 += 168;
      result = sub_6E300(v7, a2);
    }
    while ( v3 != v6 );
  }
  return result;
}
