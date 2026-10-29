bool __fastcall sub_EEA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  __int16 v5; // dx
  int v6; // ecx
  bool result; // al

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  v5 = *(_WORD *)(a2 + 24);
  if ( v4 > v3 || v3 >= *(_DWORD *)(v2 + 108) )
    goto LABEL_7;
  v6 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
  if ( (v6 & 4) == 0 || *(_BYTE *)(a2 + 41) != 1 || (result = 0, *(_WORD *)(a2 + 46)) )
  {
    if ( (v6 & 8) != 0 && *(_BYTE *)(a2 + 81) == 1 )
    {
      result = 0;
      if ( !*(_WORD *)(a2 + 86) )
        return result;
      result = 1;
      if ( v5 != 45 )
        return result;
LABEL_9:
      if ( *(_BYTE *)(a2 + 41) == 7 )
        return *(_QWORD *)(a2 + 56) != *(_QWORD *)(a2 + 16);
      return result;
    }
LABEL_7:
    result = 1;
    if ( v5 != 45 )
      return result;
    goto LABEL_9;
  }
  return result;
}
