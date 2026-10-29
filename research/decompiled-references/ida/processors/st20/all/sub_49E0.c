__int64 __fastcall sub_49E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v6; // r12d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 >= v4 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 228) = ~*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 228) &= 1u;
    if ( (v6 & 0x100) != 0 )
      sub_4890(a1, a2, a2 + 40, 1);
    if ( (v6 & 4) != 0 )
    {
      sub_4890(a1, a2, a2 + 40, 0);
      if ( (unsigned __int8)segtype() != 1 )
        goto LABEL_5;
LABEL_12:
      *(_BYTE *)(a1 + 228) = 0;
      return 1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 228) = 1;
  }
  if ( (unsigned __int8)segtype() == 1 )
    goto LABEL_12;
LABEL_5:
  if ( *(_BYTE *)(a1 + 228) )
    add_cref();
  return 1;
}

