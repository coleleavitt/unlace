__int64 __fastcall sub_1E310(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v17; // r14
  int v18; // eax
  unsigned int v19; // edx
  char v21; // [rsp+24h] [rbp-64h]
  char v22; // [rsp+24h] [rbp-64h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-58h]

  if ( (unsigned __int8)get_fixup() )
    return 1;
  if ( !a3 )
  {
    sub_1DF00(a1, a2, a4, a5, a6, a7, a8, a9);
    return 1;
  }
  v13 = -1;
  v21 = 0;
  v23 = _mm_load_si128((const __m128i *)&xmmword_57480).m128i_i64[1];
  if ( (unsigned int)(a3 - 8) <= 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( (a6 & 2) != 0 )
      v13 = (a10 + 4) & v17;
    else
      v13 = (a10 + 8) & v17;
    get_dword();
    auto_mark_range();
    a6 = 2;
    if ( !a8 )
      goto LABEL_18;
  }
  else if ( !a8 )
  {
LABEL_18:
    if ( v23 != -1 )
      sel2para();
    v14 = getseg();
    if ( v14 )
    {
      v22 = v21 & 0xFE;
      v24 = *(_QWORD *)(v14 + 48);
      if ( v24 != -1 )
        sel2para();
    }
    else
    {
      v22 = v21 & 0xFE;
      v24 = _mm_load_si128((const __m128i *)&xmmword_57480).m128i_i64[1];
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != v13 && v13 != -1 && (v22 & 1) == 0 && v24 != -1 )
      sel2para();
    set_fixup();
    return 1;
  }
  if ( (*(_BYTE *)(a2 + 364) & 0x50) != 0 )
    goto LABEL_18;
  v18 = sub_195E0(a4, a6);
  v15 = 0;
  if ( a3 != 5 )
  {
    if ( a3 == 6 )
    {
      if ( a6 != 2 )
        return v15;
      if ( (v18 & 0xF800F800) == 0xE800F000 && (a5 & 3) != 0 )
        sub_196C0((__int64)"ARM_THUMB_RELOC_BR22 relocation to non-aligned address at %a (target %a)");
    }
    goto LABEL_31;
  }
  if ( a6 == 2 )
  {
    v19 = a5 - 8 - a4;
    if ( (((_BYTE)a5 - 8 - (_BYTE)a4) & 3) == 0 && ((~v19 & 0xFE000000) == 0 || v19 <= 0x1FFFFFF) )
    {
LABEL_31:
      if ( (*(_BYTE *)(a1 + 13689) & 8) == 0 )
        sub_19660(a4, a6);
      v21 = 2;
      goto LABEL_18;
    }
  }
  return v15;
}

