__int64 __fastcall sub_C8010(__int64 a1, unsigned __int32 *a2, _DWORD *a3, char *a4, __int64 a5)
{
  unsigned __int32 v5; // r15d
  _BOOL4 v9; // r13d
  _DWORD *v10; // r8

  if ( *(_QWORD *)(a1 + 104) != *(_QWORD *)(a5 + 8) )
    return 0;
  v5 = _byteswap_ulong(*(_DWORD *)a5);
  if ( !v5 )
    return 0;
  v9 = *(_BYTE *)(a1 + 85) == 0;
  sub_C3700(v9, (char *)a5, 8, (int *)(a1 + 96), (_DWORD *)(a1 + 96));
  sub_C3700(v9, a4, *(_DWORD *)(a1 + 56), (int *)(a1 + 96), v10);
  if ( *(_DWORD *)(a1 + 96) != _byteswap_ulong(*(_DWORD *)(a5 + 16))
    || *(_DWORD *)(a1 + 100) != _byteswap_ulong(*(_DWORD *)(a5 + 20)) )
  {
    return 0;
  }
  *a2 = v5;
  *a3 = _byteswap_ulong(*(_DWORD *)(a5 + 4));
  return 1;
}
