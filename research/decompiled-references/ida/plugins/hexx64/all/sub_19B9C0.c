__int64 __fastcall sub_19B9C0(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  unsigned __int8 *v8; // rax
  __m128i si128; // xmm2
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r13
  __int64 tinfo_size; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __m128i v31; // [rsp+10h] [rbp-168h] BYREF
  unsigned __int8 *v32; // [rsp+20h] [rbp-158h]
  __int64 v33; // [rsp+28h] [rbp-150h]
  __m128i v34; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int8 v35[16]; // [rsp+40h] [rbp-138h] BYREF
  __m128i v36; // [rsp+50h] [rbp-128h]
  __int64 v37; // [rsp+60h] [rbp-118h]
  __m128i v38; // [rsp+68h] [rbp-110h] BYREF
  int v39; // [rsp+78h] [rbp-100h]
  __int64 v40; // [rsp+80h] [rbp-F8h]
  int v41; // [rsp+88h] [rbp-F0h]
  unsigned __int8 v42[8]; // [rsp+90h] [rbp-E8h] BYREF
  int *v43; // [rsp+98h] [rbp-E0h]
  __int64 v44; // [rsp+A0h] [rbp-D8h]
  __int64 v45; // [rsp+B0h] [rbp-C8h]
  __m128i v46; // [rsp+B8h] [rbp-C0h]
  int v47; // [rsp+D8h] [rbp-A0h]
  unsigned __int8 v48[8]; // [rsp+E0h] [rbp-98h] BYREF
  int *v49; // [rsp+E8h] [rbp-90h]
  __int64 v50; // [rsp+F0h] [rbp-88h]
  __int64 v51; // [rsp+100h] [rbp-78h]
  __m128i v52; // [rsp+108h] [rbp-70h]
  int v53; // [rsp+128h] [rbp-50h]
  char v54; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v55; // [rsp+138h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 4 )
    return 0;
  v6 = *(int *)(a2 + 68);
  if ( v6 != get_tinfo_size() )
    return 0;
  if ( !sub_19B880(*(_QWORD *)(a1 + 1496), (char *)(a2 + 64), (__int64)a3, a4) )
    goto LABEL_27;
  v7 = *(_BYTE *)(a2 + 32);
  if ( v7 > 6u )
  {
    if ( (unsigned __int8)(v7 - 9) <= 1u )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( v7 <= 4u )
  {
LABEL_27:
    if ( sub_19B880(*(_QWORD *)(a1 + 1496), (char *)(a2 + 32), (__int64)a3, a4) )
    {
      v20 = *(_BYTE *)(a2 + 64);
      if ( v20 > 6u )
      {
        if ( (unsigned __int8)(v20 - 9) <= 1u )
          goto LABEL_7;
      }
      else if ( v20 > 4u )
      {
        goto LABEL_7;
      }
    }
    return 0;
  }
LABEL_7:
  v8 = v42;
  v32 = (unsigned __int8 *)&v54;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    *(_OWORD *)(v8 + 40) = 0;
    *(_WORD *)v8 = 0;
    v8 += 80;
    *((_WORD *)v8 - 39) = 0;
    *((_DWORD *)v8 - 19) = -1;
    *((_QWORD *)v8 - 9) = 0;
    *((__m128i *)v8 - 4) = si128;
    *((_QWORD *)v8 - 6) = 0;
    *((_DWORD *)v8 - 6) = 0;
    *((_QWORD *)v8 - 2) = 0;
    *((_DWORD *)v8 - 2) = 0;
  }
  while ( v32 != v8 );
  v31.m128i_i64[0] = (__int64)v48;
  sub_123A40((__int64)v35, (unsigned __int8 *)(a2 + 64), 0, 0);
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v36 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v38 = 0;
  sub_125180(v42, v35);
  v44 = v36.m128i_i64[0];
  copy_tinfo_t();
  v10 = v37;
  v37 = 0;
  v11 = _mm_loadu_si128(&v38);
  v38 = 0;
  if ( v45 )
  {
    v31 = v11;
    v46.m128i_i64[0] = 0;
    qfree(v45);
    v11 = _mm_load_si128(&v31);
  }
  v45 = v10;
  v46 = v11;
  copy_argloc();
  v47 = v41;
  cleanup_argloc();
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree(v37);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v35);
  v31.m128i_i64[0] = (__int64)v48;
  sub_123A40((__int64)v35, (unsigned __int8 *)(a2 + 32), v12, v13);
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v31.m128i_i64[0] = (__int64)v48;
  v36 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v38 = 0;
  sub_125180(v48, v35);
  v50 = v36.m128i_i64[0];
  copy_tinfo_t();
  v14 = v37;
  v37 = 0;
  v15 = _mm_loadu_si128(&v38);
  v38 = 0;
  if ( v51 )
  {
    v33 = v14;
    v34 = v15;
    v52.m128i_i64[0] = 0;
    qfree(v51);
    v15 = _mm_load_si128(&v34);
    v14 = v33;
  }
  v51 = v14;
  v52 = v15;
  copy_argloc();
  v53 = v41;
  cleanup_argloc();
  if ( v37 )
  {
    v38.m128i_i64[0] = 0;
    qfree(v37);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v35);
  v16 = *(_QWORD *)(a1 + 1496);
  if ( v42[0] == 9 )
  {
    v25 = v43[4];
    if ( *(_QWORD *)(*(_QWORD *)v43 + 440LL) < v25 )
      sub_1953E0(*(double *)v15.m128i_i64);
    v26 = *(_QWORD *)(*(_QWORD *)v43 + 432LL) + 104 * v25;
    if ( (get_tinfo_property() & 0xF) == 0xB )
      goto LABEL_46;
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      if ( a3 )
      {
        if ( *(_DWORD *)v26 == 1 )
        {
          v29 = (_QWORD *)*a3;
          tinfo_size = *a3 + 8LL * a3[1];
          if ( *a3 != tinfo_size )
          {
            while ( *(_QWORD *)(v26 + 8) != *v29 )
            {
              if ( (_QWORD *)tinfo_size == ++v29 )
                goto LABEL_45;
            }
            if ( v29 != (_QWORD *)tinfo_size )
              goto LABEL_46;
          }
        }
      }
LABEL_45:
      tinfo_size = get_tinfo_size();
      if ( tinfo_size != *(_DWORD *)(*(_QWORD *)(v16 + 112) + 80LL) )
LABEL_46:
        sub_11C950(v42, *(_QWORD *)(v16 + 112), tinfo_size, v28, *(double *)v15.m128i_i64);
    }
    v16 = *(_QWORD *)(a1 + 1496);
  }
  if ( v48[0] == 9 )
  {
    v21 = v49[4];
    if ( *(_QWORD *)(*(_QWORD *)v49 + 440LL) < v21 )
      sub_1953E0(*(double *)v15.m128i_i64);
    v22 = *(_QWORD *)(*(_QWORD *)v49 + 432LL) + 104 * v21;
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( (get_tinfo_property() & 0xF) != 0xB )
        goto LABEL_19;
      if ( !a3 )
        goto LABEL_38;
      if ( *(_DWORD *)v22 != 1 )
        goto LABEL_38;
      v30 = (_QWORD *)*a3;
      v23 = *a3 + 8LL * a3[1];
      if ( *a3 == v23 )
        goto LABEL_38;
      while ( *(_QWORD *)(v22 + 8) != *v30 )
      {
        if ( (_QWORD *)v23 == ++v30 )
          goto LABEL_38;
      }
      if ( (_QWORD *)v23 == v30 )
      {
LABEL_38:
        v23 = get_tinfo_size();
        if ( v23 == *(_DWORD *)(*(_QWORD *)(v16 + 112) + 80LL) )
          goto LABEL_19;
      }
    }
    sub_11C950((unsigned __int8 *)v31.m128i_i64[0], *(_QWORD *)(v16 + 112), v23, v24, *(double *)v15.m128i_i64);
  }
LABEL_19:
  v17 = sub_196A40(a1, *(_QWORD *)(a2 + 24), (__int64)v42, *(double *)v15.m128i_i64, (__m128)0LL);
  *(_QWORD *)(v17 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v17 + 16) = *(_QWORD *)(a2 + 16);
  sub_11D890(a2, v17);
  if ( v17 )
  {
    sub_11CDA0(v17 + 64);
    sub_11CDA0(v17 + 48);
    sub_11CDA0(v17 + 32);
    j__qfree(v17);
  }
  v18 = (__int64)v32;
  do
  {
    v18 -= 80;
    cleanup_argloc();
    v19 = *(_QWORD *)(v18 + 32);
    if ( v19 )
    {
      *(_QWORD *)(v18 + 40) = 0;
      qfree(v19);
    }
    clear_tinfo_t();
    sub_11CDA0(v18);
  }
  while ( (unsigned __int8 *)v18 != v42 );
  return 1;
}

