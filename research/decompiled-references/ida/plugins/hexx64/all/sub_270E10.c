const __m128i *__fastcall sub_270E10(
        __int64 *a1,
        const __m128i *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        char a8)
{
  __int64 *v9; // rbp
  const __m128i *v10; // rbx
  __int64 v11; // rax
  __int32 v12; // eax
  char v13; // r15
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  int v19; // eax
  int v20; // r14d
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // r12
  __m128i v24; // xmm0
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned __int64 v34; // r10
  __int64 tinfo_property4; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r15
  _QWORD *v38; // rbp
  __int64 v39; // rdi
  __int64 v40; // rdi
  char v41; // al
  int v42; // r13d
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r12
  int tinfo_property; // r13d
  int tinfo_size; // eax
  __int64 v49; // r14
  unsigned __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // r15
  __int64 v54; // rbx
  _QWORD *v55; // rbp
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v61; // [rsp+20h] [rbp-158h]
  __int64 *v62; // [rsp+20h] [rbp-158h]
  __int64 v63; // [rsp+28h] [rbp-150h]
  __int64 v64; // [rsp+28h] [rbp-150h]
  unsigned __int64 v65; // [rsp+30h] [rbp-148h]
  int v66; // [rsp+30h] [rbp-148h]
  int v67; // [rsp+30h] [rbp-148h]
  __int64 v68; // [rsp+38h] [rbp-140h]
  __int64 *v69; // [rsp+40h] [rbp-138h]
  char tinfo; // [rsp+40h] [rbp-138h]
  __int64 v71; // [rsp+50h] [rbp-128h] BYREF
  __int64 v72; // [rsp+58h] [rbp-120h] BYREF
  __int64 v73; // [rsp+60h] [rbp-118h]
  __int128 v74; // [rsp+68h] [rbp-110h]
  __int128 v75; // [rsp+78h] [rbp-100h]
  __int64 v76; // [rsp+88h] [rbp-F0h]
  int v77; // [rsp+90h] [rbp-E8h]
  __m128i v78; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-C8h]
  __int128 v80; // [rsp+B8h] [rbp-C0h]
  __int64 v81; // [rsp+C8h] [rbp-B0h]
  __int128 v82; // [rsp+D0h] [rbp-A8h]
  __int128 v83; // [rsp+E0h] [rbp-98h]
  __int64 v84; // [rsp+110h] [rbp-68h]
  int v85; // [rsp+118h] [rbp-60h]
  __int64 v86; // [rsp+120h] [rbp-58h]
  char v87; // [rsp+128h] [rbp-50h]
  unsigned __int64 v88; // [rsp+138h] [rbp-40h]

  v9 = a1;
  v10 = a2;
  v88 = __readfsqword(0x28u);
  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
    goto LABEL_11;
  v11 = *a1;
  a7 = 0.0;
  v79 = 0;
  v81 = 0;
  v61 = v11;
  v12 = a2->m128i_i32[2];
  v84 = 1;
  v85 = -1;
  v86 = 0;
  v87 = 0;
  v71 = 0;
  v78 = 0;
  v80 = 0;
  v82 = 0;
  v83 = 0;
  if ( v12 == 64 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC || (get_flags_ex() & 0x600) != 0x400 )
      goto LABEL_4;
    v64 = -1;
    LODWORD(v34) = 0;
    v68 = a2[1].m128i_i64[1];
    goto LABEL_49;
  }
  if ( v12 != 65 )
    goto LABEL_4;
  v63 = *(_QWORD *)(a2[1].m128i_i64[1] + 432) + 104LL * a2[2].m128i_i32[0];
  if ( (unsigned int)lexcompare_tinfo() )
  {
    copy_tinfo_t();
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( !under_debugger )
        sub_383060(0xC41Cu, 0.0);
      goto LABEL_107;
    }
    v13 = 1;
    goto LABEL_5;
  }
  if ( (unsigned int)(*(_DWORD *)v63 - 3) <= 1 )
    goto LABEL_4;
  if ( *(_DWORD *)v63 != 1 )
    goto LABEL_4;
  v64 = sub_1D0250((_QWORD *)a2[1].m128i_i64[1], &v78, *(_QWORD *)(v63 + 8), &v72, &v71, 0.0);
  if ( v64 == -1 || !(_BYTE)v71 )
    goto LABEL_4;
  a7 = 0.0;
  v73 = 0;
  v76 = 0;
  v77 = 1;
  v74 = 0;
  v75 = 0;
  get_tinfo_details();
  v32 = v74;
  v33 = v73;
  if ( v64 + 1 == (_QWORD)v74 )
  {
    if ( v73 )
    {
      v53 = v74;
      v62 = v9;
      v54 = 0;
      while ( 1 )
      {
        v55 = (_QWORD *)(v33 + 144 * v54);
        clear_tinfo_t();
        v56 = v55[5];
        if ( v56 )
        {
          v55[6] = 0;
          qfree(v56);
        }
        v57 = v55[2];
        if ( v57 )
        {
          v55[3] = 0;
          qfree(v57);
        }
        if ( ++v54 >= v53 )
          break;
        v33 = v73;
      }
      v9 = v62;
      *(_QWORD *)&v74 = 0;
      v10 = a2;
      qfree(v73);
    }
    goto LABEL_4;
  }
  if ( v78.m128i_i64[1] <= 7uLL )
  {
    if ( !under_debugger )
      sub_383060(0xC41Du, 0.0);
    goto LABEL_107;
  }
  v34 = ((unsigned __int64)(*(_QWORD *)(v73 + 144 * (v64 + 1)) - v78.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v78.m128i_i64[1] >> 3);
  if ( v34 == 1 )
  {
    if ( !v73 )
      goto LABEL_4;
    v68 = -1;
    if ( !(_QWORD)v74 )
    {
      qfree(v73);
      goto LABEL_4;
    }
LABEL_38:
    v66 = v34;
    v69 = v9;
    v36 = 0;
    v37 = v32;
    do
    {
      v38 = (_QWORD *)(v33 + 144 * v36);
      clear_tinfo_t();
      v39 = v38[5];
      if ( v39 )
      {
        v38[6] = 0;
        qfree(v39);
      }
      v40 = v38[2];
      if ( v40 )
      {
        v38[3] = 0;
        qfree(v40);
      }
      ++v36;
      v33 = v73;
    }
    while ( v36 < v37 );
    LODWORD(v34) = v66;
    v9 = v69;
    v10 = a2;
    goto LABEL_45;
  }
  v65 = ((unsigned __int64)(*(_QWORD *)(v73 + 144 * (v64 + 1)) - v78.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v78.m128i_i64[1] >> 3);
  tinfo_property4 = get_tinfo_property4();
  v33 = v73;
  LODWORD(v34) = v65;
  v68 = tinfo_property4;
  if ( !v73 )
    goto LABEL_49;
  v32 = v74;
  if ( (_QWORD)v74 )
    goto LABEL_38;
LABEL_45:
  v67 = v34;
  *(_QWORD *)&v74 = 0;
  qfree(v33);
  LODWORD(v34) = v67;
LABEL_49:
  if ( v68 != -1 )
  {
    LODWORD(v74) = 0;
    DWORD1(v74) = v34;
    v72 = 0;
    v73 = 0;
    copy_tinfo_t();
    tinfo = create_tinfo();
    clear_tinfo_t();
    if ( tinfo
      && (v10->m128i_i32[2] == 65
        ? (v41 = sub_278FC0(v61, v68, &v72, &v10[1].m128i_i32[2], (__int64)&v71, v64))
        : (v41 = sub_278EB0(v61, v68, &v72, 0, (__int64)&v71, v64)),
          (v13 = v41) != 0) )
    {
      copy_tinfo_t();
    }
    else
    {
      v13 = 0;
    }
    clear_tinfo_t();
    goto LABEL_5;
  }
LABEL_4:
  v13 = 0;
LABEL_5:
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  if ( !v13 )
    goto LABEL_12;
  *(_BYTE *)(v9[1] + 104) = 1;
LABEL_11:
  if ( (unsigned int)sub_26CB90((__int64)v9, a7) && !(unsigned __int8)sub_2567C0((__int64)v10) )
  {
    if ( *((_DWORD *)v9 + 111) != 3 )
      goto LABEL_22;
    if ( a8 )
    {
      if ( *((_DWORD *)v9 + 110) )
        return nullptr;
      if ( *((_BYTE *)v9 + 453) )
        goto LABEL_24;
    }
    else if ( *((_BYTE *)v9 + 453) )
    {
LABEL_22:
      if ( !*((_DWORD *)v9 + 110) || (get_tinfo_property() & 0xF) == 0xB )
      {
LABEL_24:
        v26 = sub_26CE90(v9, a3, a4, a5, a6, a7);
        if ( v26 )
          goto LABEL_25;
        return nullptr;
      }
      if ( (get_tinfo_property() & 0xF) != 0xA )
      {
        if ( !under_debugger )
          sub_383060(0xC84Au, a7);
        goto LABEL_107;
      }
      tinfo_property = get_tinfo_property();
      tinfo_size = get_tinfo_size();
      if ( tinfo_size <= 0 )
        return nullptr;
      if ( tinfo_size != tinfo_property )
      {
        v49 = a6 / tinfo_size;
        if ( a6 % tinfo_size || a4 && !is_mul_ok(a4, tinfo_size) )
          return nullptr;
        a4 *= tinfo_size;
        if ( a3 )
        {
          v50 = a3[3];
          if ( tinfo_property )
          {
            if ( v50 && *(_QWORD *)(*(_QWORD *)(*v9 + 24) + 16LL) / (unsigned __int64)tinfo_property < v50 )
              return nullptr;
          }
          a3[3] = v50 * tinfo_property;
          if ( !sub_26AAE0(*v9, a3, a4, a7) )
            return nullptr;
        }
        a6 = v49;
      }
      v26 = sub_26CE90(v9, a3, a4, a5, a6, a7);
      if ( !v26 )
        return nullptr;
      v10 = (const __m128i *)sub_26B730((__int64)v9, (__int64)v10, v51, v52, a7);
LABEL_25:
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        v29 = j__qalloc_or_throw(64, 2, v27, v28);
        *(_QWORD *)v29 = -1;
        *(_DWORD *)(v29 + 8) = 58;
        *(_QWORD *)(v29 + 12) = -1;
        *(_QWORD *)(v29 + 24) = v10;
        *(_QWORD *)(v29 + 32) = v26;
        *(_QWORD *)(v29 + 40) = 0;
        *(_QWORD *)(v29 + 48) = 0;
        *(_DWORD *)(v29 + 56) = 0;
        sub_2441C0(v29, *(_QWORD *)(*v9 + 112), 0, a7);
        *(_DWORD *)(v29 + 56) |= 1u;
        ++*((_DWORD *)v9 + 110);
        return (const __m128i *)sub_26B730((__int64)v9, v29, v30, v31, a7);
      }
      if ( !under_debugger )
        sub_383060(0xC41Fu, a7);
LABEL_107:
      BUG();
    }
    v42 = get_tinfo_size();
    v43 = *((_DWORD *)v9 + 109);
    if ( (!v43 || v43 == v42) && !*((_DWORD *)v9 + 110) )
    {
      v26 = sub_26CE90(v9, a3, a4, a5, a6, a7);
      if ( !v26 )
        return nullptr;
      v46 = j__qalloc_or_throw(64, (__int64)a3, v44, v45);
      *(_QWORD *)(v46 + 24) = v10;
      *(_QWORD *)(v46 + 40) = 0;
      v10 = (const __m128i *)v46;
      *(_QWORD *)v46 = -1;
      *(_DWORD *)(v46 + 8) = 51;
      *(_QWORD *)(v46 + 12) = -1;
      *(_QWORD *)(v46 + 32) = 0;
      *(_QWORD *)(v46 + 48) = 0;
      *(_DWORD *)(v46 + 56) = 0;
      *(_DWORD *)(v46 + 40) = v42;
      sub_2441C0(v46, *(_QWORD *)(*v9 + 112), 0, a7);
      *(_DWORD *)(v46 + 56) |= 1u;
      goto LABEL_25;
    }
  }
LABEL_12:
  if ( v10->m128i_i32[2] != 58 )
    return nullptr;
  if ( a8 )
    return nullptr;
  v14 = a3;
  v15 = sub_26CE90(v9, a3, a4, a5, a6, a7);
  v18 = v15;
  if ( !v15 )
    return nullptr;
  v19 = *(_DWORD *)(v15 + 8);
  if ( v19 == 47 )
  {
    v14 = *(__int64 **)(v18 + 24);
    v20 = 36;
    sub_255850((__int64 *)v18, (__int64)v14, a7);
  }
  else if ( v19 == 61 && (v14 = (__int64 *)(v18 + 48), sub_255A30(*(__int64 **)(v18 + 24)) < 0) )
  {
    v14 = (__int64 *)*v9;
    v20 = (unsigned __int8)sub_240BD0(v18, *v9, *(_QWORD *)(v9[1] + 64), a7) + 35;
  }
  else
  {
    v20 = 35;
  }
  v21 = j__qalloc_or_throw(64, (__int64)v14, v16, v17);
  v22 = _mm_loadl_epi64(v10 + 2);
  v23 = v21;
  *(_QWORD *)v21 = -1;
  v24 = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)v18);
  *(_DWORD *)(v21 + 8) = v20;
  *(_QWORD *)(v21 + 12) = -1;
  *(_QWORD *)(v21 + 40) = 0;
  *(_QWORD *)(v21 + 48) = 0;
  *(_DWORD *)(v21 + 56) = 0;
  *(__m128i *)(v21 + 24) = v24;
  sub_2441C0(v21, *(_QWORD *)(*v9 + 112), 0, *(double *)v24.m128i_i64);
  *(_DWORD *)(v23 + 56) |= 1u;
  v10[2].m128i_i64[0] = v23;
  return v10;
}

