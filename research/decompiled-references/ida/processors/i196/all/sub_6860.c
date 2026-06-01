__int64 __fastcall sub_6860(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v6; // r15d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
  {
    *(_DWORD *)(a1 + 120) = 1;
    goto LABEL_4;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
  *(_DWORD *)(a1 + 120) = (v6 & 1) == 0;
  if ( (v6 & 0x100) != 0 )
    sub_6420(a1, (const void *)a2, (unsigned __int8 *)(a2 + 40), 1);
  if ( (v6 & 0x200) != 0 )
    sub_6420(a1, (const void *)a2, (unsigned __int8 *)(a2 + 80), 1);
  if ( (v6 & 0x400) != 0 )
    sub_6420(a1, (const void *)a2, (unsigned __int8 *)(a2 + 120), 1);
  if ( (v6 & 0x4000) != 0 )
    remember_problem();
  if ( (v6 & 4) != 0 )
    sub_6420(a1, (const void *)a2, (unsigned __int8 *)(a2 + 40), 0);
  if ( (v6 & 8) != 0 )
    sub_6420(a1, (const void *)a2, (unsigned __int8 *)(a2 + 80), 0);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_4:
    if ( *(_WORD *)(a2 + 24) != 79 )
      goto LABEL_5;
LABEL_21:
    split_sreg_range();
    split_sreg_range();
    if ( !*(_DWORD *)(a1 + 120) )
      return 1;
LABEL_22:
    add_cref();
    return 1;
  }
  sub_6420(a1, (const void *)a2, (unsigned __int8 *)(a2 + 120), 0);
  if ( *(_WORD *)(a2 + 24) == 79 )
    goto LABEL_21;
LABEL_5:
  if ( *(_DWORD *)(a1 + 120) )
    goto LABEL_22;
  return 1;
}

