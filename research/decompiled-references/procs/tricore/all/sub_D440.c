__int64 __fastcall sub_D440(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v6; // ecx
  int v7; // r12d
  bool v8; // al
  __int16 v9; // ax
  __int64 flags; // rax
  __int16 v12; // r14
  __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 func; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-228h] BYREF
  __m128i si128; // [rsp+8h] [rbp-220h]
  __int128 v25; // [rsp+18h] [rbp-210h]
  __int64 v26; // [rsp+28h] [rbp-200h]
  __int64 v27; // [rsp+30h] [rbp-1F8h]
  __int64 v28; // [rsp+38h] [rbp-1F0h]
  __int64 v29; // [rsp+40h] [rbp-1E8h]
  __int64 v30; // [rsp+48h] [rbp-1E0h]
  __int64 v31; // [rsp+50h] [rbp-1D8h]
  __int64 v32; // [rsp+58h] [rbp-1D0h]
  __int64 v33; // [rsp+60h] [rbp-1C8h]
  __int128 v34; // [rsp+68h] [rbp-1C0h]
  __int128 v35; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 i; // [rsp+90h] [rbp-198h]
  __int64 v37; // [rsp+98h] [rbp-190h]
  __int64 v38; // [rsp+A0h] [rbp-188h]
  _BYTE v39[6]; // [rsp+A8h] [rbp-180h] BYREF
  __int16 v40; // [rsp+AEh] [rbp-17Ah]
  char v41; // [rsp+D1h] [rbp-157h]
  __int16 v42; // [rsp+D6h] [rbp-152h]
  unsigned __int64 v43; // [rsp+1E8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v43 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(v3 + 104);
  if ( v4 >= v6 && v4 < *(_DWORD *)(v3 + 108) )
  {
    v7 = (*(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v6) + 8) >> 2) & 1;
    v8 = (*(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v6) + 8) & 1) == 0;
  }
  else
  {
    LOBYTE(v7) = 0;
    v8 = 1;
  }
  *(_BYTE *)(a1 + 362) = v8;
  sub_B5E0(a1, a2, (unsigned __int8 *)(a2 + 40), v7);
  sub_B5E0(a1, a2, (unsigned __int8 *)(a2 + 80), 0);
  sub_B5E0(a1, a2, (unsigned __int8 *)(a2 + 120), 0);
  sub_B5E0(a1, a2, (unsigned __int8 *)(a2 + 160), 0);
  sub_B5E0(a1, a2, (unsigned __int8 *)(a2 + 200), 0);
  if ( *(_BYTE *)(a1 + 362) )
    add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  if ( (unsigned __int8)getinf_flag(10, 512) )
  {
    if ( (unsigned int)get_auto_state() == 40 )
    {
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( !(unsigned __int8)is_defarg(flags, 2)
        && *(_WORD *)(a2 + 24) == 5
        && *(_BYTE *)(a2 + 121) == 5
        && *(_BYTE *)(a2 + 81) == 1 )
      {
        v12 = *(_WORD *)(a2 + 86);
        if ( v12 == 26 )
        {
LABEL_33:
          if ( (unsigned __int8)insn_create_stkvar(a2, a2 + 120, *(_QWORD *)(a2 + 128), 0) )
            op_stkvar(*(_QWORD *)(a2 + 16), 2);
        }
        else
        {
          v13 = *(_QWORD *)(a2 + 16);
          v37 = 0;
          v14 = (unsigned __int64 *)v39;
          v35 = -1;
          v38 = 0;
          do
          {
            *(_WORD *)v14 = 0;
            v14 += 5;
            *((_WORD *)v14 - 19) = 0;
            *((_WORD *)v14 - 18) = 0;
            *((_DWORD *)v14 - 2) = 0;
            *((_WORD *)v14 - 17) = 0;
            *((_OWORD *)v14 - 2) = 0;
            *(v14 - 2) = 0;
          }
          while ( v14 != &v43 );
          for ( i = v13; ; v13 = i )
          {
            v15 = get_flags_ex(v13, 4);
            if ( (v15 & 0x1000) != 0 || (v15 & 0x10000) == 0 || decode_prev_insn(&v35, i, 0.0) == -1 )
              break;
            if ( v39[1] == 1 && v12 == v40 )
            {
              if ( (unsigned int)(unsigned __int16)v37 - 107 > 1 || v41 != 1 || v42 != 26 )
                break;
              goto LABEL_33;
            }
          }
        }
      }
    }
  }
  if ( (unsigned __int8)getinf_flag(10, 4096) )
  {
    if ( (unsigned int)get_auto_state() == 40 )
    {
      func = get_func(*(_QWORD *)(a2 + 16));
      v21 = func;
      if ( func )
      {
        if ( !(unsigned __int8)recalc_spd_for_basic_block(func, *(_QWORD *)(a2 + 16)) )
          sub_B9C0(a1, v21, a2);
      }
    }
  }
  sub_CEE0(a1, a2, 0, v7);
  sub_CEE0(a1, a2, 1u, 0);
  if ( *(_DWORD *)(a2 + 24) == 131144 && (unsigned __int8)getinf_flag(10, 4) )
  {
    v16 = *(_QWORD *)(a2 + 16);
    v23 = 0x800000;
    si128 = _mm_load_si128((const __m128i *)&xmmword_15FE0);
    v25 = -1;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0xFFFFFFFFLL;
    v30 = 0;
    v31 = 2;
    v32 = -1;
    v33 = 0;
    v34 = 0;
    if ( (int)get_flags_ex(v16, 0) < 0
      && (v17 = *(__int64 **)(a2 + 16), get_switch_info(&v23, v17) > 0)
      && (v23 & 0x800000) != 0
      && (int)v31 > 1
      && (v23 & 0x10) != 0 )
    {
      v19 = v33;
      if ( v33 )
      {
LABEL_42:
        *(_QWORD *)&v34 = 0;
        qfree(v19, v17, v18, 0.0);
      }
    }
    else
    {
      v17 = &v23;
      v22 = sub_A860(0x28u, &v23, a2);
      if ( v22 != -1 )
      {
        if ( v22 == 1 || (v17 = (__int64 *)a2, (unsigned __int8)check_for_table_jump(&v23, a2, &off_22070, 2, 0, 0)) )
        {
          set_switch_info(*(_QWORD *)(a2 + 16), &v23);
          v17 = &v23;
          create_switch_table(*(_QWORD *)(a2 + 16), &v23);
        }
      }
      v19 = v33;
      if ( v33 )
        goto LABEL_42;
    }
  }
  v9 = *(_WORD *)(a2 + 24);
  if ( v9 == 72 || v9 == 207 || v9 == 32 )
    sub_D2F0(a1, a2);
  return 1;
}
