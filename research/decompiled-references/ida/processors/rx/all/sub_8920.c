__int64 __fastcall sub_8920(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  bool v5; // dl
  int v6; // r14d
  __int64 *v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 *v11; // rbp
  char v13; // al

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v4 <= v3 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    v5 = (v6 & 1) == 0;
  }
  else
  {
    v5 = 1;
    v6 = 0;
  }
  v7 = qword_FA00;
  v8 = a2 + 240;
  *(_BYTE *)(a1 + 128) = v5;
  v9 = a2 + 40;
  v10 = a2 + 40;
  do
  {
    if ( (*(_DWORD *)v7 & v6) != 0 )
      sub_8150(a1, a2, v9);
    v9 += 40;
    v7 = (__int64 *)((char *)v7 + 4);
  }
  while ( v9 != v8 );
  v11 = qword_FA20;
  do
  {
    if ( (*(_DWORD *)v11 & v6) != 0 )
      sub_8150(a1, a2, v10);
    v10 += 40;
    v11 = (__int64 *)((char *)v11 + 4);
  }
  while ( v10 != v8 );
  if ( *(_BYTE *)(a1 + 128) )
    add_cref();
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_BYTE *)(a1 + 128) )
      sub_86B0(a1, a2);
    else
      recalc_spd();
  }
  if ( (unsigned __int8)getinf_flag() )
  {
    if ( (unsigned int)get_auto_state() == 40
      && *(_WORD *)(a2 + 24) == 3
      && (get_flags_ex() & 0xF00000) == 0
      && *(_BYTE *)(a2 + 41) == 5
      && *(_BYTE *)(a2 + 81) == 1
      && !*(_WORD *)(a2 + 86) )
    {
      v13 = *(_BYTE *)(a2 + 121);
      if ( v13 )
      {
        if ( v13 != 1 || *(_WORD *)(a2 + 126) )
        {
          if ( (unsigned __int8)insn_create_stkvar() )
            op_stkvar();
        }
      }
    }
  }
  return 1;
}

