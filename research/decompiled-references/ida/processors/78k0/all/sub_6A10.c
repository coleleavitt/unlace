__int64 __fastcall sub_6A10(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // r15d
  char v7; // bp
  char v8; // bl

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    is_forced_operand();
    is_forced_operand();
    *(_BYTE *)(a1 + 224) = 1;
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
  v7 = is_forced_operand();
  v8 = is_forced_operand();
  *(_BYTE *)(a1 + 224) = ~(_BYTE)v6;
  *(_BYTE *)(a1 + 224) &= 1u;
  if ( (v6 & 0x100) != 0 )
    sub_6810(a1, (unsigned __int8 *)(a2 + 40), v7, 1, a2, a3);
  if ( (v6 & 0x200) != 0 )
    sub_6810(a1, (unsigned __int8 *)(a2 + 80), v8, 1, a2, a3);
  if ( (v6 & 0x4000) != 0 )
    remember_problem();
  if ( (v6 & 4) != 0 )
    sub_6810(a1, (unsigned __int8 *)(a2 + 40), v7, 0, a2, a3);
  if ( (v6 & 8) == 0 )
  {
LABEL_15:
    if ( !*(_BYTE *)(a1 + 224) )
      return 1;
    goto LABEL_13;
  }
  sub_6810(a1, (unsigned __int8 *)(a2 + 80), v8, 0, a2, a3);
  if ( *(_BYTE *)(a1 + 224) )
LABEL_13:
    add_cref();
  return 1;
}

