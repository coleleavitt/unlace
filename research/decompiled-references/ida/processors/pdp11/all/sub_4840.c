__int64 __fastcall sub_4840(__int64 a1, __int64 a2)
{
  char v2; // r13
  char v3; // al
  __int64 v4; // rdx
  char v5; // r12
  int v6; // eax
  int v7; // ecx
  int v9; // r14d
  __int64 v10; // rax

  v2 = is_forced_operand();
  v3 = is_forced_operand();
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v3;
  v6 = *(unsigned __int16 *)(a2 + 24);
  v7 = *(_DWORD *)(v4 + 104);
  if ( v6 >= v7 )
  {
    if ( v6 < *(_DWORD *)(v4 + 108) )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(v4 + 112) + 16LL * (v6 - v7) + 8);
      *(_BYTE *)(a1 + 140) = ~(_BYTE)v9;
      *(_BYTE *)(a1 + 140) &= 1u;
      if ( (v9 & 0x100) != 0 )
        sub_4280(a1, a2, (unsigned __int8 *)(a2 + 40), v2, 1);
      if ( (v9 & 0x200) != 0 )
        sub_4280(a1, a2, (unsigned __int8 *)(a2 + 80), v5, 1);
      if ( (v9 & 0x4000) != 0 )
        remember_problem();
      if ( (v9 & 4) != 0 )
        sub_4280(a1, a2, (unsigned __int8 *)(a2 + 40), v2, 0);
      if ( (v9 & 8) != 0 )
        sub_4280(a1, a2, (unsigned __int8 *)(a2 + 80), v5, 0);
    }
    else
    {
      *(_BYTE *)(a1 + 140) = 1;
    }
    if ( *(_WORD *)(a2 + 24) != 73 )
    {
      if ( !*(_BYTE *)(a1 + 140) )
        return 1;
      goto LABEL_3;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 140) = 1;
    if ( *(_WORD *)(a2 + 24) != 73 )
    {
LABEL_3:
      add_cref();
      return 1;
    }
  }
  v10 = *(_QWORD *)(a2 + 48);
  if ( v10 == 254 )
  {
    create_data();
    goto LABEL_3;
  }
  if ( *(_BYTE *)(a1 + 140) && v10 != 232 )
    goto LABEL_3;
  return 1;
}

