__int64 __fastcall sub_2FC60(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = *(_QWORD **)(a1 + 24);
  v3 = &v2[4 * *(_QWORD *)(a1 + 32)];
  if ( v3 == v2 )
    return -1;
  v4 = a2[1];
  while ( 1 )
  {
    v5 = v2[1];
    if ( v5 == v4 )
      break;
LABEL_8:
    v2 += 4;
    if ( v3 == v2 )
      return -1;
  }
  if ( v4 )
  {
    v6 = 0;
    while ( *(_BYTE *)(*v2 + v6) == *(_BYTE *)(*a2 + v6) )
    {
      if ( v5 == ++v6 )
        return v2[3];
    }
    goto LABEL_8;
  }
  return v2[3];
}

