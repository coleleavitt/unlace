__int64 __fastcall sub_2DF0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v7; // r12d
  int v8; // r13d
  int v9; // r15d

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 )
  {
    add_cref();
    return 1;
  }
  if ( v4 < *(_DWORD *)(v3 + 108) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    v9 = (v8 & 1) == 0;
    if ( (v8 & 0x100) != 0 )
      v9 &= sub_2BF0(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3);
    if ( (v8 & 0x200) != 0 )
      v9 &= sub_2BF0(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a3);
    v7 = v8 & 0x4000;
    if ( (v8 & 0x400) != 0 )
      v9 &= sub_2BF0(a1, a2, (unsigned __int8 *)(a2 + 120), 0, a3);
    if ( (v8 & 4) != 0 )
      v9 &= sub_2BF0(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a3);
    if ( (v8 & 8) != 0 )
      v9 &= sub_2BF0(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a3);
    if ( (v8 & 0x10) != 0 )
      LOBYTE(v9) = sub_2BF0(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a3) & v9;
    if ( !(_BYTE)v9 )
      goto LABEL_7;
  }
  else
  {
    v7 = 0;
  }
  add_cref();
LABEL_7:
  if ( v7 )
    remember_problem();
  return 1;
}

