__int64 __fastcall sub_8690(__int64 a1, const void *a2, double a3)
{
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r12d
  int v6; // r15d
  int v7; // r14d
  int v9; // r12d
  char v10; // cl
  int v11; // r13d
  __int64 func; // rax
  int v13; // edx
  unsigned int v14; // r10d
  int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // eax
  char v19; // al
  unsigned int v20; // r10d
  int v21; // ecx
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r13
  int v25; // eax
  int auto_state; // eax
  __int64 sp_delta; // rax
  __int64 v28; // rax
  int v29; // [rsp+8h] [rbp-350h]
  int v30; // [rsp+Ch] [rbp-34Ch]
  int v31; // [rsp+10h] [rbp-348h]
  int v32; // [rsp+14h] [rbp-344h]
  __int64 v33; // [rsp+18h] [rbp-340h]
  __int64 v34; // [rsp+18h] [rbp-340h]
  __int64 v35; // [rsp+20h] [rbp-338h]
  unsigned int v36; // [rsp+20h] [rbp-338h]
  unsigned int v37; // [rsp+20h] [rbp-338h]
  __int64 v38; // [rsp+20h] [rbp-338h]
  int v39; // [rsp+28h] [rbp-330h]
  __int64 v40; // [rsp+38h] [rbp-320h] BYREF
  __m128i v41[23]; // [rsp+40h] [rbp-318h] BYREF
  _BYTE v42[360]; // [rsp+1B0h] [rbp-1A8h] BYREF
  unsigned __int64 v43; // [rsp+318h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  qmemcpy(v41, a2, 0x168u);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(v3 + 104);
  if ( v41[1].m128i_u16[4] >= v4 && v41[1].m128i_u16[4] < *(int *)(v3 + 108) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v41[1].m128i_u16[4] - v4) + 8);
    v7 = v9 & 0x100;
    v6 = v9 & 0x4000;
    *(_BYTE *)(a1 + 124) = ~(_BYTE)v9;
    *(_BYTE *)(a1 + 124) &= 1u;
    get_flags_ex();
    v31 = v9 & 0x200;
    v32 = v9 & 0x400;
    v29 = v9 & 4;
    v10 = v9;
    v5 = v9 & 0x10;
    v30 = v10 & 8;
    if ( v41[1].m128i_i16[4] <= 0x38u )
    {
      if ( v41[1].m128i_i16[4] )
      {
        switch ( v41[1].m128i_i16[4] )
        {
          case 1:
          case 3:
            goto LABEL_8;
          case 0x29:
LABEL_54:
            if ( !(unsigned __int8)getinf_flag()
              || (unsigned int)get_auto_state() != 40
              || (v41[2].m128i_i64[1] & 0xFFFF00000000FF00LL) != 0x17000000000100LL )
            {
              break;
            }
            if ( v41[5].m128i_i8[1] != 4 || v41[7].m128i_i8[0] != 23 )
            {
              sub_7480((__int64)"emu: lea with R7 and unknown 2nd operand at %a", a3);
              break;
            }
            if ( get_func() && !get_sp_delta() )
              goto LABEL_114;
            break;
          case 0x2B:
          case 0x2D:
LABEL_34:
            if ( (v41[2].m128i_i64[1] & 0xFFFF00000000FF00LL) == 0x17000000000100LL
              && v41[5].m128i_i8[1] == 5
              && !(unsigned __int8)is_defarg() )
            {
              op_offset();
            }
            if ( (unsigned int)sub_7160((__int64)v41, 0, 43, 2, 1089, 5, -1) )
            {
              v40 = (v41[5].m128i_i64[1] << 16) + 0x1000000;
              sub_72A0(&v40);
            }
            if ( (unsigned int)sub_7160((__int64)v41, 0, 43, 2, 1090, 0, -1) )
            {
              v40 = 0;
              qmemcpy(v42, v41, sizeof(v42));
              if ( v41[5].m128i_i8[1] == 5
                || v41[5].m128i_i8[1] == 1
                && !v41[2].m128i_i8[13]
                && (unsigned int)sub_7160((__int64)v41, 1, 43, 1, v41[5].m128i_u16[3], 5, -1) )
              {
                v40 = (v41[5].m128i_i64[1] << 16) + 0x1000000;
              }
              sub_72A0(&v40);
              if ( v41[5].m128i_i8[1] == 5
                && decode_prev_insn() != -1
                && ((v41[1].m128i_i16[4] - 43) & 0xFFFD) == 0
                && v41[2].m128i_i8[9] == 1
                && v41[5].m128i_i8[1] == 5
                && v41[2].m128i_i8[13] == 1
                && !(unsigned __int8)is_defarg() )
              {
                op_offset();
              }
              qmemcpy(v41, v42, 0x168u);
              get_flags_ex();
            }
            if ( (unsigned int)sub_7160((__int64)v41, 0, 43, 2, 1091, 5, -1) )
            {
              qmemcpy(v42, v41, sizeof(v42));
              v40 = v41[5].m128i_i64[1] << 16;
              sub_72A0(&v40);
              if ( decode_prev_insn() != -1
                && ((v41[1].m128i_i16[4] - 43) & 0xFFFD) == 0
                && v41[2].m128i_i8[9] == 1
                && v41[5].m128i_i8[1] == 5
                && v41[2].m128i_i8[13] == 1
                && !(unsigned __int8)is_defarg() )
              {
                op_offset();
              }
              qmemcpy(v41, v42, 0x168u);
              get_flags_ex();
            }
            if ( ((v41[1].m128i_i16[4] - 43) & 0xFFFD) == 0
              && v41[2].m128i_i8[9] == 1
              && v41[5].m128i_i8[1] == 5
              && v41[2].m128i_i8[13] == 1 )
            {
              qmemcpy(v42, v41, sizeof(v42));
              v35 = v41[5].m128i_i64[1];
              if ( (unsigned int)sub_7160((__int64)v41, 1, 43, 2, 1090, 1, -1) )
              {
                if ( !v41[2].m128i_i8[13] )
                {
                  if ( (unsigned int)sub_7160((__int64)v41, 1, 43, 1, v41[5].m128i_u16[3], 5, -1) )
                  {
                    v40 = v35 + (v41[5].m128i_i64[1] << 16) + 0x1000000;
                    sub_72A0(&v40);
                    qmemcpy(v41, v42, 0x168u);
                    get_flags_ex();
                    if ( !(unsigned __int8)is_defarg() )
                      op_offset();
                  }
                }
              }
              qmemcpy(v41, v42, 0x168u);
              get_flags_ex();
            }
            if ( !(unsigned int)sub_7160((__int64)v41, 0, 43, 1, -1, 5, 0) )
              break;
            qmemcpy(v42, v41, sizeof(v42));
            v11 = (v41[2].m128i_u16[7] - 3) >> 1;
            if ( (unsigned int)sub_7160((__int64)v41, 1, 43, 1, 2 * v11 + 2, 2, 1089) )
            {
              if ( (unsigned int)sub_7160((__int64)v41, 1, 43, 1, v11 + 16, 5, -1) )
              {
                get_flags_ex();
                if ( !(unsigned __int8)is_defarg() )
                  goto LABEL_76;
              }
            }
            goto LABEL_48;
          case 0x36:
          case 0x38:
LABEL_30:
            if ( v41[2].m128i_i8[9] == 3 )
            {
              if ( (unsigned __int16)(v41[2].m128i_i16[7] - 8) <= 1u )
              {
                func = get_func();
                v13 = v41[4].m128i_i8[8];
                v14 = 0;
                v15 = 0;
                v16 = func;
                v17 = 7;
                do
                {
                  if ( _bittest(&v13, v17) )
                  {
                    ++v15;
                    v14 = v17;
                  }
                }
                while ( v17-- != 0 );
                if ( v15 )
                {
                  v39 = v15;
                  v36 = v14;
                  v33 = v16;
                  v19 = getinf_flag();
                  v20 = v36;
                  v21 = v39;
                  if ( v19 )
                  {
                    auto_state = get_auto_state();
                    v20 = v36;
                    v21 = v39;
                    if ( v33 )
                    {
                      if ( auto_state == 40 )
                      {
                        sp_delta = get_sp_delta();
                        v20 = v36;
                        v21 = v39;
                        if ( !sp_delta )
                        {
                          v28 = get_func();
                          v20 = v36;
                          v21 = v39;
                          if ( v28 )
                          {
                            add_auto_stkpnt();
                            v21 = v39;
                            v20 = v36;
                          }
                        }
                      }
                    }
                  }
                  if ( v41[1].m128i_i16[4] == 56 && v21 == 2 )
                  {
                    v22 = v41[4].m128i_i8[8];
                    if ( _bittest(&v22, v20 + 1) )
                    {
                      v37 = v20;
                      qmemcpy(v42, v41, sizeof(v42));
                      if ( (unsigned int)sub_7160((__int64)v41, 1, 43, 1, (int)(v20 + 17), 5, -1) )
                      {
                        v23 = (int)(v37 + 16);
                        v38 = v41[5].m128i_i64[1];
                        if ( (unsigned int)sub_7160((__int64)v41, 1, 43, 1, v23, 5, -1) )
                        {
                          v40 = v41[5].m128i_i64[1] + (v38 << 16) + 0x1000000;
                          sub_72A0(&v40);
                          if ( !(unsigned __int8)is_defarg() )
LABEL_76:
                            op_offset();
                        }
                      }
LABEL_48:
                      qmemcpy(v41, v42, 0x168u);
                    }
                  }
                }
                break;
              }
            }
            else if ( v41[2].m128i_i8[9] == 2 )
            {
              v24 = get_func();
              if ( !(unsigned __int8)getinf_flag() )
                break;
              v25 = get_auto_state();
              if ( !v24 || v25 != 40 || get_sp_delta() || !get_func() )
                break;
LABEL_90:
              add_auto_stkpnt();
              break;
            }
            sub_7480((__int64)"emu: strange push/pop instruction operand at %a", a3);
            break;
          default:
            break;
        }
      }
LABEL_9:
      if ( v7 )
        sub_7610(a1, (__int64)v41, (const __m128i *)&v41[2].m128i_u64[1], 1, a3);
      if ( v31 )
        sub_7610(a1, (__int64)v41, &v41[5], 1, a3);
      if ( v32 )
        sub_7610(a1, (__int64)v41, (const __m128i *)&v41[7].m128i_u64[1], 1, a3);
      if ( v6 )
        remember_problem();
      if ( v29 )
        sub_7610(a1, (__int64)v41, (const __m128i *)&v41[2].m128i_u64[1], 0, a3);
      if ( v30 )
        sub_7610(a1, (__int64)v41, &v41[5], 0, a3);
      if ( v5 )
        sub_7610(a1, (__int64)v41, (const __m128i *)&v41[7].m128i_u64[1], 0, a3);
      goto LABEL_23;
    }
    if ( v41[1].m128i_i16[4] != 67 )
      goto LABEL_9;
LABEL_8:
    if ( !(unsigned __int8)getinf_flag()
      || (unsigned int)get_auto_state() != 40
      || (v41[2].m128i_i64[1] & 0xFFFF00000000FF00LL) != 0x17000000000100LL )
    {
      goto LABEL_9;
    }
    if ( v41[5].m128i_i8[1] != 5 )
    {
      sub_7480((__int64)"emu: add/adds/sub with R7 and non-imm operand at %a", a3);
      goto LABEL_9;
    }
    v34 = get_func();
    if ( !(unsigned __int8)getinf_flag() || (unsigned int)get_auto_state() != 40 || !v34 || get_sp_delta() )
      goto LABEL_9;
LABEL_114:
    if ( get_func() )
      goto LABEL_90;
    goto LABEL_9;
  }
  *(_BYTE *)(a1 + 124) = 1;
  get_flags_ex();
  if ( v41[1].m128i_i16[4] > 0x38u )
  {
    if ( v41[1].m128i_i16[4] != 67 )
      goto LABEL_23;
LABEL_7:
    v30 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v29 = 0;
    v32 = 0;
    v31 = 0;
    goto LABEL_8;
  }
  if ( v41[1].m128i_i16[4] )
  {
    switch ( v41[1].m128i_i16[4] )
    {
      case 1:
      case 3:
        goto LABEL_7;
      case 0x29:
        v30 = 0;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v29 = 0;
        v32 = 0;
        v31 = 0;
        goto LABEL_54;
      case 0x2B:
      case 0x2D:
        v30 = 0;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v29 = 0;
        v32 = 0;
        v31 = 0;
        goto LABEL_34;
      case 0x36:
      case 0x38:
        v30 = 0;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v29 = 0;
        v32 = 0;
        v31 = 0;
        goto LABEL_30;
      default:
        break;
    }
  }
LABEL_23:
  if ( *(_BYTE *)(a1 + 124) )
    add_cref();
  return 1;
}

