int __fastcall sub_25A220(__int64 *a1, __int64 *a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  bool v6; // zf
  __int64 v7; // r13
  int result; // eax

  v3 = *a1;
  v4 = *a2;
  v5 = *a1 + 72 * a1[1];
  v6 = v5 == *a1;
  v7 = *a2 + 72 * a2[1];
  while ( !v6 && v7 != v4 )
  {
    result = sub_259850(v3, v4, 0, a3);
    if ( result )
      return result;
    v3 += 72;
    v4 += 72;
    v6 = v3 == v5;
  }
  if ( v5 == v3 && v7 != v4 )
    return -1;
  else
    return !v6 && v7 == v4;
}

