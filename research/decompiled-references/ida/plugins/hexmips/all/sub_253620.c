__int64 __fastcall sub_253620(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  int v8; // edi

  v2 = **(_QWORD ***)(a1 + 88);
  if ( !v2 )
    return 0;
  v3 = 24;
  v4 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v4 )
    return *(unsigned int *)(v3 + 16);
  v5 = 0;
  if ( (*(_BYTE *)v4 & 2) != 0 )
    return v5;
  v6 = *a2;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 24);
    v3 = v4 + 24;
    if ( v6 >= v7 )
    {
      if ( v7 < v6 )
        goto LABEL_15;
      v8 = *(_DWORD *)(v4 + 32);
      if ( *((_DWORD *)a2 + 2) >= v8 )
        break;
    }
    v4 = *(_QWORD *)(v4 + 8);
LABEL_13:
    if ( (*(_BYTE *)v4 & 2) != 0 )
      return 0;
  }
  if ( *((_DWORD *)a2 + 2) > v8 )
  {
LABEL_15:
    v4 = *(_QWORD *)(v4 + 16);
    goto LABEL_13;
  }
  if ( v2 != (_QWORD *)v4 )
    return *(unsigned int *)(v3 + 16);
  return 0;
}

