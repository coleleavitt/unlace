__int64 __fastcall sub_3E6060(__int64 a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r8

  v2 = *(_QWORD *)(a1 + 736);
  if ( !v2 )
    return 1;
  v3 = (_DWORD *)(a1 + *(_QWORD *)v2);
  if ( *(_QWORD *)v2 == 692 )
    return 1;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v5 = v3;
    v3 = (_DWORD *)(a1 + v4);
    if ( a2 < *(_DWORD *)(a1 + v4) )
      break;
    v2 += 16;
    if ( v4 == 692 )
      return 1;
  }
  if ( a2 == *v5 )
    return (unsigned int)*(char *)(v2 + 14);
  else
    return 1;
}

