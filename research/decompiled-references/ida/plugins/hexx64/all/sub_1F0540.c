__int64 __fastcall sub_1F0540(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx

  v3 = a1[1];
  v4 = *a1;
  if ( !(104 * v3) )
    return -1;
  v5 = *a1;
  while ( *(_QWORD *)(v5 + 16) != *(_QWORD *)(a2 + 16) )
  {
LABEL_3:
    v5 += 104;
    if ( v5 == v4 + 104 * v3 )
      return -1;
  }
  if ( !sub_1C51E0(v5, a2, a3) )
  {
    v4 = *a1;
    v3 = a1[1];
    goto LABEL_3;
  }
  if ( v5 )
    return 0x4EC4EC4EC4EC4EC5LL * ((v5 - *a1) >> 3);
  return -1;
}

