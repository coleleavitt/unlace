__int64 __fastcall sub_3C3D20(_QWORD *a1, int a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx
  unsigned int v7; // ecx

  v2 = (_DWORD *)a1[25];
  v3 = &v2[a1[26]];
  if ( v2 != v3 )
  {
    while ( *v2 != a2 )
    {
      if ( v3 == ++v2 )
        goto LABEL_7;
    }
    if ( v2 != v3 )
      return 55295;
  }
LABEL_7:
  v5 = (_DWORD *)a1[22];
  v6 = &v5[a1[23]];
  if ( v5 == v6 )
    return 0xFFFFFFFFLL;
  while ( *v5 != a2 )
  {
    if ( v6 == ++v5 )
      return 0xFFFFFFFFLL;
  }
  v7 = 11184810;
  if ( v6 == v5 )
    return (unsigned int)-1;
  return v7;
}

