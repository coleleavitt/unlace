__int64 __fastcall sub_E3F60(_DWORD *a1, __int64 a2)
{
  char *v2; // r8
  char v3; // al
  int v4; // edx
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // edx

  v2 = *(char **)(a2 + 16);
  v3 = *v2;
  if ( *v2 == -80 )
    v3 = v2[2];
  v4 = *(_DWORD *)(a2 + 4) & 0x800;
  if ( v3 == -79 )
  {
    v6 = **((_DWORD **)v2 + 4);
  }
  else
  {
    if ( v3 != -118 )
    {
      v5 = 0;
      if ( !v4 || *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
        return v5;
      v6 = 1;
      goto LABEL_8;
    }
    v6 = **(_DWORD **)(*((_QWORD *)v2 + 4) + 32LL);
  }
  if ( !v4 || *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    if ( v6 == 1 )
    {
      return 0;
    }
    else
    {
      v5 = 1;
      sub_E3F10((__int64)a1, *((_DWORD *)v2 + 1), (__int64)(v2 + 32));
    }
    return v5;
  }
LABEL_8:
  v5 = 0;
  v7 = **(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( v7 != v6 )
  {
    v5 = 1;
    if ( !a1[12] )
      sub_DBD10((__int64)a1, "sub-select returns %d columns - expected %d", v7, v6);
  }
  return v5;
}
