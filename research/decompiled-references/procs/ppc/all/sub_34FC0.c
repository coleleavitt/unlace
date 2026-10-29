bool __fastcall sub_34FC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // dx
  bool result; // al

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  v5 = *(_WORD *)(a2 + 24);
  if ( v3 >= v4 && v3 < *(_DWORD *)(v2 + 108) && (*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8) & 1) != 0 )
    return v5 != 1178;
  if ( v5 == 320 )
    return (*(_DWORD *)(a2 + 28) & 0x108) == 256;
  if ( v5 <= 0x140u )
    return v5 == 16;
  result = 0;
  if ( (unsigned __int16)(v5 - 321) <= 0xFu )
    return *(_BYTE *)(a2 + 29) & 1;
  return result;
}
