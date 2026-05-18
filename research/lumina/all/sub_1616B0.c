unsigned __int64 __fastcall sub_1616B0(__int64 a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  __m128i *v11; // rbx
  char *v12; // r12
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned __int8 *v17; // rbp
  __int32 v18; // edx
  int v19; // r11d
  int v20; // r10d
  const char *v21; // rdx
  int v22; // r10d
  __int64 *v23; // rax
  __int64 v24; // r9
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 m128i_i64; // r14
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r9
  int v32; // r15d
  char *v33; // rdi
  int v34; // r14d
  __int64 v35; // rbp
  __int64 v36; // rdi
  __int64 *v37; // rax
  __int64 v38; // rdi
  __m128i *v39; // rsi
  __m128i *v40; // rax
  __int64 v41; // r14
  int v42; // eax
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rdi
  bool v53; // zf
  const __m128i *v54; // rdx
  __int64 *v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  int v59; // [rsp+4h] [rbp-64h] BYREF
  char *v60; // [rsp+8h] [rbp-60h] BYREF
  __int64 *v61; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v62; // [rsp+18h] [rbp-50h] BYREF
  __int64 v63; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v64; // [rsp+28h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v9 = *(_QWORD *)a1;
  v10 = *a4;
  v60 = nullptr;
  v61 = nullptr;
  v62 = nullptr;
  v11 = *(__m128i **)(v9 + 24);
  v12 = (char *)sub_D9DB0(v10, 1u, a2, (__int64)a4, a5, a6, a7);
  v17 = (unsigned __int8 *)sub_D9DB0(a4[1], 1u, a2, v13, v14, v15, v16);
  if ( !v12 )
    v12 = "";
  if ( !v17 )
    v17 = (unsigned __int8 *)"";
  if ( (v11[12].m128i_i8[6] & 4) != 0 )
  {
    v27 = sub_FF150("memdb", (_BYTE *)&dword_0 + 1);
    v63 = v27;
    if ( !v27 )
      return __readfsqword(0x28u) ^ v64;
    m128i_i64 = v11[2].m128i_i64[0] + 32LL * v11[12].m128i_u8[4];
    v29 = *(_QWORD *)(m128i_i64 + 8);
    if ( v29 )
    {
      sub_11C990(v29);
      v27 = v63;
    }
    v30 = (__int64)&unk_1BA838;
    *(_QWORD *)(m128i_i64 + 8) = 0;
    *(_QWORD *)(m128i_i64 + 24) = 0;
    v32 = sub_11B4B0(v27, (__int64)&unk_1BA838, (__int64)v11, (_QWORD *)(m128i_i64 + 8), 0, 256);
    goto LABEL_20;
  }
  v18 = v11[10].m128i_i32[1];
  v19 = v11[2].m128i_i32[2];
  if ( v19 >= v18 + 2 )
  {
    v23 = (__int64 *)sub_E8280((__int64)v11, "too many attached databases - max %d", v18);
    v62 = v23;
    if ( !v23 )
      return __readfsqword(0x28u) ^ v64;
    goto LABEL_14;
  }
  v20 = 0;
  if ( v19 > 0 )
  {
    while ( !(unsigned int)sub_CF2D0((__int64)v11, v20, v17) )
    {
      v20 = v22 + 1;
      if ( v19 == v20 )
        goto LABEL_32;
    }
    v23 = (__int64 *)sub_E8280((__int64)v11, "database %s is already in use", v21);
    v62 = v23;
    if ( !v23 )
      return __readfsqword(0x28u) ^ v64;
LABEL_14:
    v26 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 36) = 1;
    sub_F11D0(v26, v23, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v24);
    if ( v62 )
      sub_C9250((__int64)v11, v62);
    return __readfsqword(0x28u) ^ v64;
  }
LABEL_32:
  v39 = (__m128i *)v11[2].m128i_i64[0];
  if ( v39 == &v11[41] )
  {
    v40 = (__m128i *)sub_DBF10((__int64)v11, 96);
    if ( !v40 )
      return __readfsqword(0x28u) ^ v64;
    v54 = (const __m128i *)v11[2].m128i_i64[0];
    *v40 = _mm_loadu_si128(v54);
    v40[1] = _mm_loadu_si128(v54 + 1);
    v40[2] = _mm_loadu_si128(v54 + 2);
    v40[3] = _mm_loadu_si128(v54 + 3);
  }
  else
  {
    v40 = (__m128i *)sub_DFAD0((__int64)v11, v39, 32LL * (v19 + 1));
    if ( !v40 )
      return __readfsqword(0x28u) ^ v64;
  }
  v41 = v11[2].m128i_i32[2];
  a2 = 0.0;
  v11[2].m128i_i64[0] = (__int64)v40;
  m128i_i64 = (__int64)v40[2 * v41].m128i_i64;
  *(_OWORD *)m128i_i64 = 0;
  *(_OWORD *)(m128i_i64 + 16) = 0;
  v59 = v11[4].m128i_i32[3];
  v42 = sub_10A750(*(_QWORD *)(v11->m128i_i64[0] + 24), v12, (unsigned int *)&v59, &v63, &v60, &v61);
  if ( v42 )
  {
    if ( v42 == 7 && !v11[6].m128i_i8[7] && !v11[6].m128i_i8[8] )
      sub_DBE60((__int64)v11);
    v44 = *(_QWORD *)a1;
    v45 = v61;
    *(_DWORD *)(a1 + 36) = 1;
    sub_F11D0(v44, v45, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v43);
    sub_C91C0((__int64)v61, (__int64)v45);
    return __readfsqword(0x28u) ^ v64;
  }
  v59 |= 0x100u;
  v57 = sub_11B4B0(v63, (__int64)v60, (__int64)v11, (_QWORD *)(m128i_i64 + 8), 0, v59);
  ++v11[2].m128i_i32[2];
  v30 = (__int64)v17;
  v32 = v57;
  *(_QWORD *)m128i_i64 = sub_DC720((__int64)v11, (const char *)v17);
LABEL_20:
  v11[6].m128i_i8[15] = 0;
  if ( v32 == 19 )
  {
    v30 = (__int64)"database is already attached";
    v32 = 1;
    v55 = (__int64 *)sub_E8280((__int64)v11, "database is already attached");
    v33 = v60;
    v62 = v55;
    *(_BYTE *)(m128i_i64 + 16) = 3;
    if ( !v33 )
      goto LABEL_24;
    goto LABEL_60;
  }
  if ( v32 )
  {
    v33 = v60;
    *(_BYTE *)(m128i_i64 + 16) = 3;
    goto LABEL_23;
  }
  v46 = sub_E3C00((__int64)v11, *(_QWORD *)(m128i_i64 + 8));
  *(_QWORD *)(m128i_i64 + 24) = v46;
  if ( v46 )
  {
    if ( *(_BYTE *)(v46 + 112) && *(_BYTE *)(v46 + 113) != v11[6].m128i_i8[4] )
    {
      v32 = 1;
      v62 = (__int64 *)sub_E8280((__int64)v11, "attached databases must use the same text encoding as main database");
    }
  }
  else
  {
    v32 = 7;
  }
  v47 = *(_QWORD *)(m128i_i64 + 8);
  if ( *(_BYTE *)(v47 + 17) )
  {
    sub_CC740(v47);
    v47 = *(_QWORD *)(m128i_i64 + 8);
  }
  v48 = **(_QWORD **)(v47 + 8);
  if ( !*(_BYTE *)(v48 + 16) )
  {
    v49 = *(_QWORD *)(v48 + 296);
    if ( !v49 || *(_BYTE *)(v49 + 63) != 2 )
      *(_BYTE *)(v48 + 8) = v11[6].m128i_i8[9];
  }
  v50 = sub_CC970(*(_QWORD *)(v11[2].m128i_i64[0] + 8), 0xFFFFFFFFLL);
  sub_CC970(*(_QWORD *)(m128i_i64 + 8), v50);
  v30 = v11[3].m128i_i32[0] & 0x38 | 3u;
  sub_CCF50(*(_QWORD *)(m128i_i64 + 8), v11[3].m128i_i8[0] & 0x38 | 3);
  v52 = *(_QWORD *)(m128i_i64 + 8);
  if ( *(_BYTE *)(v52 + 17) )
  {
    v53 = (*(_DWORD *)(v52 + 20))-- == 1;
    if ( v53 )
      sub_CC7D0(v52, v30, v51);
  }
  *(_BYTE *)(m128i_i64 + 16) = 3;
  v33 = v60;
  if ( v32 )
  {
LABEL_23:
    if ( !v33 )
      goto LABEL_24;
LABEL_60:
    sub_D1DA0((__int64)v33, v30);
    goto LABEL_24;
  }
  if ( !*(_QWORD *)m128i_i64 )
  {
    v32 = 7;
    goto LABEL_23;
  }
  if ( v60 )
    sub_D1DA0((__int64)v60, v30);
  if ( !v11[6].m128i_i8[15] )
    sub_CC760((__int64)v11);
  v11[2].m128i_i32[3] &= ~0x10u;
  v53 = (v11[12].m128i_i8[6] & 4) == 0;
  v11[12].m128i_i8[4] = 0;
  if ( v53 )
  {
    v30 = (__int64)&v62;
    v32 = sub_143990(v11, &v62, a2);
    if ( !v11[6].m128i_i8[15] )
      sub_CC7E0((__int64)v11, (__int64)&v62, v58);
    if ( v32 )
    {
LABEL_24:
      if ( (v11[12].m128i_i8[6] & 4) != 0 )
      {
        v37 = v62;
      }
      else
      {
        v34 = v11[2].m128i_i32[2] - 1;
        v35 = 32LL * v34;
        v36 = *(_QWORD *)(v11[2].m128i_i64[0] + v35 + 8);
        if ( v36 )
        {
          sub_11C990(v36);
          *(_QWORD *)(v11[2].m128i_i64[0] + v35 + 8) = 0;
          *(_QWORD *)(v11[2].m128i_i64[0] + v35 + 24) = 0;
        }
        sub_D8BB0(v11, v30);
        v11[2].m128i_i32[2] = v34;
        if ( v32 == 7 || v32 == 3082 )
        {
          if ( !v11[6].m128i_i8[7] && !v11[6].m128i_i8[8] )
            sub_DBE60((__int64)v11);
          if ( v62 )
            sub_C9250((__int64)v11, v62);
          v37 = (__int64 *)sub_E8280((__int64)v11, "out of memory");
          v62 = v37;
        }
        else
        {
          v37 = v62;
          if ( v62 )
            goto LABEL_30;
          v37 = (__int64 *)sub_E8280((__int64)v11, "unable to open database: %s", v12);
          v62 = v37;
        }
      }
      if ( !v37 )
      {
LABEL_63:
        v56 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 36) = v32;
        if ( (*(_BYTE *)(v56 + 20) & 1) != 0 )
          sub_F4FB0(a1, v32);
        return __readfsqword(0x28u) ^ v64;
      }
LABEL_30:
      v38 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 36) = 1;
      sub_F11D0(v38, v37, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v31);
      if ( v62 )
        sub_C9250((__int64)v11, v62);
      goto LABEL_63;
    }
  }
  else if ( !v11[6].m128i_i8[15] )
  {
    sub_CC7E0((__int64)v11, v30, v51);
  }
  return __readfsqword(0x28u) ^ v64;
}
