__int64 __fastcall sub_32A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  __int64 v7; // rax
  int v8; // r15d

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 >= v5 && v4 < *(_DWORD *)(v3 + 108) )
  {
    v7 = *(_QWORD *)(v3 + 112) + 16LL * (v4 - v5);
    v8 = *(_DWORD *)(v7 + 8);
    *(_BYTE *)(a1 + 124) = ~*(_BYTE *)(v7 + 8);
    *(_BYTE *)(a1 + 124) &= 1u;
    if ( (v8 & 0x100) != 0 )
      sub_3090(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a3);
    if ( (v8 & 0x200) != 0 )
      sub_3090(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a3);
    if ( (v8 & 0x400) != 0 )
      sub_3090(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a3);
    if ( (v8 & 0x4000) != 0 )
      remember_problem();
    if ( (v8 & 4) != 0 )
      sub_3090(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3);
    if ( (v8 & 8) != 0 )
      sub_3090(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a3);
    if ( (v8 & 0x10) != 0 )
    {
      sub_3090(a1, a2, (unsigned __int8 *)(a2 + 120), 0, a3);
      if ( !*(_BYTE *)(a1 + 124) )
        return 1;
LABEL_20:
      add_cref();
      return 1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 124) = 1;
  }
  if ( *(_BYTE *)(a1 + 124) )
    goto LABEL_20;
  return 1;
}

