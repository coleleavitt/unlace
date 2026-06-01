__int64 __fastcall sub_19A240(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int16 *v7; // r15
  __int64 *v8; // rax
  __int64 *v9; // r13
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  __int16 v20; // r11
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r10
  _QWORD *v24; // r11
  __int64 *v25; // r15
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned __int64 v44; // r13
  __int64 v45; // rbp
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // r10
  __int32 v49; // eax
  _QWORD *v50; // r11
  __int64 *v51; // rax
  bool v52; // zf
  __int64 *v53; // rsi
  __int64 v54; // rax
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  _DWORD *v58; // rdi
  __int64 v59; // rdx
  __int32 v60; // edx
  __int32 v61; // eax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r14
  const __m128i *v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rdx
  __m128i v68; // xmm0
  char v70; // al
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // [rsp+8h] [rbp-A0h]
  _QWORD *v77; // [rsp+8h] [rbp-A0h]
  _QWORD *v78; // [rsp+8h] [rbp-A0h]
  _QWORD *v79; // [rsp+8h] [rbp-A0h]
  _QWORD *v80; // [rsp+8h] [rbp-A0h]
  _QWORD *v81; // [rsp+8h] [rbp-A0h]
  __int64 *v82; // [rsp+10h] [rbp-98h]
  __int64 *v83; // [rsp+18h] [rbp-90h]
  int v84; // [rsp+20h] [rbp-88h]
  _QWORD *v85; // [rsp+20h] [rbp-88h]
  __int64 v86; // [rsp+20h] [rbp-88h]
  __int16 v87; // [rsp+28h] [rbp-80h]
  _QWORD *v88; // [rsp+28h] [rbp-80h]
  unsigned __int64 v89; // [rsp+38h] [rbp-70h] BYREF
  __m128i v90; // [rsp+40h] [rbp-68h] BYREF
  __m128i v91; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v92; // [rsp+68h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  if ( a3 < 0 )
    return 0;
  v6 = a1[6];
  v91.m128i_i64[0] = -1;
  v90 = (__m128i)-1LL;
  v91.m128i_i64[1] = -1;
  v7 = (__int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  v8 = sub_199F20(a1, (__int64 *)&v89, a3, *v7, *((char *)v7 + 10), NAN);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *((_BYTE *)v8 + 64) ? v8[4] : v89;
  v11 = (_QWORD *)a1[6];
  v90.m128i_i64[0] = v10;
  v12 = (_QWORD *)v11[35];
  v13 = v12[18];
  if ( v10 < v13
    || v10 >= v13 + *(_DWORD *)(v12[188] + 80LL) * *(_DWORD *)(v12[187] + 656LL)
    || v10 % *(char *)((*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11) + 12) )
  {
    return 0;
  }
  v15 = sub_199F20(a1, (__int64 *)&v89, a3, v7[1], *((char *)v7 + 10), NAN);
  v83 = v15;
  v16 = -1;
  if ( v15 )
  {
    if ( *((_BYTE *)v15 + 64) )
      v16 = v15[5];
    else
      v16 = v89;
  }
  v90.m128i_i64[1] = v16;
  v17 = v7[2];
  v82 = nullptr;
  if ( (_WORD)v17 != 0xFFFF )
  {
    v53 = sub_199F20(a1, (__int64 *)&v89, a3, v17, *((char *)v7 + 10), NAN);
    v82 = v53;
    v54 = -1;
    if ( v53 )
    {
      if ( *((_BYTE *)v53 + 64) )
        v54 = v53[6];
      else
        v54 = v89;
    }
    v91.m128i_i64[0] = v54;
  }
  v18 = v7[4];
  v76 = *((char *)v7 + 11);
  v19 = v7[3];
  v20 = v7[4];
  v21 = v19;
  if ( v20 > (__int16)v19 )
  {
    if ( *((char *)v7 + 11) + (_DWORD)v19 != v18 )
      goto LABEL_49;
  }
  else if ( v76 + v18 != (_DWORD)v19 )
  {
    goto LABEL_49;
  }
  if ( v20 > (__int16)v19 )
    v20 = v7[3];
  v87 = v20;
  v84 = 2 * v76;
  v22 = sub_199F20(a1, (__int64 *)&v89, a3, v20, 2 * v76, NAN);
  v23 = v22;
  if ( !v22 )
  {
    v21 = v7[3];
LABEL_49:
    v47 = sub_199F20(a1, (__int64 *)&v89, a3, v21, v76, NAN);
    v48 = v47;
    if ( v47 )
    {
      if ( *((_BYTE *)v47 + 64) )
      {
        v49 = *((_DWORD *)v47 + 14);
        v50 = v48 + 3;
      }
      else
      {
        v49 = v89;
        v50 = nullptr;
      }
      v91.m128i_i32[2] = v49;
      v88 = v50;
      v85 = v48;
      v51 = sub_199F20(a1, (__int64 *)&v89, a3, v7[4], v76, NAN);
      v23 = v85;
      v24 = v88;
      v25 = v51;
      if ( v51 )
      {
        if ( *((_BYTE *)v51 + 64) )
        {
          v52 = *((_BYTE *)v85 + 64) == 0;
          v91.m128i_i32[3] = *((_DWORD *)v51 + 15);
          if ( !v52 )
            goto LABEL_55;
          return 0;
        }
        v52 = *((_BYTE *)v85 + 64) == 0;
        v91.m128i_i32[3] = v89;
        if ( !v52 )
          return 0;
      }
      else
      {
        v91.m128i_i32[3] = -1;
      }
      if ( v88 )
        goto LABEL_21;
      goto LABEL_65;
    }
    v91.m128i_i32[2] = -1;
    v55 = sub_199F20(a1, (__int64 *)&v89, a3, v7[4], v76, NAN);
    v25 = v55;
    if ( v55 )
    {
      v23 = nullptr;
      if ( !*((_BYTE *)v55 + 64) )
      {
        v91.m128i_i32[3] = v89;
        goto LABEL_65;
      }
      v91.m128i_i32[3] = *((_DWORD *)v55 + 15);
LABEL_55:
      v24 = v25 + 3;
      goto LABEL_21;
    }
    return 0;
  }
  if ( *((_BYTE *)v22 + 64) )
  {
    v24 = v22 + 3;
    v25 = nullptr;
    v91.m128i_i64[1] = v22[7];
LABEL_21:
    *(_DWORD *)(a2 + 8) |= 2u;
    *(_QWORD *)(a2 + 88) = *v24;
    goto LABEL_22;
  }
  v78 = v22;
  v70 = sub_199DA0((__int64)a1, (__int64)&v90, v87, v89, v84);
  v23 = v78;
  if ( !v70 )
  {
    if ( !under_debugger )
      sub_383060(0xC917u, NAN);
    BUG();
  }
  v25 = nullptr;
LABEL_65:
  v77 = v23;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)a1[6] + 48LL))(a1[6], &v90) )
    return 0;
  sub_199890(a1[6], (__int64)&v90);
  (*(void (__fastcall **)(_QWORD, __int64, __m128i *))(*(_QWORD *)a1[6] + 56LL))(a1[6], a2, &v90);
  v56 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[6] + 32LL))(a1[6]);
  v23 = v77;
  v57 = *(_QWORD *)(v56 + 8);
  if ( v57 == -1 )
  {
    v59 = *(_QWORD *)(v56 + 16);
    if ( v59 == -1 || v59 == v91.m128i_i64[0] )
      goto LABEL_74;
LABEL_99:
    v58 = (_DWORD *)a1[6];
    goto LABEL_71;
  }
  if ( v57 == v90.m128i_i64[1] )
  {
    v59 = *(_QWORD *)(v56 + 16);
    if ( v59 == -1 || v91.m128i_i64[0] == v59 )
      goto LABEL_74;
    goto LABEL_99;
  }
  v58 = (_DWORD *)a1[6];
  if ( *(_DWORD *)(a2 + 40) != v58[6] )
    return 0;
  v90.m128i_i64[1] = *(_QWORD *)(v56 + 8);
  v59 = *(_QWORD *)(v56 + 16);
  if ( v59 == -1 || v91.m128i_i64[0] == v59 )
    goto LABEL_73;
LABEL_71:
  if ( *(_DWORD *)(a2 + 64) != v58[12] )
    return 0;
  v91.m128i_i64[0] = v59;
LABEL_73:
  v86 = v56;
  (*(void (__fastcall **)(_DWORD *, __int64, __m128i *))(*(_QWORD *)v58 + 56LL))(v58, a2, &v90);
  v56 = v86;
  v23 = v77;
LABEL_74:
  v60 = *(_DWORD *)(v56 + 24);
  if ( v60 != -1 && v60 > v91.m128i_i32[2] )
    return 0;
  v61 = *(_DWORD *)(v56 + 28);
  if ( v61 != -1 && v61 > v91.m128i_i32[3] )
    return 0;
  if ( !*(_DWORD *)(a2 + 40)
    && !*(_DWORD *)(a2 + 64)
    && ((*(_BYTE *)(*(_QWORD *)(*a1 + 112LL) + 48LL) & 0x20) == 0
     || *(_QWORD *)(a2 + 80) == *(_QWORD *)(*(_QWORD *)(a1[6] + 280LL) + 144LL)) )
  {
    return 0;
  }
LABEL_22:
  v26 = *v9;
  if ( !*v9 )
    goto LABEL_103;
  v27 = *(_QWORD *)(a2 + 104);
  v28 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v27 + 1) )
  {
    v80 = v23;
    v72 = qvector_reserve(a2 + 96, v28, v27 + 1, 8);
    v23 = v80;
    *(_QWORD *)(a2 + 96) = v72;
    v28 = v72;
    v27 = *(_QWORD *)(a2 + 104);
  }
  *(_QWORD *)(v28 + 8 * v27) = v26;
  v29 = *(_QWORD *)(a2 + 104);
  v30 = v29 + 1;
  *(_QWORD *)(a2 + 104) = v29 + 1;
  if ( v83 )
  {
    v31 = *v83;
    if ( !*v83 )
      goto LABEL_103;
    v32 = *(_QWORD *)(a2 + 96);
    v33 = v29 + 2;
    if ( *(_QWORD *)(a2 + 112) < v33 )
    {
      v79 = v23;
      v71 = qvector_reserve(a2 + 96, v32, v33, 8);
      v30 = *(_QWORD *)(a2 + 104);
      v23 = v79;
      *(_QWORD *)(a2 + 96) = v71;
      v32 = v71;
    }
    *(_QWORD *)(v32 + 8 * v30) = v31;
    ++*(_QWORD *)(a2 + 104);
  }
  if ( v82 )
  {
    v34 = *v82;
    if ( !*v82 )
      goto LABEL_103;
    v35 = *(_QWORD *)(a2 + 104);
    v36 = *(_QWORD *)(a2 + 96);
    if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v35 + 1) )
    {
      v81 = v23;
      v75 = qvector_reserve(a2 + 96, v36, v35 + 1, 8);
      v23 = v81;
      *(_QWORD *)(a2 + 96) = v75;
      v36 = v75;
      v35 = *(_QWORD *)(a2 + 104);
    }
    *(_QWORD *)(v36 + 8 * v35) = v34;
    ++*(_QWORD *)(a2 + 104);
  }
  if ( v23 )
  {
    v37 = *v23;
    if ( !*v23 )
      goto LABEL_103;
    v38 = *(_QWORD *)(a2 + 104);
    v39 = *(_QWORD *)(a2 + 96);
    if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v38 + 1) )
    {
      v74 = qvector_reserve(a2 + 96, v39, v38 + 1, 8);
      *(_QWORD *)(a2 + 96) = v74;
      v39 = v74;
      v38 = *(_QWORD *)(a2 + 104);
    }
    *(_QWORD *)(v39 + 8 * v38) = v37;
    ++*(_QWORD *)(a2 + 104);
  }
  if ( v25 )
  {
    v40 = *v25;
    if ( *v25 )
    {
      v41 = *(_QWORD *)(a2 + 104);
      v42 = *(_QWORD *)(a2 + 96);
      if ( *(_QWORD *)(a2 + 112) < (unsigned __int64)(v41 + 1) )
      {
        v73 = qvector_reserve(a2 + 96, v42, v41 + 1, 8);
        *(_QWORD *)(a2 + 96) = v73;
        v42 = v73;
        v41 = *(_QWORD *)(a2 + 104);
      }
      *(_QWORD *)(v42 + 8 * v41) = v40;
      ++*(_QWORD *)(a2 + 104);
      goto LABEL_45;
    }
LABEL_103:
    sub_1954C0(NAN);
  }
LABEL_45:
  *(_QWORD *)(a2 + 72) = a3;
  v43 = a1[9];
  v44 = a1[10];
  if ( v44 < v43 + 1 )
  {
    v62 = qvector_reserve((__int64)(a1 + 8), 0, v43 + 1, 40);
    v63 = a1[9];
    v64 = a1[10];
    a1[10] = v44;
    v65 = (const __m128i *)a1[8];
    v45 = v62;
    v66 = v63 - 1;
    if ( v66 >= 0 )
    {
      v67 = v62;
      do
      {
        v68 = _mm_loadu_si128(v65);
        v67 += 40;
        v65 = (const __m128i *)((char *)v65 + 40);
        *(__m128i *)(v67 - 40) = v68;
        *(__m128i *)(v67 - 24) = _mm_loadu_si128((const __m128i *)((char *)v65 - 24));
        *(_QWORD *)(v67 - 8) = v65[-1].m128i_i64[1];
      }
      while ( v66-- != 0 );
      v65 = (const __m128i *)a1[8];
    }
    qfree((__int64)v65);
    a1[8] = v45;
    v43 = a1[9];
    a1[10] = v64;
  }
  else
  {
    v45 = a1[8];
  }
  v46 = v45 + 40 * v43;
  *(_OWORD *)v46 = -1;
  *(_OWORD *)(v46 + 16) = -1;
  *(_QWORD *)(v46 + 32) = -1;
  ++a1[9];
  *(_QWORD *)v46 = a3;
  *(__m128i *)(v46 + 8) = _mm_load_si128(&v90);
  *(__m128i *)(v46 + 24) = _mm_load_si128(&v91);
  return 1;
}

