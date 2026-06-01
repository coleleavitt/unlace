__int64 __fastcall sub_A9D0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  bool v6; // al
  int v7; // r14d
  unsigned __int8 *v8; // r12
  __int64 v9; // rbx
  unsigned __int8 *v10; // r15
  char v11; // al
  __int64 i; // rbx
  char v13; // al
  int v15; // eax
  __int16 flags; // ax
  int v17; // [rsp+Ch] [rbp-3Ch]

  if ( (unsigned __int8)segtype() != 1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(unsigned __int16 *)(a2 + 24);
    v5 = *(_DWORD *)(v3 + 104);
    if ( v5 > v4 || v4 >= *(_DWORD *)(v3 + 108) )
    {
      v17 = 0;
      v6 = 1;
      v7 = 0;
    }
    else
    {
      v7 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
      v17 = v7 & 1;
      v6 = !(*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8) & 1);
    }
    *(_BYTE *)(a1 + 176) = v6;
    v8 = (unsigned __int8 *)(a2 + 40);
    v9 = 0;
    v10 = (unsigned __int8 *)(a2 + 40);
    do
    {
      if ( (*((_DWORD *)qword_11140 + v9) & v7) != 0 )
      {
        v11 = is_forced_operand();
        sub_A210(a1, a2, v10, v11, 1, a3);
      }
      ++v9;
      v10 += 40;
    }
    while ( v9 != 5 );
    for ( i = 0; i != 5; ++i )
    {
      if ( (*((_DWORD *)qword_11160 + i) & v7) != 0 )
      {
        v13 = is_forced_operand();
        sub_A210(a1, a2, v8, v13, 0, a3);
      }
      v8 += 40;
    }
    if ( v17 )
      *(_BYTE *)(a1 + 176) = 0;
    if ( sub_9760(a2, 0) )
    {
      *(_BYTE *)(a1 + 176) = 0;
    }
    else if ( *(_BYTE *)(a1 + 176) )
    {
      add_cref();
    }
    if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
    {
      if ( *(_BYTE *)(a1 + 176) )
        sub_A820(a1, (unsigned __int16 *)a2);
      else
        recalc_spd();
    }
    if ( *(_WORD *)(a2 + 24) == 140 && *(_QWORD *)(a2 + 16) > 7u && (get_flags_ex() & 0x800) == 0 )
    {
      v15 = sub_9340(*(_QWORD *)(a2 + 16) - 8LL, 4);
      if ( v15 >= 0 )
      {
        if ( sub_E9E0(a1, (unsigned int)v15) )
        {
          append_cmt();
          flags = get_flags_ex();
          if ( (flags & 0x1000) != 0 && (flags & 0xC000) != 0x4000 )
            set_name();
        }
      }
    }
  }
  return 1;
}

