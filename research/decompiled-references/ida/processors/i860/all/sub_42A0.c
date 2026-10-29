__int64 __fastcall sub_42A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  __int64 flags; // rax
  __int64 v7; // r12
  int v9; // r12d
  int v10; // r13d
  unsigned int dword; // eax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
    goto LABEL_2;
  v9 = 1;
  v10 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
  if ( (v10 & 0x100) != 0 )
    v9 = sub_40A0(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a3);
  if ( (v10 & 0x200) != 0 )
    v9 &= sub_40A0(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a3);
  if ( (v10 & 0x400) != 0 )
    LOBYTE(v9) = sub_40A0(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a3) & v9;
  if ( (v10 & 0x4000) != 0 )
    remember_problem();
  if ( (v10 & 4) == 0 || (unsigned __int8)sub_40A0(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3) )
  {
    if ( (v10 & 8) == 0 )
      goto LABEL_30;
  }
  else
  {
    if ( (v10 & 8) == 0 )
      goto LABEL_26;
    LOBYTE(v9) = 0;
  }
  if ( !(unsigned __int8)sub_40A0(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a3) )
  {
LABEL_26:
    LOBYTE(v9) = 0;
    if ( (v10 & 0x10) == 0 )
      return 1;
    goto LABEL_27;
  }
LABEL_30:
  if ( (v10 & 0x10) != 0 )
  {
LABEL_27:
    if ( !(unsigned __int8)sub_40A0(a1, a2, (unsigned __int8 *)(a2 + 120), 0, a3) )
      return 1;
  }
  if ( !(_BYTE)v9 )
    return 1;
LABEL_2:
  if ( (get_flags_ex() & 0x10000) == 0 )
    goto LABEL_9;
  if ( *(_QWORD *)(a2 + 16) <= 3u )
    goto LABEL_9;
  flags = get_flags_ex();
  if ( (flags & 0x10000) == 0 || (~BYTE1(flags) & 6) != 0 )
    goto LABEL_9;
  v7 = -67174401;
  if ( _bittest64(&v7, (unsigned int)get_dword() >> 26) )
  {
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 || _bittest64(&v7, (unsigned int)get_dword() >> 26) )
LABEL_9:
      add_cref();
  }
  else if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    dword = get_dword();
    if ( dword >> 26 == 18 && (dword & 0x200) != 0 )
      goto LABEL_9;
  }
  return 1;
}

