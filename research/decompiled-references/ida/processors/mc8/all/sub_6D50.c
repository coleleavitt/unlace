__int64 __fastcall sub_6D50(__int64 *a1, const __m128i *a2, double a3)
{
  __int8 v3; // dl
  __int8 v5; // al
  char v6; // bp
  __int64 (__fastcall *v7)(__int64 *, char); // rdx
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  int v12; // eax
  __int8 v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  __int16 v18; // cx
  int v19; // eax
  __int16 v20; // bp
  __int8 v21; // dl
  int v22; // ecx
  int v23; // r13d
  bool v24; // zf
  char v25; // dl
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int16 v31; // ax
  __int64 v32; // rsi
  __int8 v33; // al
  __int8 v34; // al
  __int16 v35; // bp
  __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // ebp
  int v41; // r13d
  unsigned int v42; // r14d
  unsigned __int8 v43; // r12
  unsigned __int8 v44; // al
  __int64 (__fastcall *v45)(__int64 *, char); // rax
  __int64 v46; // r12
  unsigned __int64 v47; // rdx
  __int64 v48; // r10
  __int64 v49; // rsi
  const char *v50; // rsi
  __int64 (__fastcall *v51)(__int64 *, char); // rax
  __int64 v52; // r12
  unsigned __int64 v53; // rdx
  __int64 v54; // r10
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int8 v62; // [rsp+7h] [rbp-81h]
  unsigned __int8 v63; // [rsp+7h] [rbp-81h]
  unsigned __int64 v64; // [rsp+10h] [rbp-78h]
  unsigned __int64 v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+18h] [rbp-70h]
  __int64 v67; // [rsp+18h] [rbp-70h]
  __m128i v68; // [rsp+20h] [rbp-68h] BYREF
  __m128i v69; // [rsp+30h] [rbp-58h]
  __int64 v70; // [rsp+40h] [rbp-48h]
  unsigned __int64 v71; // [rsp+48h] [rbp-40h]

  v3 = a2->m128i_i8[1];
  v71 = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 0:
      return 0;
    case 1:
    case 3:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 33);
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * a2->m128i_u16[3]),
        0);
      v5 = a2[2].m128i_i8[0];
      if ( v5 )
      {
        v6 = v5 + 48;
        v7 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
        if ( v7 == sub_63A0 )
        {
          v8 = a1[4];
          if ( v8 )
          {
            v10 = v8 + 1;
            v9 = a1[4];
            --v8;
          }
          else
          {
            v9 = 1;
            v10 = 2;
          }
          v11 = a1[3];
          if ( a1[5] < v10 )
          {
            v38 = qvector_reserve();
            a1[3] = v38;
            v11 = v38;
          }
          a1[4] = v10;
          *(_BYTE *)(v11 + v8) = v6;
          *(_BYTE *)(a1[3] + v9) = 0;
        }
        else
        {
          v7(a1, v6);
        }
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 33);
      if ( a2->m128i_i8[1] == 3 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
      return 1;
    case 2:
    case 9:
      if ( v3 != 9 && (*((_BYTE *)a1 + 252) & 1) == 0 )
      {
        if ( a2[2].m128i_i8[1] )
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 91);
LABEL_57:
        if ( !(unsigned __int8)sub_6780(a1, (__int64)a2, 0) && !(unsigned __int8)sub_6AE0(a1, a2[1].m128i_u64[0]) )
        {
          v36 = a2->m128i_i8[1];
          if ( v36 == 4 )
          {
            v37 = 160;
            if ( a2[2].m128i_i8[0] )
              v37 = 164;
          }
          else
          {
            v37 = 168;
            if ( v36 != 7 && v36 != 2 )
              v37 = 0;
          }
          (*(void (__fastcall **)(__int64 *, const __m128i *, __int64))(*a1 + 24))(a1, a2, v37);
        }
        if ( !a2[2].m128i_i8[1] )
          return 1;
        goto LABEL_59;
      }
      v31 = *(_WORD *)(a1[79] + 4);
      if ( (v31 & 0x1000) != 0 )
      {
        v32 = 60;
      }
      else
      {
        v32 = 42;
        if ( (v31 & 2) == 0 )
          goto LABEL_57;
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, v32);
      goto LABEL_57;
    case 4:
      if ( a2[2].m128i_i8[0] == -1 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 91);
      v12 = a2[2].m128i_i8[1];
      if ( a2[2].m128i_i8[1] )
      {
        if ( (char)v12 <= 2 )
        {
          if ( !a2->m128i_i16[3] )
            goto LABEL_70;
          if ( (unsigned __int8)is_off()
            || (unsigned __int8)is_stkvar()
            || (unsigned __int8)is_enum()
            || (unsigned __int8)is_stroff() )
          {
            (*(void (__fastcall **)(__int64 *, const __m128i *, __int64))(*a1 + 24))(a1, a2, 16);
          }
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * (unsigned __int8)byte_D689[v12 - 3]),
            33);
        }
      }
      else
      {
        if ( a2[2].m128i_i8[0] )
        {
          v13 = a2->m128i_i8[1];
          if ( v13 != 4 )
            goto LABEL_21;
          goto LABEL_80;
        }
        if ( a2->m128i_i16[3] != 6 )
        {
          v13 = a2->m128i_i8[1];
          if ( v13 != 4 )
          {
LABEL_21:
            v14 = 168;
            if ( v13 != 7 && v13 != 2 )
              v14 = 0;
            goto LABEL_24;
          }
          goto LABEL_139;
        }
        if ( !(unsigned __int8)sub_6780(a1, (__int64)a2, 3) )
        {
          v13 = a2->m128i_i8[1];
          if ( v13 != 4 )
            goto LABEL_21;
          if ( !a2[2].m128i_i8[0] )
          {
LABEL_139:
            v14 = 160;
            goto LABEL_24;
          }
LABEL_80:
          v14 = 164;
LABEL_24:
          (*(void (__fastcall **)(__int64 *, const __m128i *, __int64))(*a1 + 24))(a1, a2, v14);
        }
      }
      if ( !a2->m128i_i16[3] )
        goto LABEL_70;
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
      v33 = a2[2].m128i_i8[1];
      if ( v33 == -2 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      }
      else if ( v33 != -1 )
      {
LABEL_66:
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * a2->m128i_u16[3]),
          33);
        v34 = a2[2].m128i_i8[1];
        if ( v34 != 1 )
        {
          if ( v34 != 2 )
            goto LABEL_70;
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
        }
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
LABEL_70:
        if ( a2[2].m128i_i8[0] != -1 )
          return 1;
LABEL_59:
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 93);
        return 1;
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      goto LABEL_66;
    case 5:
      v15 = *((unsigned __int16 *)a1 + 124);
      if ( (_WORD)v15 != 138 )
        goto LABEL_26;
      if ( (unsigned __int8)sub_68C0((__int64)a1) )
        return 1;
      v15 = *((unsigned __int16 *)a1 + 124);
LABEL_26:
      if ( (unsigned __int16)v15 > 0x25u || (v16 = 0x3400001000LL, (v17 = _bittest64(&v16, v15)) == 0) )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
        v35 = *((_WORD *)a1 + 124);
        if ( !(unsigned __int8)sub_6AE0(a1, a2->m128i_u64[1]) )
          (*(void (__fastcall **)(__int64 *, const __m128i *, _QWORD))(*a1 + 24))(
            a1,
            a2,
            4 * (unsigned int)((unsigned __int16)(v35 - 6) <= 1u));
        return 1;
      }
      if ( !a2->m128i_i8[0] )
      {
        if ( (unsigned __int8)sub_6D00(a1, a1[40], a2->m128i_i32[2]) )
          return 1;
LABEL_32:
        (*(void (__fastcall **)(__int64 *, const __m128i *, _QWORD))(*a1 + 24))(a1, a2, 0);
        return 1;
      }
      if ( (*(_BYTE *)(a1[79] + 5) & 8) != 0 )
      {
        v62 = v17;
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
        v17 = v62;
      }
      if ( *((_BYTE *)a1 + 265) != 2 )
        goto LABEL_32;
      v63 = v17;
      v39 = a2->m128i_i64[1];
      v40 = 0;
      v41 = 31;
      v42 = 0x80000000;
      v43 = 0;
      while ( 2 )
      {
        if ( v41 == -1 )
        {
          v56 = v40;
          if ( ((unsigned int)v39 & v40) == 0 )
            return 1;
          if ( !v43 )
            goto LABEL_126;
          goto LABEL_129;
        }
        if ( ((unsigned int)v39 & v42) == 0 )
          goto LABEL_123;
        if ( v43 )
          goto LABEL_106;
LABEL_101:
        v44 = sub_6D00(a1, a1[35], v41);
        v39 = a2->m128i_i64[1];
        if ( !v44 )
        {
          v40 |= v42;
          goto LABEL_123;
        }
        if ( !v41 )
        {
          if ( ((unsigned int)v39 & v40) == 0 )
            return 1;
          v41 = -1;
LABEL_129:
          v42 = v40;
          goto LABEL_106;
        }
        if ( ((unsigned int)v39 & (v42 >> 1)) == 0 )
        {
          v41 -= 2;
          v42 >>= 2;
          if ( v41 != -1 )
          {
            v43 = v44;
            if ( ((unsigned int)v39 & v42) != 0 )
              goto LABEL_106;
LABEL_123:
            v42 >>= 1;
            --v41;
            continue;
          }
          if ( ((unsigned int)v39 & v40) == 0 )
            return 1;
          goto LABEL_129;
        }
        break;
      }
      --v41;
      v42 >>= 1;
LABEL_106:
      v45 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v45 == sub_63A0 )
      {
        v46 = a1[4];
        if ( v46 )
        {
          v47 = v46 + 1;
          v48 = a1[4];
          --v46;
        }
        else
        {
          v48 = 1;
          v47 = 2;
        }
        v49 = a1[3];
        if ( a1[5] < v47 )
        {
          v67 = v48;
          v65 = v47;
          v61 = qvector_reserve();
          v48 = v67;
          v47 = v65;
          a1[3] = v61;
          v49 = v61;
        }
        a1[4] = v47;
        *(_BYTE *)(v49 + v46) = 32;
        *(_BYTE *)(a1[3] + v48) = 0;
      }
      else
      {
        v45(a1, 32);
      }
      v50 = *(const char **)(a1[79] + 280);
      if ( !v50 )
        v50 = "|";
      (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, v50, 32);
      v51 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v51 == sub_63A0 )
      {
        v52 = a1[4];
        if ( v52 )
        {
          v53 = v52 + 1;
          v54 = a1[4];
          --v52;
        }
        else
        {
          v54 = 1;
          v53 = 2;
        }
        v55 = a1[3];
        if ( a1[5] < v53 )
        {
          v66 = v54;
          v64 = v53;
          v60 = qvector_reserve();
          v54 = v66;
          v53 = v64;
          a1[3] = v60;
          v55 = v60;
        }
        a1[4] = v53;
        *(_BYTE *)(v55 + v52) = 32;
        *(_BYTE *)(a1[3] + v54) = 0;
      }
      else
      {
        v51(a1, 32);
      }
      if ( v41 != -1 )
      {
        v43 = v63;
        goto LABEL_101;
      }
      v56 = v40;
LABEL_126:
      v57 = a2[2].m128i_i64[0];
      v68 = _mm_loadu_si128(a2);
      v58 = _mm_loadu_si128(a2 + 1);
      v70 = v57;
      v59 = *a1;
      v68.m128i_i64[1] = v56;
      v69 = v58;
      (*(void (__fastcall **)(__int64 *, __m128i *, _QWORD))(v59 + 24))(a1, &v68, 0);
      return 1;
    case 7:
      v27 = *(_QWORD *)(a1[79] + 184);
      if ( v27 && a2[1].m128i_i64[0] == a1[29] + *((unsigned __int16 *)a1 + 125) )
      {
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 56))(a1, v27, 9);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 112))(a1, *((unsigned __int16 *)a1 + 125), 10);
      }
      else
      {
        if ( (*((_BYTE *)a1 + 252) & 1) != 0 )
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 60);
        v28 = a2[2].m128i_i64[0];
        v68 = _mm_loadu_si128(a2);
        v29 = _mm_loadu_si128(a2 + 1);
        v70 = v28;
        v68.m128i_i8[5] = 2;
        v69 = v29;
        if ( !(unsigned __int8)sub_6780(a1, (__int64)&v68, 1) && !(unsigned __int8)sub_6AE0(a1, v69.m128i_u64[0]) )
        {
          (*(void (__fastcall **)(__int64 *, __m128i *, __int64))(*a1 + 24))(a1, &v68, 200);
          remember_problem();
        }
      }
      return 1;
    case 8:
      v18 = a2->m128i_i16[3];
      if ( v18 == 255 )
      {
        if ( *(char *)(a1[79] + 4) < 0 )
        {
          (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, "all", 32);
          return 1;
        }
        v19 = a2[2].m128i_i8[1];
        LOBYTE(v20) = -1;
        v21 = a2[2].m128i_i8[1];
      }
      else
      {
        v19 = a2[2].m128i_i8[1];
        v20 = a2->m128i_i16[3];
        v21 = a2[2].m128i_i8[1];
        if ( !(_BYTE)v18 )
          return 1;
      }
      v22 = 0;
      break;
    default:
      sub_58F0((__int64)"out: %a: bad optype %d", a3, a1[29]);
      return 1;
  }
  while ( 1 )
  {
    v24 = v21 == 0;
    v25 = v20;
    if ( v24 )
    {
      LOBYTE(v20) = (unsigned __int8)v20 >> 1;
      v23 = v19 + 1;
      if ( (v25 & 1) == 0 )
      {
LABEL_37:
        v19 = v23;
        goto LABEL_38;
      }
    }
    else
    {
      LOBYTE(v20) = 2 * v20;
      v23 = v19 - 1;
      if ( v25 >= 0 )
        goto LABEL_37;
    }
    v26 = *(unsigned __int8 *)(a1[77] + v19 + 2984);
    if ( v22 )
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8 * v26),
      33);
    v19 = v23;
    v22 = 1;
LABEL_38:
    if ( !(_BYTE)v20 )
      return 1;
    v21 = a2[2].m128i_i8[1];
  }
}

