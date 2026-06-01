__int64 __fastcall sub_62AC0(__m128i *a1, _BYTE *a2, const __m128i *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int32 v7; // eax
  unsigned int v8; // r12d
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  const __m128i *v15; // rdi
  __int64 v16; // rdx
  __m128i v17; // xmm0
  bool v18; // cf
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbp
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  bool v29; // sf
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  const __m128i *v33; // r15
  const __m128i *v34; // r14
  __int64 v35; // r15
  unsigned __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 *v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rdx
  const __m128i *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rsi
  __m128i v47; // xmm0
  __int64 v49; // [rsp+10h] [rbp-2D8h]
  __int64 v50; // [rsp+10h] [rbp-2D8h]
  bool v51; // [rsp+26h] [rbp-2C2h]
  bool v52; // [rsp+27h] [rbp-2C1h]
  __int64 v53; // [rsp+30h] [rbp-2B8h]
  __int64 v54; // [rsp+38h] [rbp-2B0h]
  __m128i v55; // [rsp+40h] [rbp-2A8h] BYREF
  __m128i v56; // [rsp+50h] [rbp-298h] BYREF
  __int128 v57; // [rsp+60h] [rbp-288h] BYREF
  const __m128i *v58; // [rsp+70h] [rbp-278h] BYREF
  __int128 v59; // [rsp+78h] [rbp-270h]
  _QWORD v60[28]; // [rsp+90h] [rbp-258h] BYREF
  __m128i v61; // [rsp+170h] [rbp-178h] BYREF
  __int64 v62; // [rsp+190h] [rbp-158h]
  _QWORD v63[41]; // [rsp+1A0h] [rbp-148h] BYREF

  v63[33] = __readfsqword(0x28u);
  v55 = (__m128i)0x8000000000000000LL;
  v5 = a3->m128i_i64[0];
  v63[0] = 0;
  LODWORD(v60[0]) = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD *))(a3[16].m128i_i64[0] + 112))(
          *(_QWORD *)(v5 + 24),
          73,
          v60,
          v63)
    && LODWORD(v60[0]) )
  {
    v55.m128i_i64[0] = sub_95990(a3, 73);
    v55.m128i_i64[1] = v6;
    goto LABEL_4;
  }
  v10 = a3[14].m128i_i64[0];
  if ( (v10 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v10 != -1 )
  {
    v56 = _mm_loadu_si128(a3 + 14);
    v11 = v56.m128i_i64[1];
    v58 = nullptr;
    v59 = 0;
    v12 = qvector_reserve(&v58, 0, 1, 16);
    v13 = *((_QWORD *)&v59 + 1);
    v14 = v12;
    *((_QWORD *)&v59 + 1) = 0;
    v15 = v58;
    v16 = v59 - 1;
    if ( (__int64)v59 - 1 >= 0 )
    {
      do
      {
        v17 = _mm_loadu_si128(v15);
        v14 += 16;
        ++v15;
        *(__m128i *)(v14 - 16) = v17;
        v18 = v16-- == 0;
      }
      while ( !v18 );
      v15 = v58;
    }
    v49 = v12;
    qfree(v15);
    v52 = 0;
    v58 = (const __m128i *)v49;
    v19 = (__int64 *)(16 * v59 + v49);
    *((_QWORD *)&v59 + 1) = v13;
    *v19 = v10;
    v19[1] = v11;
    *(_QWORD *)&v59 = v59 + 1;
    while ( 1 )
    {
      sub_84A60(v60);
      sub_84A60(v63);
      if ( !(unsigned __int8)sub_98E20(&v56, v63) )
        goto LABEL_13;
      v57 = 0;
      if ( !(unsigned __int8)sub_945B0(v63, &v57, 49) || !(unsigned __int8)sub_9AA50(v63, &v57, v60) )
        goto LABEL_37;
      sub_84A10(&v57);
      sub_1B750((__int64)v63);
      v31 = v61.m128i_i64[0];
      v51 = v61.m128i_i64[0] != -1 && (v61.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0;
      if ( !v51 )
        break;
      v32 = v59;
      v33 = v58;
      v34 = &v58[v59];
      if ( v58 != v34 )
      {
        do
        {
          if ( !(unsigned int)sub_849A0(&v61, v33) )
            break;
          ++v33;
        }
        while ( v34 != v33 );
        v32 = v59;
        if ( v33 != &v58[(_QWORD)v59] )
          goto LABEL_14;
        v31 = v61.m128i_i64[0];
      }
      v35 = *((_QWORD *)&v59 + 1);
      v36 = v32 + 1;
      v37 = v61.m128i_i64[1];
      if ( *((_QWORD *)&v59 + 1) >= v36 )
      {
        v38 = (__int64)v58;
        goto LABEL_48;
      }
      while ( 1 )
      {
        v50 = v31;
        v42 = qvector_reserve(&v58, 0, v36, 16);
        v43 = v58;
        v44 = *((_QWORD *)&v59 + 1);
        *((_QWORD *)&v59 + 1) = v35;
        v45 = v59 - 1;
        if ( (__int64)v59 - 1 >= 0 )
        {
          v46 = v42;
          do
          {
            v47 = _mm_loadu_si128(v43);
            v46 += 16;
            ++v43;
            *(__m128i *)(v46 - 16) = v47;
            v18 = v45-- == 0;
          }
          while ( !v18 );
          v43 = v58;
        }
        v54 = v44;
        v53 = v42;
        qfree(v43);
        v38 = v53;
        v31 = v50;
        v58 = (const __m128i *)v53;
        *((_QWORD *)&v59 + 1) = v54;
LABEL_48:
        v39 = (__int64 *)(16 * v59 + v38);
        *v39 = v31;
        v39[1] = v37;
        LODWORD(v57) = 0;
        v63[0] = 0;
        v40 = *(_QWORD *)(v60[0] + 24LL);
        *(_QWORD *)&v59 = v59 + 1;
        if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int128 *, _QWORD *))(v62 + 112))(v40, 73, &v57, v63)
          && (_DWORD)v57 )
        {
          v55.m128i_i64[0] = sub_95990(v60, 73);
          v55.m128i_i64[1] = v41;
          v52 = v51;
        }
        v37 = 0x7FFFFFFFFFFFFFFFLL;
        if ( (v61.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v61.m128i_i64[0] != -1 )
          break;
        if ( under_debugger )
          goto LABEL_63;
        interr(30478);
      }
      v56 = _mm_load_si128(&v61);
      sub_1B750((__int64)v60);
      if ( (v55.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v55.m128i_i64[0] != -1 )
        goto LABEL_15;
    }
    if ( under_debugger )
LABEL_63:
      BUG();
    interr(30478);
LABEL_37:
    sub_84A10(&v57);
LABEL_13:
    sub_1B750((__int64)v63);
LABEL_14:
    sub_1B750((__int64)v60);
LABEL_15:
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58);
    }
    if ( v52 )
    {
LABEL_4:
      v7 = v55.m128i_i32[0];
      LOBYTE(v7) = v55.m128i_i64[0] != -1 && (v55.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0;
      v8 = v7;
      if ( !(_BYTE)v7 )
        return v8;
      goto LABEL_22;
    }
    v20 = a3[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL;
    LOBYTE(v20) = a3[14].m128i_i64[0] != -1 && v20 != 0;
    v8 = v20;
    if ( (_BYTE)v20 )
    {
      sub_5C3E0(a1, (__int64)a2, (__int64)a3[14].m128i_i64);
      return v8;
    }
  }
  if ( under_debugger )
    goto LABEL_63;
  interr(30478);
LABEL_22:
  v21 = *(_QWORD *)(v55.m128i_i64[1] + 144);
  v22 = *(_QWORD *)(v21 + 88);
  v23 = v21 + 80;
  if ( !v22 )
    return (unsigned int)sub_5D4A0(a1, a2, &v55);
  v24 = v21 + 80;
  v25 = v55.m128i_i64[1];
  do
  {
    while ( 1 )
    {
      v26 = sub_849A0(v22 + 32, &v55);
      v27 = *(_QWORD *)(v22 + 16);
      v28 = *(_QWORD *)(v22 + 24);
      if ( v26 < 0 )
        break;
      v24 = v22;
      v22 = *(_QWORD *)(v22 + 16);
      if ( !v27 )
        goto LABEL_27;
    }
    v22 = *(_QWORD *)(v22 + 24);
  }
  while ( v28 );
LABEL_27:
  if ( v23 == v24 )
  {
    v30 = *(_QWORD *)(v25 + 144);
  }
  else
  {
    v29 = (int)sub_849A0(&v55, v24 + 32) < 0;
    v30 = *(_QWORD *)(v25 + 144);
    if ( v29 )
      v24 = v23;
  }
  if ( v24 == v30 + 80 )
    return (unsigned int)sub_5D4A0(a1, a2, &v55);
  else
    return (unsigned int)sub_350A0(*(_QWORD *)(v24 + 48), (__int64)a2);
}

