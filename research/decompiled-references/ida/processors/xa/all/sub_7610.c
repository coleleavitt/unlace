__int64 __fastcall sub_7610(__int64 a1, __int64 a2, const __m128i *a3, char a4, double a5)
{
  __int64 v5; // r15
  __int64 v8; // r12
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdx
  int v13; // eax
  int v14; // ecx
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int16 v17; // r12
  unsigned __int8 v18; // r14
  int v19; // r14d
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // ebp
  int v23; // ebp
  __int64 v24; // rbp
  int v25; // eax
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // [rsp+28h] [rbp-1E0h]
  __m128i v33; // [rsp+30h] [rbp-1D8h] BYREF
  __m128i v34; // [rsp+40h] [rbp-1C8h]
  __int64 v35; // [rsp+50h] [rbp-1B8h]
  _QWORD v36[45]; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned __int64 v37; // [rsp+1C8h] [rbp-40h]

  v5 = a2;
  v37 = __readfsqword(0x28u);
  get_flags_ex();
  switch ( a3->m128i_i8[1] )
  {
    case 1:
      return v37 - __readfsqword(0x28u);
    case 2:
      goto LABEL_13;
    case 3:
      goto LABEL_7;
    case 4:
      if ( a3->m128i_i16[3] != 2 )
        sub_7410(a2);
      if ( (unsigned __int8)op_adds_xrefs() )
        insn_add_off_drefs();
      if ( !(unsigned __int8)getinf_flag() || (unsigned int)get_auto_state() != 40 || (unsigned __int8)is_defarg() )
        goto LABEL_7;
      v8 = a3[2].m128i_i8[0];
      if ( (_BYTE)v8 != 23 )
        goto LABEL_8;
      if ( a3->m128i_i8[0] == 1 && (unsigned int)sub_7160(a2, 0, 41, 1, 23, 0, -1) || !get_func() )
        goto LABEL_7;
      v15 = _mm_loadu_si128(a3);
      v16 = a3[2].m128i_i64[0];
      v17 = *(_WORD *)(a2 + 24);
      qmemcpy(v36, (const void *)a2, sizeof(v36));
      v33 = v15;
      v35 = v16;
      v18 = a3->m128i_i8[0];
      v34 = _mm_loadu_si128(a3 + 1);
      if ( (int)decode_insn() <= 0 )
        goto LABEL_44;
      if ( v33.m128i_i8[5] == 1 )
      {
        if ( v18 > 1u )
        {
          if ( under_debugger )
            BUG();
          interr();
          goto LABEL_122;
        }
        if ( *(_WORD *)(a2 + 24) == v17 )
        {
          v30 = 40LL * v18;
          v31 = a2 + v30;
          if ( BYTE1(v36[v30 / 8 + 5]) == *(_BYTE *)(a2 + v30 + 41)
            && HIWORD(v36[5 * v18 + 5]) == *(_WORD *)(v31 + 46)
            && LOBYTE(v36[5 * v18 + 9]) == *(_BYTE *)(v31 + 72)
            && v36[5 * v18 + 7] + 2LL == *(_QWORD *)(v31 + 56)
            && BYTE1(v36[5 * (v18 ^ 1u) + 5]) == *(_BYTE *)(a2 + 40LL * (v18 ^ 1u) + 41)
            && HIWORD(v36[5 * (v18 ^ 1u) + 5]) + 1 == *(unsigned __int16 *)(a2 + 40LL * (v18 ^ 1u) + 46) )
          {
            v33.m128i_i8[5] = 2;
          }
        }
      }
      else if ( v17 == 43
             && *(_WORD *)(a2 + 24) == 43
             && v18 == 1
             && *(_BYTE *)(a2 + 81) == 1
             && HIWORD(v36[5]) == *(_WORD *)(a2 + 86)
             && *(_BYTE *)(a2 + 41) == 2
             && *(_QWORD *)(a2 + 56) == 1090
             && (int)decode_insn() > 0
             && *(_WORD *)(a2 + 24) == 43
             && (*(_QWORD *)(a2 + 40) & 0xFF000000FF00LL) == 0x10000000100LL
             && *(_BYTE *)(a2 + 81) == 4
             && *(_QWORD *)(a2 + 96) + 2LL == v36[12] )
      {
        v34.m128i_i64[0] -= 2;
        v33.m128i_i8[5] = 2;
      }
LABEL_44:
      qmemcpy((void *)a2, v36, 0x168u);
      if ( (unsigned __int8)insn_create_stkvar() )
        goto LABEL_48;
      if ( v33.m128i_i8[5] == 2 )
      {
        v33.m128i_i8[5] = 1;
        if ( (unsigned __int8)insn_create_stkvar() )
        {
          v33.m128i_i8[5] = 2;
          insn_create_stkvar();
LABEL_48:
          op_stkvar();
        }
      }
LABEL_7:
      v8 = a3[2].m128i_i8[0];
      if ( (_BYTE)v8 == 23 )
        return v37 - __readfsqword(0x28u);
LABEL_8:
      if ( ((a3->m128i_i16[3] - 2) & 0xFFFD) == 0 )
      {
        qmemcpy(v36, (const void *)a2, sizeof(v36));
        if ( (unsigned int)sub_7160(a2, 1, 43, 1, v8, 5, -1) )
        {
          v33.m128i_i64[0] = *(_QWORD *)(a2 + 88) + 0x1000000LL;
          sub_72A0(v33.m128i_i64);
          if ( !(unsigned __int8)is_defarg() )
            op_offset();
          qmemcpy((void *)a2, v36, 0x168u);
          if ( a3->m128i_i8[5] != 1 )
            goto LABEL_34;
          decode_insn();
LABEL_122:
          qmemcpy((void *)a2, v36, 0x168u);
LABEL_34:
          insn_create_op_data();
          insn_add_dref();
          sub_7370();
LABEL_35:
          qmemcpy((void *)a2, v36, 0x168u);
          return v37 - __readfsqword(0x28u);
        }
        if ( (unsigned int)sub_7160(a2, 0, 65, 8, (char)v8 + 520, 0, -1) )
        {
          v19 = sub_7160(a2, 1, 43, 2, 1090, 5, -1);
          if ( v19 )
          {
            v20 = (*(_QWORD *)(a2 + 88) << 16) + 0x1000000LL;
            v33.m128i_i64[0] = v20;
            if ( !(unsigned int)sub_7160(a2, 1, 43, 1, v8, 5, -1) && !(unsigned int)sub_7160(a2, 0, 41, 1, v8, 4, -1) )
              goto LABEL_35;
            if ( *(_BYTE *)(a2 + 81) == 5 )
              v21 = *(_QWORD *)(a2 + 88);
            else
              v21 = *(_QWORD *)(a2 + 96);
            v33.m128i_i64[0] = v21 + v20;
            goto LABEL_55;
          }
          v32 = 2 * ((char)v8 - 15);
          if ( (unsigned int)sub_7160(a2, 0, 43, 2, 1090, 1, v32) || (unsigned int)sub_7160(a2, 0, 43, 2, 1091, 1, v32) )
          {
            v33.m128i_i64[0] = 0x1000000;
            if ( decode_prev_insn() != -1 && *(_WORD *)(a2 + 24) == 35 && *(_BYTE *)(a2 + 41) == 8 )
            {
              v27 = *(_QWORD *)(a2 + 56);
              if ( (~(_BYTE)v27 & 0xF) == 0 )
                v19 = (v27 & 0xFFF0) == 16 * ((char)v8 - 15);
            }
            v28 = sub_7160(a2, v19, 1, 1, v8, 1, -1);
            if ( (unsigned int)sub_7160(a2, v28, 43, 1, v32 + 1, 5, 0) )
            {
              if ( !(unsigned int)sub_7160(a2, 1, 43, 1, v32, 2, 1089) )
                goto LABEL_35;
            }
            else
            {
              if ( !(unsigned int)sub_7160(a2, 0, 43, 1, (char)v8 + 1, 5, -1)
                && !(unsigned int)sub_7160(a2, 0, 2, 1, (char)v8 + 1, 5, -1) )
              {
                goto LABEL_35;
              }
              v33.m128i_i64[0] = (*(_QWORD *)(a2 + 88) << 16) + 0x1000000LL;
            }
            if ( !(unsigned int)sub_7160(a2, 1, 43, 1, v8, 5, -1) && !(unsigned int)sub_7160(a2, 0, 1, 1, v8, 5, -1) )
              goto LABEL_35;
            v33.m128i_i64[0] += *(_QWORD *)(a2 + 88);
LABEL_55:
            sub_72A0(v33.m128i_i64);
            if ( !(unsigned __int8)is_defarg() )
              op_offset();
            qmemcpy((void *)a2, v36, 0x168u);
            if ( a3->m128i_i8[5] != 1 )
              goto LABEL_34;
            goto LABEL_121;
          }
          if ( !(unsigned int)sub_7160(a2, 0, 43, 1, v8, 5, -1) )
            goto LABEL_35;
          v29 = *(_QWORD *)(a2 + 88);
          v33.m128i_i64[0] = v29;
          if ( !(unsigned int)sub_7160(a2, 1, 43, 2, 1090, 1, -1)
            || *(_BYTE *)(a2 + 45)
            || !(unsigned int)sub_7160(a2, 1, 43, 1, *(unsigned __int16 *)(a2 + 86), 5, -1) )
          {
            goto LABEL_35;
          }
          v33.m128i_i64[0] = v29 + (*(_QWORD *)(a2 + 88) << 16) + 0x1000000;
          sub_72A0(v33.m128i_i64);
          qmemcpy((void *)a2, v36, 0x168u);
          if ( a3->m128i_i8[5] != 1 )
            goto LABEL_34;
        }
        else
        {
          if ( !(unsigned int)sub_7160(a2, 0, 43, 2, 1090, 1, -1) )
            goto LABEL_35;
          if ( *(_BYTE *)(a2 + 85) )
            goto LABEL_35;
          v22 = *(unsigned __int16 *)(a2 + 86);
          if ( decode_prev_insn() == -1 )
            goto LABEL_35;
          if ( *(_WORD *)(a2 + 24) != 35 )
            goto LABEL_35;
          if ( *(_BYTE *)(a2 + 41) != 8 )
            goto LABEL_35;
          if ( (~*(_BYTE *)(a2 + 56) & 0xF) != 0 )
            goto LABEL_35;
          v23 = v22 >> 1;
          if ( (*(_QWORD *)(a2 + 56) & 0xFFF0LL) != 16 * v23 )
            goto LABEL_35;
          if ( !(unsigned int)sub_7160(a2, 1, 65, 8, (char)v8 + 520, 0, -1) )
            goto LABEL_35;
          v24 = v23 + 16;
          v25 = sub_7160(a2, 1, 1, 1, v8, 0, -1);
          if ( !(unsigned int)sub_7160(a2, v25, 43, 1, v24, 5, -1) && !(unsigned int)sub_7160(a2, 0, 2, 1, v24, 5, -1) )
            goto LABEL_35;
          v26 = (((unsigned int)*(_QWORD *)(a2 + 88) << 16) & 0xFF0000)
              + ((unsigned __int64)((*(_QWORD *)(a2 + 88) & 0x8000LL) == 0) << 24);
          v33.m128i_i64[0] = v26;
          if ( !(unsigned int)sub_7160(a2, 1, 43, 1, v8, 5, -1) && !(unsigned int)sub_7160(a2, 0, 1, 1, v8, 5, -1) )
            goto LABEL_35;
          v33.m128i_i64[0] = *(_QWORD *)(a2 + 88) + v26;
          sub_72A0(v33.m128i_i64);
          op_offset();
          qmemcpy((void *)a2, v36, 0x168u);
          if ( a3->m128i_i8[5] != 1 )
            goto LABEL_34;
        }
LABEL_121:
        decode_insn();
        goto LABEL_122;
      }
      return v37 - __readfsqword(0x28u);
    case 5:
      if ( !a4 )
        goto LABEL_23;
      sub_7410(a2);
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v37 - __readfsqword(0x28u);
      return insn_add_off_drefs();
    case 6:
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
      goto LABEL_20;
    case 7:
      if ( !(unsigned __int8)has_insn_feature() )
        return insn_add_cref();
LABEL_20:
      insn_add_cref();
      if ( *(_BYTE *)(a1 + 124) && !(unsigned __int8)func_does_return() )
        *(_BYTE *)(a1 + 124) = 0;
      return v37 - __readfsqword(0x28u);
    case 8:
    case 9:
      v10 = a3[1].m128i_u64[0];
      v11 = v10 >> 3;
      if ( ((v10 >> 3) & 0x40) != 0 )
      {
        v11 = (v10 >> 3) + 960;
      }
      else if ( (v10 & 0x20) == 0 )
      {
        return v37 - __readfsqword(0x28u);
      }
      sub_C080(a1, a2, v11, a3[1].m128i_i64[0] & 7);
LABEL_13:
      insn_create_op_data();
      return insn_add_dref();
    default:
LABEL_23:
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v14 = *(_DWORD *)(v12 + 104);
      if ( v13 >= v14 && v13 < *(_DWORD *)(v12 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 16LL * (v13 - v14));
      return sub_7480((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v5 + 16), a2, a3->m128i_u8[0]);
  }
}

