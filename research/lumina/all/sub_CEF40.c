__int64 __fastcall sub_CEF40(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  int *v3; // rax
  int v4; // ecx
  int v5; // edx
  _DWORD *v6; // rax
  _DWORD *v7; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // r8
  int v11; // esi
  int v12; // eax

  if ( ((*(_BYTE *)a2 + 89) & 0xFD) != 0 )
    return 0;
  v2 = *(_QWORD **)(a1 + 40);
  v3 = (int *)v2[1];
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 > 0 )
    {
      v5 = *(_DWORD *)(a2 + 44);
      if ( v3[18] == v5 )
      {
LABEL_8:
        *(_WORD *)(a1 + 36) |= 1u;
        return 0;
      }
      v6 = v3 + 44;
      v7 = &v6[26 * (v4 - 1)];
      while ( v7 != v6 )
      {
        v6 += 26;
        if ( *(v6 - 26) == v5 )
          goto LABEL_8;
      }
    }
  }
  v9 = v2[2];
  if ( v9 > 0 )
  {
    v10 = (_DWORD *)v2[3];
    v11 = *(_DWORD *)(a2 + 44);
    v12 = 0;
    if ( v11 == *v10 )
      return 0;
    while ( v9 > ++v12 )
    {
      if ( v10[v12] == v11 )
        return 0;
    }
  }
  *(_WORD *)(a1 + 36) |= 2u;
  return 0;
}
