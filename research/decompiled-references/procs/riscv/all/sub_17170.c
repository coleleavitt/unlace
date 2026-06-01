__int64 __fastcall sub_17170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  int v11; // esi
  __int64 v12; // rbx
  char does_return; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  unsigned __int8 *v19; // rbx
  _DWORD *v20; // r13
  unsigned __int8 *v21; // r14
  unsigned __int8 *v22; // rbp
  _DWORD *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v30; // r13
  __int64 v31; // rax
  char *v32; // rbp
  unsigned __int64 v33; // r14
  char *v34; // rbp
  unsigned int dword; // eax
  unsigned int v36; // edx
  int v37; // ecx
  __int64 func; // rax
  __int64 v39; // rbx
  unsigned int v40; // ebp
  int v41; // ebx
  __int64 v42; // rax
  unsigned __int64 v43; // r13
  _QWORD v44[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned __int16 *)(a2 + 24);
  v9 = *(unsigned __int16 *)(a2 + 24);
  v44[1] = __readfsqword(0x28u);
  v11 = *(_DWORD *)(v7 + 104);
  if ( v8 >= v11 && v8 < *(_DWORD *)(v7 + 108) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v8 - v11) + 8);
    if ( (unsigned __int16)v9 > 0xA5u )
      goto LABEL_25;
  }
  else if ( (unsigned __int16)v9 > 0xA5u )
  {
    goto LABEL_25;
  }
  if ( (unsigned __int16)v9 > 0x8Bu )
  {
    LOWORD(v9) = v9 - 140;
    switch ( v9 )
    {
      case 0LL:
      case 2LL:
      case 24LL:
      case 25LL:
        goto LABEL_11;
      case 1LL:
        goto LABEL_38;
      case 23LL:
        goto LABEL_8;
      default:
        goto LABEL_25;
    }
    goto LABEL_11;
  }
  if ( (_WORD)v9 == 4 )
  {
LABEL_38:
    if ( !(unsigned __int8)sub_16370(a1, a2) )
      goto LABEL_11;
    goto LABEL_39;
  }
  if ( (unsigned __int16)v9 > 4u )
  {
    if ( (unsigned __int16)(v9 - 41) <= 2u )
      goto LABEL_11;
    goto LABEL_25;
  }
  if ( (_WORD)v9 != 3 )
  {
LABEL_25:
    v18 = *(_QWORD *)(a2 + 16);
    if ( *(_DWORD *)(a2 + 24) != 262265 || v18 <= 0xB )
      goto LABEL_10;
    v30 = v18 - 12;
    v31 = getseg(v18 - 12);
    if ( v31 )
    {
      v32 = (char *)&unk_2B090;
      if ( *(_BYTE *)(v31 + 43) == 2 )
        v32 = (char *)&unk_2B0A0;
      v33 = v18 - 12;
      v34 = &v32[-v18];
      while ( 1 )
      {
        dword = get_dword(v33);
        v36 = *(_DWORD *)&v34[v33 + 12];
        v37 = 4;
        do
        {
          if ( (_BYTE)v36 != 0xFF )
          {
            if ( (_BYTE)v36 == 0xFE )
            {
              if ( (dword & 0xF) != 0xE )
                goto LABEL_39;
            }
            else if ( (_BYTE)v36 != (_BYTE)dword )
            {
              goto LABEL_39;
            }
          }
          dword >>= 8;
          v36 >>= 8;
          --v37;
        }
        while ( v37 );
        if ( v33 == v18 )
          break;
        v33 += 4LL;
      }
      v40 = get_dword(v18 - 8);
      v41 = get_dword(v18 - 12);
      v42 = sub_BC00(v40 >> 20, 11);
      v43 = sub_BC00((v41 & 0xFFFFF000) + v42, 31) + v30;
      if ( (unsigned __int8)is_loaded(v43) )
      {
        get_dword(v43);
        goto LABEL_11;
      }
    }
LABEL_39:
    v18 = *(_QWORD *)(a2 + 16);
LABEL_10:
    add_cref(v18, v18 + *(unsigned __int16 *)(a2 + 26), 21);
    goto LABEL_11;
  }
LABEL_8:
  if ( *(_WORD *)(a2 + 46) )
  {
    v12 = *(_QWORD *)(a2 + 96);
    add_cref(*(_QWORD *)(a2 + 16), v12, 17);
    does_return = func_does_return(v12);
    v18 = *(_QWORD *)(a2 + 16);
    if ( !does_return )
    {
      set_noret_insn(*(_QWORD *)(a2 + 16), 1, v14, v15, v16, v17);
      goto LABEL_11;
    }
    goto LABEL_10;
  }
LABEL_11:
  v19 = (unsigned __int8 *)(a2 + 40);
  v20 = &unk_2B0C0;
  v21 = (unsigned __int8 *)(a2 + 200);
  v22 = (unsigned __int8 *)(a2 + 40);
  do
  {
    if ( (*v20 & v6) != 0 )
      sub_16AF0(a1, a2, v22, 1u);
    v22 += 40;
    ++v20;
  }
  while ( v22 != v21 );
  v23 = &unk_2B0E0;
  do
  {
    v24 = *v23 & v6;
    if ( (*v23 & v6) != 0 )
      sub_16AF0(a1, a2, v19, 0);
    v19 += 40;
    ++v23;
  }
  while ( v19 != v21 );
  if ( (*(_BYTE *)(a1 + 468) & 4) != 0 )
  {
    v44[0] = -1;
    if ( (unsigned __int8)sub_268A0(a1, a2, v44) )
      sub_1FA50(a1, v44[0], *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26));
  }
  if ( (unsigned __int8)getinf_flag(10, 4096, v24, v7, a5, a6) )
  {
    if ( (unsigned int)get_auto_state() == 40 )
    {
      func = get_func(*(_QWORD *)(a2 + 16));
      v39 = func;
      if ( func )
      {
        if ( !(unsigned __int8)recalc_spd_for_basic_block(func, *(_QWORD *)(a2 + 16)) )
          sub_16900(a1, v39, a2);
      }
    }
  }
  if ( (unsigned __int8)getinf_flag(10, 512, v25, v26, v27, v28)
    && (unsigned int)get_auto_state() == 40
    && *(_WORD *)(a2 + 24) == 19
    && *(_BYTE *)(a2 + 81) == 1
    && (*(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 2) )
  {
    sub_16150(a1, a2, (unsigned __int8 *)(a2 + 120), *(unsigned __int16 *)(a2 + 86), *(_QWORD *)(a2 + 128));
  }
  return 1;
}
