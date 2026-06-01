char __fastcall sub_32AA90(__int64 a1)
{
  int v1; // eax
  char result; // al
  unsigned int v3; // edx
  __int16 v4; // [rsp+20h] [rbp-48h]

  v1 = *(_DWORD *)(a1 + 924);
  if ( v1 != -1 )
    return v1 != 0;
  v3 = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 924) = 0;
  if ( v3 == 18 )
  {
    netnode_check();
    if ( netnode_valobj() != 64 || v4 != 1 )
      return *(_DWORD *)(a1 + 924) != 0;
    goto LABEL_9;
  }
  if ( v3 <= 0x12 )
  {
    if ( ((v3 - 10) & 0xFFFFFFFD) != 0 )
      return 0;
    goto LABEL_9;
  }
  result = 0;
  if ( v3 == 25 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 924) = 1;
    return 1;
  }
  return result;
}

