__int64 __fastcall sub_5F50(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // ebp
  char v7; // r12
  char v8; // r13
  char v9; // r14
  __int16 v10; // ax
  __int16 v11; // ax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 || v4 >= *(_DWORD *)(v3 + 108) )
  {
    *(_BYTE *)(a1 + 2996) = 1;
    LOWORD(v6) = 0;
    v7 = is_forced_operand();
    v8 = is_forced_operand();
    v9 = is_forced_operand();
    v11 = *(_WORD *)(a2 + 24);
    if ( v11 != 92 )
    {
      if ( v11 != 138 )
        goto LABEL_18;
      goto LABEL_14;
    }
LABEL_27:
    if ( *(char *)(a2 + 46) < 0 )
      *(_BYTE *)(a1 + 2996) = 0;
    goto LABEL_16;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
  *(_BYTE *)(a1 + 2996) = ~*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
  *(_BYTE *)(a1 + 2996) &= 1u;
  v7 = is_forced_operand();
  v8 = is_forced_operand();
  v9 = is_forced_operand();
  if ( (v6 & 0x100) != 0 )
    sub_5B10(a1, a2, (unsigned __int8 *)(a2 + 40), v7, a3);
  if ( (v6 & 0x200) != 0 )
    sub_5B10(a1, a2, (unsigned __int8 *)(a2 + 80), v8, a3);
  if ( (v6 & 0x400) != 0 )
    sub_5B10(a1, a2, (unsigned __int8 *)(a2 + 120), v9, a3);
  v10 = *(_WORD *)(a2 + 24);
  if ( v10 == 92 )
    goto LABEL_27;
  if ( v10 == 138 )
  {
LABEL_14:
    if ( (get_flags_ex() & 0x800) == 0 )
    {
      a3 = 0.0;
      get_predef_insn_cmt();
    }
  }
LABEL_16:
  if ( (v6 & 0x4000) != 0 )
    remember_problem();
LABEL_18:
  if ( (v6 & 4) != 0 )
    sub_5B10(a1, a2, (unsigned __int8 *)(a2 + 40), v7, a3);
  if ( (v6 & 8) != 0 )
    sub_5B10(a1, a2, (unsigned __int8 *)(a2 + 80), v8, a3);
  if ( (v6 & 0x10) != 0 )
    sub_5B10(a1, a2, (unsigned __int8 *)(a2 + 120), v9, a3);
  if ( *(_BYTE *)(a1 + 2996) )
    add_cref();
  return 1;
}

