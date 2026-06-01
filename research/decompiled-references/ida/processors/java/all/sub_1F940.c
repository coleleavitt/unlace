__int64 __fastcall sub_1F940(__int64 a1)
{
  unsigned __int16 *v1; // rax
  int v2; // esi
  int v3; // edx
  char **v5; // rax
  __int64 v6; // rcx

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v1 + 1;
  v3 = *v1;
  *(_DWORD *)(a1 + 16) = v2 - 1;
  if ( (unsigned int)(v3 - 56320) <= 0x3FF )
    return 0;
  if ( (unsigned int)(v3 - 55296) <= 0x3FF )
  {
    if ( v2 == 1 || (unsigned int)v1[1] - 56320 > 0x3FF )
      return 0;
    *(_QWORD *)(a1 + 8) = v1 + 2;
    *(_DWORD *)(a1 + 16) = v2 - 2;
    return 0;
  }
  else
  {
    v5 = sub_1F6F0(v3, 0);
    if ( v5 )
      return sub_1F8E0(v6, (__int64)*v5, *((unsigned __int8 *)v5 + 8));
    else
      return 0;
  }
}

