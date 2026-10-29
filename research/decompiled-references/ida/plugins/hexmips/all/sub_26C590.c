__int64 __fastcall sub_26C590(
        __int64 *a1,
        const __m128i *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rbp
  const __m128i *v9; // rbx
  __int64 v10; // rax
  __int32 v11; // eax
  char v12; // r15
  __int64 v13; // rax
  __int64 *v14; // r13
  int v15; // eax
  int v16; // r14d
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // r12
  __int64 v21; // r14
  __int64 v22; // r12
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // r10
  __int64 tinfo_property4; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r15
  _QWORD *v29; // rbp
  char v30; // al
  int v31; // r13d
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rcx
  __int64 v35; // r8
  int tinfo_property; // r13d
  int tinfo_size; // eax
  __int64 v38; // r14
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r15
  __int64 v41; // rbx
  _QWORD *v42; // rbp
  __int64 v46; // [rsp+20h] [rbp-158h]
  __int64 v47; // [rsp+20h] [rbp-158h]
  __int64 v48; // [rsp+28h] [rbp-150h]
  __int64 v49; // [rsp+28h] [rbp-150h]
  unsigned __int64 v50; // [rsp+30h] [rbp-148h]
  int v51; // [rsp+30h] [rbp-148h]
  int v52; // [rsp+30h] [rbp-148h]
  __int64 v53; // [rsp+38h] [rbp-140h]
  __int64 v54; // [rsp+40h] [rbp-138h]
  char tinfo; // [rsp+40h] [rbp-138h]
  __int64 v56; // [rsp+50h] [rbp-128h] BYREF
  __int64 v57; // [rsp+58h] [rbp-120h] BYREF
  __int64 v58; // [rsp+60h] [rbp-118h]
  __int128 v59; // [rsp+68h] [rbp-110h]
  __int128 v60; // [rsp+78h] [rbp-100h]
  __int64 v61; // [rsp+88h] [rbp-F0h]
  int v62; // [rsp+90h] [rbp-E8h]
  __m128i v63; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-C8h]
  __int128 v65; // [rsp+B8h] [rbp-C0h]
  __int64 v66; // [rsp+C8h] [rbp-B0h]
  __int128 v67; // [rsp+D0h] [rbp-A8h]
  __int128 v68; // [rsp+E0h] [rbp-98h]
  __int64 v69; // [rsp+110h] [rbp-68h]
  int v70; // [rsp+118h] [rbp-60h]
  __int64 v71; // [rsp+120h] [rbp-58h]
  char v72; // [rsp+128h] [rbp-50h]
  unsigned __int64 v73; // [rsp+138h] [rbp-40h]

  v8 = (__int64)a1;
  v9 = a2;
  v73 = __readfsqword(0x28u);
  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
    goto LABEL_11;
  v10 = *a1;
  v64 = 0;
  v66 = 0;
  v46 = v10;
  v11 = a2->m128i_i32[2];
  v69 = 1;
  v70 = -1;
  v71 = 0;
  v72 = 0;
  v56 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v68 = 0;
  if ( v11 == 64 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC || (get_flags_ex() & 0x600) != 0x400 )
      goto LABEL_4;
    v49 = -1;
    LODWORD(v25) = 0;
    v53 = a2[1].m128i_i64[1];
    goto LABEL_49;
  }
  if ( v11 != 65 )
    goto LABEL_4;
  v48 = *(_QWORD *)(a2[1].m128i_i64[1] + 432) + 104LL * a2[2].m128i_i32[0];
  if ( (unsigned int)lexcompare_tinfo() )
  {
    copy_tinfo_t();
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( !under_debugger )
        sub_37E160(50204);
      goto LABEL_107;
    }
    v12 = 1;
    goto LABEL_5;
  }
  if ( (unsigned int)(*(_DWORD *)v48 - 3) <= 1 )
    goto LABEL_4;
  if ( *(_DWORD *)v48 != 1 )
    goto LABEL_4;
  v49 = sub_1CBE90((_QWORD *)a2[1].m128i_i64[1], &v63, *(_QWORD *)(v48 + 8), &v57, &v56);
  if ( v49 == -1 || !(_BYTE)v56 )
    goto LABEL_4;
  v58 = 0;
  v61 = 0;
  v62 = 1;
  v59 = 0;
  v60 = 0;
  get_tinfo_details();
  v23 = v59;
  v24 = v58;
  if ( v49 + 1 == (_QWORD)v59 )
  {
    if ( v58 )
    {
      v40 = v59;
      v47 = v8;
      v41 = 0;
      while ( 1 )
      {
        v42 = (_QWORD *)(v24 + 144 * v41);
        clear_tinfo_t();
        if ( v42[5] )
        {
          v42[6] = 0;
          qfree();
        }
        if ( v42[2] )
        {
          v42[3] = 0;
          qfree();
        }
        if ( ++v41 >= v40 )
          break;
        v24 = v58;
      }
      v8 = v47;
      *(_QWORD *)&v59 = 0;
      v9 = a2;
      qfree();
    }
    goto LABEL_4;
  }
  if ( v63.m128i_i64[1] <= 7uLL )
  {
    if ( !under_debugger )
      sub_37E160(50205);
    goto LABEL_107;
  }
  v25 = ((unsigned __int64)(*(_QWORD *)(v58 + 144 * (v49 + 1)) - v63.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v63.m128i_i64[1] >> 3);
  if ( v25 == 1 )
  {
    if ( !v58 )
      goto LABEL_4;
    v53 = -1;
    if ( !(_QWORD)v59 )
    {
      qfree();
      goto LABEL_4;
    }
LABEL_38:
    v51 = v25;
    v54 = v8;
    v27 = 0;
    v28 = v23;
    do
    {
      v29 = (_QWORD *)(v24 + 144 * v27);
      clear_tinfo_t();
      if ( v29[5] )
      {
        v29[6] = 0;
        qfree();
      }
      if ( v29[2] )
      {
        v29[3] = 0;
        qfree();
      }
      ++v27;
      v24 = v58;
    }
    while ( v27 < v28 );
    LODWORD(v25) = v51;
    v8 = v54;
    v9 = a2;
    goto LABEL_45;
  }
  v50 = ((unsigned __int64)(*(_QWORD *)(v58 + 144 * (v49 + 1)) - v63.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v63.m128i_i64[1] >> 3);
  tinfo_property4 = get_tinfo_property4();
  v24 = v58;
  LODWORD(v25) = v50;
  v53 = tinfo_property4;
  if ( !v58 )
    goto LABEL_49;
  v23 = v59;
  if ( (_QWORD)v59 )
    goto LABEL_38;
LABEL_45:
  v52 = v25;
  *(_QWORD *)&v59 = 0;
  qfree();
  LODWORD(v25) = v52;
LABEL_49:
  if ( v53 != -1 )
  {
    LODWORD(v59) = 0;
    DWORD1(v59) = v25;
    v57 = 0;
    v58 = 0;
    copy_tinfo_t();
    tinfo = create_tinfo();
    clear_tinfo_t();
    if ( tinfo
      && (v9->m128i_i32[2] == 65
        ? (v30 = sub_274740(v46, v53, &v57, &v9[1].m128i_u64[1], &v56, v49))
        : (v30 = sub_274630(v46, v53, &v57, 0, &v56, v49)),
          (v12 = v30) != 0) )
    {
      copy_tinfo_t();
    }
    else
    {
      v12 = 0;
    }
    clear_tinfo_t();
    goto LABEL_5;
  }
LABEL_4:
  v12 = 0;
LABEL_5:
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  if ( !v12 )
    goto LABEL_12;
  *(_BYTE *)(*(_QWORD *)(v8 + 8) + 104LL) = 1;
LABEL_11:
  if ( (unsigned int)sub_268310(v8) && !(unsigned __int8)sub_251F40((__int64)v9) )
  {
    if ( *(_DWORD *)(v8 + 444) != 3 )
      goto LABEL_22;
    if ( a7 )
    {
      if ( *(_DWORD *)(v8 + 440) )
        return 0;
      if ( *(_BYTE *)(v8 + 453) )
        goto LABEL_24;
    }
    else if ( *(_BYTE *)(v8 + 453) )
    {
LABEL_22:
      if ( !*(_DWORD *)(v8 + 440) || (get_tinfo_property() & 0xF) == 0xB )
      {
LABEL_24:
        v21 = sub_268610((__int64 *)v8, a3, a4, a5, a6);
        if ( v21 )
          goto LABEL_25;
        return 0;
      }
      if ( (get_tinfo_property() & 0xF) != 0xA )
      {
        if ( !under_debugger )
          sub_37E160(51274);
        goto LABEL_107;
      }
      tinfo_property = get_tinfo_property();
      tinfo_size = get_tinfo_size();
      if ( tinfo_size <= 0 )
        return 0;
      if ( tinfo_size != tinfo_property )
      {
        v38 = a6 / tinfo_size;
        if ( a6 % tinfo_size || a4 && !is_mul_ok(a4, tinfo_size) )
          return 0;
        a4 *= tinfo_size;
        if ( a3 )
        {
          v39 = a3[3];
          if ( tinfo_property )
          {
            if ( v39 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 16LL) / (unsigned __int64)tinfo_property < v39 )
              return 0;
          }
          a3[3] = v39 * tinfo_property;
          if ( !sub_266260(*(_QWORD *)v8, a3, a4) )
            return 0;
        }
        a6 = v38;
      }
      v21 = sub_268610((__int64 *)v8, a3, a4, a5, a6);
      if ( !v21 )
        return 0;
      v9 = (const __m128i *)sub_266EB0(v8, (__int64)v9);
LABEL_25:
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        v22 = j__qalloc_or_throw();
        *(_QWORD *)v22 = -1;
        *(_DWORD *)(v22 + 8) = 58;
        *(_QWORD *)(v22 + 12) = -1;
        *(_QWORD *)(v22 + 24) = v9;
        *(_QWORD *)(v22 + 32) = v21;
        *(_QWORD *)(v22 + 40) = 0;
        *(_QWORD *)(v22 + 48) = 0;
        *(_DWORD *)(v22 + 56) = 0;
        sub_23F940(v22, *(_QWORD *)(*(_QWORD *)v8 + 112LL), 0);
        *(_DWORD *)(v22 + 56) |= 1u;
        ++*(_DWORD *)(v8 + 440);
        return sub_266EB0(v8, v22);
      }
      if ( !under_debugger )
        sub_37E160(50207);
LABEL_107:
      BUG();
    }
    v31 = get_tinfo_size();
    v32 = *(_DWORD *)(v8 + 436);
    if ( (!v32 || v32 == v31) && !*(_DWORD *)(v8 + 440) )
    {
      v21 = sub_268610((__int64 *)v8, a3, a4, a5, a6);
      if ( !v21 )
        return 0;
      v33 = j__qalloc_or_throw();
      *(_QWORD *)(v33 + 24) = v9;
      *(_QWORD *)(v33 + 40) = 0;
      v9 = (const __m128i *)v33;
      *(_QWORD *)v33 = -1;
      *(_DWORD *)(v33 + 8) = 51;
      *(_QWORD *)(v33 + 12) = -1;
      *(_QWORD *)(v33 + 32) = 0;
      *(_QWORD *)(v33 + 48) = 0;
      *(_DWORD *)(v33 + 56) = 0;
      *(_DWORD *)(v33 + 40) = v31;
      sub_23F940(v33, *(_QWORD *)(*(_QWORD *)v8 + 112LL), 0);
      *(_DWORD *)(v33 + 56) |= 1u;
      goto LABEL_25;
    }
  }
LABEL_12:
  if ( v9->m128i_i32[2] != 58 )
    return 0;
  if ( a7 )
    return 0;
  v13 = sub_268610((__int64 *)v8, a3, a4, a5, a6);
  v14 = (__int64 *)v13;
  if ( !v13 )
    return 0;
  v15 = *(_DWORD *)(v13 + 8);
  if ( v15 == 47 )
  {
    v16 = 36;
    sub_250FD0(v14, v14[3]);
  }
  else if ( v15 == 61 && sub_2511B0((__int64 *)v14[3]) < 0 )
  {
    v16 = (unsigned __int8)sub_23C350((__int64)v14, *(_QWORD *)v8, *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL), v34, v35)
        + 35;
  }
  else
  {
    v16 = 35;
  }
  v17 = j__qalloc_or_throw();
  v18 = _mm_loadl_epi64(v9 + 2);
  v19 = v17;
  *(_QWORD *)v17 = -1;
  *(_DWORD *)(v17 + 8) = v16;
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  *(__m128i *)(v17 + 24) = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)v14);
  sub_23F940(v17, *(_QWORD *)(*(_QWORD *)v8 + 112LL), 0);
  *(_DWORD *)(v19 + 56) |= 1u;
  v9[2].m128i_i64[0] = v19;
  return (__int64)v9;
}

