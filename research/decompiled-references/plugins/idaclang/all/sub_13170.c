__int64 __fastcall sub_13170(
        char *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __m128i a9,
        __int64 a10)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rsi
  const char *v15; // rdx
  __int64 idati; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // dl
  const char *v37; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // r13
  const char *v52; // rsi
  const char *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  const char *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int128 v75; // xmm0
  const char *v76; // r14
  const char *v77; // rdx
  __int128 v78; // xmm0
  __int128 v79; // [rsp+0h] [rbp-150h]
  const char *v80; // [rsp+30h] [rbp-120h]
  unsigned __int8 v81; // [rsp+38h] [rbp-118h]
  __int64 v82; // [rsp+38h] [rbp-118h]
  __int64 v83; // [rsp+40h] [rbp-110h] BYREF
  __int64 v84; // [rsp+48h] [rbp-108h] BYREF
  const char *v85; // [rsp+50h] [rbp-100h] BYREF
  __int128 v86; // [rsp+58h] [rbp-F8h]
  const char *v87; // [rsp+70h] [rbp-E0h] BYREF
  __int64 v88; // [rsp+78h] [rbp-D8h]
  __int128 v89; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v90; // [rsp+A0h] [rbp-B0h] BYREF
  int v91; // [rsp+A8h] [rbp-A8h]
  __int16 v92; // [rsp+ACh] [rbp-A4h]
  __m128i v93; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-90h]
  __m128i v95; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-70h]
  __m128i v97; // [rsp+F0h] [rbp-60h] BYREF
  __m128i v98; // [rsp+100h] [rbp-50h] BYREF
  unsigned __int64 v99; // [rsp+118h] [rbp-38h]

  v11 = a9.m128i_i64[1];
  v12 = a10;
  v99 = __readfsqword(0x28u);
  v14 = a9.m128i_i64[0];
  v93 = a9;
  v94 = a10;
  if ( !a2[26] )
    goto LABEL_2;
  v39 = sub_BB20();
  if ( (int)sub_B790(v39, v14, v40, v41, v42, v43, (__int128)_mm_load_si128(&v93), v94) <= 0 )
    goto LABEL_23;
  v44 = sub_BB20();
  sub_A6E0((__int64)&v97, v44, v45, v46, v47, v48, (__int128)_mm_load_si128(&v93), v94);
  v49 = sub_BB20();
  if ( (unsigned int)sub_B610(v49, v97.m128i_u32[0]) )
    goto LABEL_23;
  sub_C260((__int64)&v87);
  v50 = a2[25];
  a4 = (__int64)v87;
  v80 = v87;
  v82 = v50 + 24 * a2[26];
  if ( v50 == v82 )
    goto LABEL_56;
  v51 = v88;
  while ( 1 )
  {
    if ( *(_QWORD *)(v50 + 8) )
    {
      v52 = *(const char **)v50;
      v53 = s1;
      if ( !v51 )
        goto LABEL_27;
      goto LABEL_32;
    }
    if ( !v51 )
      break;
    v52 = s1;
LABEL_32:
    v53 = v80;
LABEL_27:
    if ( !strcmp(v53, v52) )
      break;
    v50 += 24;
    if ( v82 == v50 )
      goto LABEL_56;
  }
  if ( v50 == v82 )
  {
LABEL_56:
    if ( !v80 )
      goto LABEL_23;
    v88 = 0;
    v62 = v80;
LABEL_37:
    qfree(v62);
    v11 = a9.m128i_i64[1];
    v14 = a9.m128i_i64[0];
    v12 = a10;
    goto LABEL_2;
  }
  v83 = 0;
  v54 = sub_BB20();
  sub_B7C0((__int64)&v95, v54, 0, v55, v56, v57, (__int128)_mm_load_si128(&v93), v94);
  if ( (unsigned __int8)sub_138E0(
                          (unsigned int)&v83,
                          (_DWORD)a2,
                          v58,
                          v59,
                          v60,
                          v61,
                          (__int128)_mm_load_si128(&v95),
                          v96) )
  {
    v85 = nullptr;
    v84 = 0;
    v89 = 0;
    copy_tinfo_t((char *)&v89 + 8, &v84);
    v90 = 0;
    copy_tinfo_t(&v90, &v85);
    v91 = 0;
    v92 = 0;
    clear_tinfo_t(&v84);
    clear_tinfo_t(&v85);
    copy_tinfo_t(&v89, &v83);
    v81 = create_tinfo(a1, 10, 10, &v89);
    clear_tinfo_t(&v90);
    clear_tinfo_t((char *)&v89 + 8);
    clear_tinfo_t(&v89);
    clear_tinfo_t(&v83);
    if ( v87 )
    {
      v88 = 0;
      qfree(v87);
    }
    if ( !v81 )
    {
      v11 = a9.m128i_i64[1];
      v14 = a9.m128i_i64[0];
      v12 = a10;
      goto LABEL_2;
    }
    return v81;
  }
  clear_tinfo_t(&v83);
  v62 = v87;
  if ( v87 )
  {
    v88 = 0;
    goto LABEL_37;
  }
LABEL_23:
  v11 = a9.m128i_i64[1];
  v14 = a9.m128i_i64[0];
  v12 = a10;
LABEL_2:
  v85 = nullptr;
  v86 = 0;
  *((_QWORD *)&v79 + 1) = v11;
  *(_QWORD *)&v79 = v14;
  v81 = sub_D270((__int64)&v85, 0.0, a8, v14, a3, a4, a5, a6, v79, v12);
  if ( !v81 )
  {
LABEL_17:
    v81 = 0;
    goto LABEL_18;
  }
  v15 = s1;
  if ( (_QWORD)v86 )
    v15 = v85;
  if ( v15 )
  {
    idati = *a2;
    *((_QWORD *)&v89 + 1) = v15;
    LOWORD(v90) = 256;
    if ( !idati )
      idati = get_idati();
    *(_QWORD *)&v89 = idati;
    if ( (unsigned __int8)create_tinfo(a1, 61, 61, &v89) )
      goto LABEL_18;
  }
  v17 = sub_BB20();
  sub_A6E0((__int64)&v97, v17, v18, v19, v20, v21, (__int128)_mm_loadu_si128(&a9), a10);
  v26 = v97.m128i_i32[0];
  if ( v97.m128i_i32[0] > 4u )
  {
    if ( v97.m128i_i32[0] == 601 )
    {
      v63 = sub_BB20();
      sub_AC50((__int64)&v97, v63, v64, v65, v66, v67, (__int128)_mm_loadu_si128(&a9), a10);
      if ( !(unsigned __int8)sub_138E0(
                               (_DWORD)a1,
                               (_DWORD)a2,
                               v68,
                               v69,
                               v70,
                               v71,
                               (__int128)_mm_load_si128(&v97),
                               v98.m128i_i64[0]) )
        goto LABEL_17;
      v75 = (__int128)_mm_loadu_si128(&a9);
      v81 = sub_EE80(a1, a2, nullptr, v72, v73, v74, *(double *)&v75, a8, v75, a10);
      goto LABEL_18;
    }
    goto LABEL_41;
  }
  if ( v97.m128i_i32[0] <= 1u )
  {
LABEL_41:
    sub_E8A0((__int64)&v89, v17, v22, v23, v24, v25, (__int128)_mm_loadu_si128(&a9));
    v76 = s1;
    if ( *((_QWORD *)&v89 + 1) )
      v76 = (const char *)v89;
    sub_E960((__int64)&v87, v26);
    v77 = s1;
    if ( v88 )
      v77 = v87;
    sub_67C0(a2 + 10, (__int64)"Unhandled template kind: %s, type=%s", v77, v76);
    if ( v87 )
    {
      v88 = 0;
      qfree(v87);
    }
    if ( (_QWORD)v89 )
    {
      *((_QWORD *)&v89 + 1) = 0;
      qfree(v89);
    }
    ++a2[17];
    goto LABEL_17;
  }
  v27 = sub_BB20();
  sub_B8E0((__int64)&v97, v27, v28, v29, v30, v31, (__int128)_mm_loadu_si128(&a9), a10);
  if ( v97.m128i_i32[0] == 71 )
  {
    v36 = 13;
    if ( v26 == 3 )
      v36 = 29;
    v37 = s1;
    if ( (_QWORD)v86 )
      v37 = v85;
    if ( !(unsigned __int8)sub_E9F0(a1, v37, v36, a2) )
      goto LABEL_17;
  }
  else
  {
    v78 = (__int128)_mm_load_si128(&v98);
    if ( !(unsigned __int8)sub_12350(
                             a1,
                             (__int64)a2,
                             *(double *)&v78,
                             a8,
                             v32,
                             v33,
                             v34,
                             v35,
                             (__int128)_mm_load_si128(&v97),
                             v78) )
      goto LABEL_17;
  }
LABEL_18:
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  return v81;
}
