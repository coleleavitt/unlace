__int64 __fastcall sub_11E980(__int64 *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx

  v2 = a1[1];
  if ( !v2 )
    return (unsigned int)-1;
  v3 = *a1;
  v4 = 0;
  v5 = -1;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    if ( v6 )
      break;
    v5 = *(_DWORD *)(a1[3] + 4 * v4);
LABEL_4:
    ++v4;
    v3 += 24;
    if ( v4 == v2 )
      return v5;
  }
  v7 = *(_QWORD **)v3;
  v8 = *(_QWORD *)v3 + 8 * v6;
  if ( *(_QWORD *)v3 == v8 )
    goto LABEL_4;
  while ( *v7 != a2 )
  {
    if ( (_QWORD *)v8 == ++v7 )
      goto LABEL_4;
  }
  if ( v7 == (_QWORD *)v8 )
    goto LABEL_4;
  return *(unsigned int *)(a1[3] + 4 * v4);
}

