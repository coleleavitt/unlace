__int64 __fastcall sub_238F00(__int64 a1, unsigned __int64 a2, _QWORD *a3, char a4, __m128 a5, __m128 a6)
{
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r14
  _QWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r14d
  int v19; // r15d
  __int64 v20; // rdi
  unsigned __int8 v21; // r15
  int v22; // r15d
  bool v23; // al
  __int64 v24; // rdx
  __int64 v25; // r10
  __int16 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r11
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // r10
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r15
  int v40; // edx
  _QWORD *v41; // rdi
  __int32 v42; // eax
  int v43; // eax
  __m128i v44; // xmm0
  int v45; // eax
  __m128i *v46; // rdi
  __m128 v47; // xmm1
  char v48; // dl
  char tinfo_property; // al
  __int16 v50; // dx
  int v51; // [rsp+0h] [rbp-B0h]
  __int64 v52; // [rsp+8h] [rbp-A8h]
  __int16 v53; // [rsp+14h] [rbp-9Ch]
  __int64 v54; // [rsp+18h] [rbp-98h]
  int v55; // [rsp+20h] [rbp-90h]
  __int64 v56; // [rsp+28h] [rbp-88h]
  int v57; // [rsp+30h] [rbp-80h] BYREF
  int v58; // [rsp+34h] [rbp-7Ch] BYREF
  unsigned __int64 v59; // [rsp+38h] [rbp-78h] BYREF
  __m128i v60; // [rsp+40h] [rbp-70h] BYREF
  __int64 v61; // [rsp+50h] [rbp-60h]
  __int64 v62; // [rsp+58h] [rbp-58h]
  __m128i v63; // [rsp+60h] [rbp-50h]
  int v64; // [rsp+70h] [rbp-40h]
  char v65; // [rsp+74h] [rbp-3Ch]
  unsigned __int64 v66; // [rsp+78h] [rbp-38h]

  v56 = a2;
  v66 = __readfsqword(0x28u);
  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) < 0
    || !(unsigned __int8)sub_32F330(a2, &v59)
    || !(unsigned __int8)sub_229280(
                           *(_QWORD *)(a1 + 8),
                           v59,
                           a2,
                           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
                           *(double *)a5.m128_u64) )
  {
    return 0;
  }
  v10 = **(_QWORD ***)(a1 + 64);
  if ( !v10 )
    goto LABEL_13;
  v11 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v11 )
    return 0;
  if ( (*(_BYTE *)v11 & 2) != 0 )
    goto LABEL_13;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( a2 < v12 )
    {
      v11 = *(_QWORD *)(v11 + 8);
      goto LABEL_11;
    }
    if ( v12 >= a2 )
      break;
    v11 = *(_QWORD *)(v11 + 16);
LABEL_11:
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v56 = a2;
      goto LABEL_13;
    }
  }
  v56 = a2;
  if ( v10 != (_QWORD *)v11 )
    return 0;
LABEL_13:
  v13 = v59;
  if ( (v59 & 0x8000000000000000LL) != 0LL )
  {
    sub_3311F0(*(_QWORD **)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), 0x1Bu);
    v13 = 0x7FFFFFFFFFFFFFFFLL;
    v59 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v14 = **(_QWORD **)(a1 + 56);
  if ( !(unsigned __int8)sub_1F0C10(*(_QWORD *)(a1 + 16), v13, 1) && !sub_1F09D0(*(_QWORD *)(a1 + 8), (char *)v56, -1) )
    v14 += 104LL * *(int *)(a1 + 80);
  v15 = *(_QWORD **)(a1 + 56);
  if ( v14 == *v15 + 104LL * v15[1] )
    goto LABEL_29;
  while ( 2 )
  {
    v16 = *(_QWORD *)(a1 + 72);
    if ( v16 != -1 )
    {
      if ( *(_QWORD *)(v14 + 16) == v16 )
        goto LABEL_22;
LABEL_19:
      v14 += 104;
      if ( v14 == *v15 + 104LL * v15[1] )
        goto LABEL_29;
      continue;
    }
    break;
  }
  if ( (*(_BYTE *)(v14 + 26) & 1) != 0 )
    goto LABEL_19;
LABEL_22:
  v17 = sub_228DB0(*(_QWORD **)(a1 + 8), v14, v59, *(double *)a5.m128_u64);
  if ( !(unsigned int)sub_1C36B0(v14, *(_QWORD *)(a1 + 48), v59, 1, v17, nullptr, *(double *)a5.m128_u64, nullptr) )
  {
    v15 = *(_QWORD **)(a1 + 56);
    goto LABEL_19;
  }
  if ( v14 != **(_QWORD **)(a1 + 56) + 104LL * *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) )
    goto LABEL_60;
LABEL_29:
  v18 = *(_DWORD *)(v56 + 4);
  if ( v18 != -1 )
  {
    v18 = -1;
    if ( *(_BYTE *)v56 != 10 )
    {
      v19 = sub_1FBEA0(*(_QWORD *)(a1 + 48), v56, *(int ***)(a1 + 32), *(double *)a5.m128_u64);
      v18 = round_up_power2();
      if ( *(_DWORD *)(v56 + 4) < v18 )
        v18 = v19;
    }
  }
  v20 = *(_QWORD *)(a1 + 8);
  v54 = *(_QWORD *)(a1 + 72);
  if ( v54 == -1 )
  {
    v54 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    if ( a4 )
      v54 = (*(_DWORD *)v20 & 1) + *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  }
  v60.m128i_i64[0] = 0;
  if ( a3 && *(_QWORD *)(v20 + 144) > (signed __int64)v59 )
  {
    copy_tinfo_t();
    v20 = *(_QWORD *)(a1 + 8);
  }
  v21 = sub_242770(v20, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), v56, v60.m128i_i64, 0);
  v22 = (32 * v21) | (8 * sub_1226C0(*(_QWORD *)(a1 + 32), v56));
  v23 = sub_229080(*(_QWORD *)(a1 + 8), v59, v18, 0);
  v24 = *(_QWORD *)(a1 + 72);
  v25 = v59;
  v26 = v22 | (v23 << 7);
  if ( v24 != -1 )
  {
    v24 = v54;
    v26 |= 0x40u;
  }
  v27 = *(_QWORD *)(a1 + 8);
  v28 = *(_QWORD *)(v27 + 1256);
  v29 = v28 + 96LL * *(_QWORD *)(v27 + 1264);
  if ( v28 == v29 )
  {
LABEL_106:
    v35 = v18;
    goto LABEL_58;
  }
  while ( 2 )
  {
    v30 = v28 + 96;
    if ( v24 != *(_QWORD *)(v28 + 16) )
    {
      if ( v24 == -1 )
      {
        while ( (*(_BYTE *)(v30 - 8) & 2) != 0 )
        {
          if ( v29 == v30 )
          {
            v27 = *(_QWORD *)(a1 + 8);
            v35 = v18;
            goto LABEL_58;
          }
          v28 = v30;
          if ( *(_QWORD *)(v30 + 16) == -1 )
          {
            v28 = v30 + 96;
            goto LABEL_46;
          }
          v30 += 96;
        }
        break;
      }
      v28 += 96;
LABEL_43:
      if ( v28 == v29 )
      {
        v27 = *(_QWORD *)(a1 + 8);
        v35 = v18;
        goto LABEL_58;
      }
      continue;
    }
    break;
  }
  v31 = v28;
  v28 = v30;
  v30 = v31;
LABEL_46:
  if ( *(_DWORD *)(v28 - 96) != 1 )
    goto LABEL_43;
  v32 = *(_QWORD *)(v28 - 16);
  if ( v32 <= 0 )
    goto LABEL_43;
  v33 = *(_QWORD *)(v28 - 88);
  if ( v33 != v59
    && (v18 == -1 || (v33 < v59 || !v18 || v59 + v18 - 1 < v33) && (v59 < v33 || v32 + v33 - 1 < v59 + v18 - 1)) )
  {
    goto LABEL_43;
  }
  v27 = *(_QWORD *)(a1 + 8);
  if ( !v30 )
    goto LABEL_106;
  v34 = *(_QWORD *)(v30 + 80);
  v35 = v34;
  if ( *(_DWORD *)v30 == 1 )
    v36 = *(_QWORD *)(v30 + 8);
  else
    v36 = -1;
  v51 = v34;
  v52 = v36;
  v53 = v26;
  copy_tinfo_t();
  v25 = v52;
  if ( v18 == v51 )
  {
    v27 = *(_QWORD *)(a1 + 8);
    v26 = v53 | 0x10;
  }
  else
  {
    tinfo_property = get_tinfo_property();
    v27 = *(_QWORD *)(a1 + 8);
    v25 = v52;
    v50 = v53 | 0x18;
    if ( (tinfo_property & 0xF) != 9 )
      v50 = v53 & 0xFFE7 | 0x10;
    v26 = v50;
  }
LABEL_58:
  v37 = sub_232C90(
          v27,
          v25,
          v35,
          (__int64)&v60,
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL),
          v54,
          *(double *)a5.m128_u64,
          a6,
          v26,
          (_BYTE *)(a1 + 85));
  if ( v37 == -1 )
  {
    clear_tinfo_t();
  }
  else
  {
    v14 = **(_QWORD **)(a1 + 56) + 104LL * v37;
    clear_tinfo_t();
LABEL_60:
    v55 = sub_228DB0(*(_QWORD **)(a1 + 8), v14, v59, *(double *)a5.m128_u64);
    v38 = (int)sub_1C36B0(v14, *(_QWORD *)(a1 + 48), v59, 1, v55, &v57, *(double *)a5.m128_u64, &v58);
    if ( !(_DWORD)v38 )
    {
      v38 = (int)sub_1C36B0(
                   v14,
                   *(_QWORD *)(a1 + 48),
                   v59,
                   *(_DWORD *)(v56 + 4),
                   v55,
                   &v57,
                   *(double *)a5.m128_u64,
                   &v58);
      if ( !(_DWORD)v38 )
      {
        if ( !under_debugger )
          sub_383060(0xC7C5u, *(double *)a5.m128_u64);
        goto LABEL_111;
      }
    }
    if ( v38 != -1 && v58 >= 0 && v57 >= 0 )
    {
      v39 = 0x4EC4EC4EC4EC4EC5LL * ((v14 - **(_QWORD **)(a1 + 56)) >> 3);
      if ( v57 < *(_DWORD *)(v14 + 88) )
        goto LABEL_71;
      if ( *(_DWORD *)v14 == 1 )
      {
        v40 = *(_DWORD *)(v56 + 4);
        v41 = *(_QWORD **)(a1 + 8);
        v42 = v40 + v57;
        if ( v40 == -1 )
          v42 = *(_DWORD *)(v41[188] + 80LL);
        v60.m128i_i32[0] = v42;
        v43 = sub_2327F0(v41, v60.m128i_i32, *(_QWORD *)(v14 + 8), a3, a5, a6);
        if ( v43 )
        {
          if ( v43 == 2 || v43 == 1 && (*(_BYTE *)(**(_QWORD **)(a1 + 56) + 104LL * (int)v39 + 24) & 8) != 0 )
          {
LABEL_91:
            *(_BYTE *)(a1 + 85) = 1;
            return 4294967260LL;
          }
        }
        else
        {
          sub_1F45B0(*(_QWORD *)(a1 + 8), 0xFFFFFFFFFFFFFFFFLL, v14);
          *(_DWORD *)(v14 + 24) |= 0x400u;
        }
LABEL_71:
        if ( *(_BYTE *)(a1 + 85) )
          return 4294967260LL;
        v44 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v45 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        v46 = *(__m128i **)(a1 + 64);
        LODWORD(v62) = v39;
        v47 = _mm_loadh_ps((const double *)(a1 + 8));
        v61 = v57;
        v64 = v45;
        v65 = a4;
        v60 = (__m128i)v47;
        v63 = v44;
        sub_238D60(v46, &v60);
        if ( v48 )
        {
          if ( v57 )
          {
            v60.m128i_i64[1] = *(_QWORD *)(a1 + 8);
            v61 = *(_QWORD *)(a1 + 16);
            v62 = *(_QWORD *)(a1 + 24);
            v63.m128i_i64[0] = *(_QWORD *)(a1 + 32);
            v60.m128i_i64[0] = (__int64)&off_4DED70;
            if ( (unsigned __int8)sub_208540((__int64)&v60, v56, a4, v57, v14, v44, v47) )
              goto LABEL_91;
          }
          else if ( !a4
                 && (**(_DWORD **)(a1 + 8) & 0x40000) == 0
                 && (unsigned __int8)sub_2076A0(a1, v56, *(double *)v44.m128i_i64) )
          {
            return 4294967260LL;
          }
          return 0;
        }
        if ( !under_debugger )
          sub_383060(0xCEC0u, *(double *)v44.m128i_i64);
      }
      else if ( !under_debugger )
      {
        sub_383060(0xC4BCu, *(double *)a5.m128_u64);
      }
LABEL_111:
      BUG();
    }
  }
  return 4294967286LL;
}

