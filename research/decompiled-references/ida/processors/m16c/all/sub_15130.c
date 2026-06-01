__int64 __fastcall sub_15130(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v5; // r12d
  int v6; // r13d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
  {
    *(_BYTE *)(a1 + 4372) = 1;
    if ( (*(_BYTE *)(a2 + 31) & 1) != 0 )
      goto LABEL_22;
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    *(_BYTE *)(a1 + 4372) = ~(_BYTE)v5;
    *(_BYTE *)(a1 + 4372) &= 1u;
    if ( (*(_BYTE *)(a2 + 31) & 1) != 0 )
    {
      if ( (v5 & 0x100) != 0 )
        sub_14B50(a1, a2, a2 + 80);
      v6 = v5 & 0x4000;
      if ( (v5 & 4) != 0 )
        sub_14B50(a1, a2, a2 + 80);
    }
    else
    {
      if ( (v5 & 0x100) != 0 )
        sub_14B50(a1, a2, a2 + 40);
      if ( (v5 & 0x200) != 0 )
        sub_14B50(a1, a2, a2 + 80);
      v6 = v5 & 0x4000;
      if ( (v5 & 0x400) != 0 )
        sub_14B50(a1, a2, a2 + 120);
      if ( (v5 & 4) != 0 )
        sub_14B50(a1, a2, a2 + 40);
      if ( (v5 & 8) != 0 )
        sub_14B50(a1, a2, a2 + 80);
      if ( (v5 & 0x10) != 0 )
        sub_14B50(a1, a2, a2 + 120);
    }
    if ( v6 )
      remember_problem();
  }
  if ( *(_BYTE *)(a1 + 4372) )
LABEL_22:
    add_cref();
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_BYTE *)(a1 + 4372) )
      sub_14D80(a1, a2);
    else
      recalc_spd();
  }
  return 1;
}

