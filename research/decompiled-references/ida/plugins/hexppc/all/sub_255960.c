__int64 __fastcall sub_255960(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  bool v5; // zf
  __int64 v6; // r13
  __int64 result; // rax

  v2 = *a1;
  v3 = *a2;
  v4 = *a1 + 56 * a1[1];
  v5 = v4 == *a1;
  v6 = *a2 + 56 * a2[1];
  while ( !v5 && v6 != v3 )
  {
    result = sub_256710(v2, v3);
    if ( (_DWORD)result )
      return result;
    v2 += 56;
    v3 += 56;
    v5 = v2 == v4;
  }
  if ( v4 == v2 && v6 != v3 )
    return 0xFFFFFFFFLL;
  else
    return !v5 & (unsigned __int8)(v6 == v3);
}

