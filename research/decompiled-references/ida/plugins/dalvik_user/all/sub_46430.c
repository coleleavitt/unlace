__int64 __fastcall sub_46430(__int64 a1, unsigned __int32 *a2, char a3)
{
  __int64 v3; // rax
  int v4; // ecx
  unsigned int v6; // eax
  unsigned __int32 v7; // eax

  v3 = *(int *)(a1 + 24);
  v4 = v3 + 4;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)((int)v3 + 4) )
    return 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + v3);
  *(_DWORD *)(a1 + 24) = v4;
  v7 = _byteswap_ulong(v6);
  if ( a2 )
    *a2 = v7;
  if ( !a3 || !*(_BYTE *)(a1 + 56) )
    return 1;
  sub_1FAD0((__int64 *)(a1 + 32));
  return 1;
}

