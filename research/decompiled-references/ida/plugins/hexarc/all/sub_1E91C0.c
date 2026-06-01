__int64 __fastcall sub_1E91C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  v2 = a1[1];
  v3 = *a1;
  if ( !(104 * v2) )
    return -1;
  v4 = *a1;
  while ( *(_QWORD *)(v4 + 16) != *(_QWORD *)(a2 + 16) )
  {
LABEL_3:
    v4 += 104;
    if ( v4 == v3 + 104 * v2 )
      return -1;
  }
  if ( !sub_1BE960(v4, a2) )
  {
    v3 = *a1;
    v2 = a1[1];
    goto LABEL_3;
  }
  if ( v4 )
    return 0x4EC4EC4EC4EC4EC5LL * ((v4 - *a1) >> 3);
  return -1;
}

