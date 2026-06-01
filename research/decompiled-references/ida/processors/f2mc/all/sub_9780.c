__int64 __fastcall sub_9780(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v7; // r12d
  __int16 v8; // ax
  unsigned __int64 *v9; // rax
  int v10; // edx
  int j; // ecx
  int v12; // eax
  int v13; // edx
  int i; // ecx
  int v15; // eax
  __int64 v16; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v17; // [rsp+178h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v17 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v5 <= v4 && v4 < *(_DWORD *)(v3 + 108) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 244) = ~*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_BYTE *)(a1 + 244) &= 1u;
    if ( (v7 & 0x100) != 0 )
      sub_9520(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a3);
    if ( (v7 & 0x200) != 0 )
      sub_9520(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a3);
    if ( (v7 & 0x400) != 0 )
      sub_9520(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a3);
    if ( (v7 & 4) != 0 )
      sub_9520(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3);
    if ( (v7 & 8) != 0 )
      sub_9520(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a3);
    if ( (v7 & 0x10) != 0 )
      sub_9520(a1, a2, (unsigned __int8 *)(a2 + 120), 0, a3);
  }
  else
  {
    *(_BYTE *)(a1 + 244) = 1;
  }
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x1E000000000100LL )
  {
    set_op_type();
    get_sreg();
    get_item_end();
    split_sreg_range();
  }
  if ( *(_WORD *)(a2 + 24) == 1 && *(_BYTE *)(a2 + 41) == 1 )
  {
    v8 = *(_WORD *)(a2 + 46);
    if ( ((unsigned __int16)(v8 - 25) <= 4u || v8 == 31) && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x100 )
    {
      v9 = (unsigned __int64 *)&v16;
      do
      {
        *(_WORD *)v9 = 0;
        v9 += 5;
        *((_WORD *)v9 - 19) = 0;
        *((_WORD *)v9 - 18) = 0;
        *((_DWORD *)v9 - 2) = 0;
        *((_WORD *)v9 - 17) = 0;
        *((_OWORD *)v9 - 2) = 0;
        *(v9 - 2) = 0;
      }
      while ( v9 != &v17 );
      decode_prev_insn();
    }
  }
  if ( (unsigned __int8)segtype() == 1 )
  {
    *(_BYTE *)(a1 + 244) = 0;
  }
  else if ( *(_BYTE *)(a1 + 244) )
  {
    add_cref();
  }
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_BYTE *)(a1 + 244) )
    {
      if ( get_func() )
      {
        switch ( *(_WORD *)(a2 + 24) )
        {
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'p':
          case 'q':
          case 'v':
            goto LABEL_44;
          case 'o':
            get_spd();
            add_auto_stkpnt();
            return 1;
          case 'r':
            if ( *(_BYTE *)(a2 + 41) == 8 )
            {
              v13 = 0;
              for ( i = 0; i != 8; ++i )
              {
                v15 = (int)*(unsigned __int16 *)(a2 + 46) >> i;
                v13 += v15 & 1;
              }
            }
            goto LABEL_44;
          case 's':
            if ( *(_BYTE *)(a2 + 41) == 8 )
            {
              v10 = 0;
              for ( j = 0; j != 8; ++j )
              {
                v12 = (int)*(unsigned __int16 *)(a2 + 46) >> j;
                v10 += v12 & 1;
              }
            }
LABEL_44:
            add_auto_stkpnt();
            break;
          default:
            return 1;
        }
      }
    }
    else
    {
      recalc_spd();
    }
  }
  return 1;
}

