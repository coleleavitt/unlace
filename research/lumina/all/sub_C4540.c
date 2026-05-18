__int64 __fastcall sub_C4540(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rax

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 400);
  if ( !v3 )
    return 0;
  v4 = *v3;
  v5 = *(_QWORD **)(v2 + 400);
  if ( a2 == *v3 )
  {
LABEL_12:
    *v5 = 0;
    if ( (*(_DWORD *)(a2 + 4) & 0x3000000) == 0 )
    {
      v3 = *(__int64 **)(v2 + 400);
      v6 = a2 + 64;
      if ( v3 )
      {
        v4 = *v3;
        goto LABEL_7;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v5 = (_QWORD *)v5[3];
    if ( !v5 )
      break;
    if ( a2 == *v5 )
      goto LABEL_12;
  }
  v6 = a2 + 64;
  if ( (*(_DWORD *)(a2 + 4) & 0x3000000) != 0 )
    return 0;
LABEL_7:
  if ( v4 != v6 )
  {
    do
    {
      v3 = (__int64 *)v3[3];
      if ( !v3 )
        return 0;
    }
    while ( *v3 != v6 );
  }
  *v3 = 0;
  return 0;
}
