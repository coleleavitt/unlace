__int64 __fastcall sub_197680(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  char *v9; // rax
  __m128i si128; // xmm2
  __int64 v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  int *v15; // rsi
  unsigned __int8 *v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rbx
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  unsigned __int64 v23; // rax
  __int64 v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __m128i v29; // [rsp+10h] [rbp-168h] BYREF
  char *v30; // [rsp+20h] [rbp-158h]
  __int64 v31; // [rsp+28h] [rbp-150h]
  __m128i v32; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int8 v33[16]; // [rsp+40h] [rbp-138h] BYREF
  __m128i v34; // [rsp+50h] [rbp-128h]
  __int64 v35; // [rsp+60h] [rbp-118h]
  __m128i v36; // [rsp+68h] [rbp-110h] BYREF
  int v37; // [rsp+78h] [rbp-100h] BYREF
  __int64 v38; // [rsp+80h] [rbp-F8h]
  int v39; // [rsp+88h] [rbp-F0h]
  char v40[8]; // [rsp+90h] [rbp-E8h] BYREF
  int *v41; // [rsp+98h] [rbp-E0h]
  __int64 v42; // [rsp+A0h] [rbp-D8h]
  __int64 v43; // [rsp+B0h] [rbp-C8h]
  __m128i v44; // [rsp+B8h] [rbp-C0h]
  int v45; // [rsp+D8h] [rbp-A0h]
  _BYTE v46[8]; // [rsp+E0h] [rbp-98h] BYREF
  int *v47; // [rsp+E8h] [rbp-90h]
  __int64 v48; // [rsp+F0h] [rbp-88h]
  __int64 v49; // [rsp+100h] [rbp-78h]
  __m128i v50; // [rsp+108h] [rbp-70h]
  int v51; // [rsp+128h] [rbp-50h]
  char v52; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v53; // [rsp+138h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 4 )
    return 0;
  v7 = *(int *)(a2 + 68);
  if ( v7 != get_tinfo_size() )
    return 0;
  if ( !sub_197540(*(_QWORD *)(a1 + 1496), (char *)(a2 + 64), (__int64)a3) )
    goto LABEL_27;
  v8 = *(_BYTE *)(a2 + 32);
  if ( v8 > 6u )
  {
    if ( (unsigned __int8)(v8 - 9) <= 1u )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( v8 <= 4u )
  {
LABEL_27:
    if ( sub_197540(*(_QWORD *)(a1 + 1496), (char *)(a2 + 32), (__int64)a3) )
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
  v9 = v40;
  v30 = &v52;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
    *(_OWORD *)(v9 + 40) = 0;
    *(_WORD *)v9 = 0;
    v9 += 80;
    *((_WORD *)v9 - 39) = 0;
    *((_DWORD *)v9 - 19) = -1;
    *((_QWORD *)v9 - 9) = 0;
    *((__m128i *)v9 - 4) = si128;
    *((_QWORD *)v9 - 6) = 0;
    *((_DWORD *)v9 - 6) = 0;
    *((_QWORD *)v9 - 2) = 0;
    *((_DWORD *)v9 - 2) = 0;
  }
  while ( v30 != v9 );
  v29.m128i_i64[0] = (__int64)v46;
  sub_11F840((__int64)v33, (unsigned __int8 *)(a2 + 64));
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v34 = _mm_load_si128((const __m128i *)&xmmword_407230);
  v36 = 0;
  sub_120F80((__int64)v40, v33);
  v42 = v34.m128i_i64[0];
  copy_tinfo_t();
  v11 = v35;
  v35 = 0;
  v12 = _mm_loadu_si128(&v36);
  v36 = 0;
  if ( v43 )
  {
    v29 = v12;
    v44.m128i_i64[0] = 0;
    qfree();
    v12 = _mm_load_si128(&v29);
  }
  v43 = v11;
  v44 = v12;
  copy_argloc();
  v45 = v39;
  cleanup_argloc();
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_118BA0((__int64)v33);
  v29.m128i_i64[0] = (__int64)v46;
  sub_11F840((__int64)v33, (unsigned __int8 *)(a2 + 32));
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v29.m128i_i64[0] = (__int64)v46;
  v34 = _mm_load_si128((const __m128i *)&xmmword_407230);
  v36 = 0;
  sub_120F80((__int64)v46, v33);
  v48 = v34.m128i_i64[0];
  copy_tinfo_t();
  v13 = v35;
  v35 = 0;
  v14 = _mm_loadu_si128(&v36);
  v36 = 0;
  if ( v49 )
  {
    v31 = v13;
    v32 = v14;
    v50.m128i_i64[0] = 0;
    qfree();
    v14 = _mm_load_si128(&v32);
    v13 = v31;
  }
  v15 = &v37;
  v49 = v13;
  v50 = v14;
  copy_argloc();
  v51 = v39;
  cleanup_argloc();
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  v16 = v33;
  sub_118BA0((__int64)v33);
  v17 = *(_QWORD *)(a1 + 1496);
  if ( v40[0] == 9 )
  {
    v23 = v41[4];
    if ( *(_QWORD *)(*(_QWORD *)v41 + 440LL) < v23 )
      sub_1911E0(v33, &v37);
    v24 = *(_QWORD *)(*(_QWORD *)v41 + 432LL) + 104 * v23;
    if ( (get_tinfo_property() & 0xF) == 0xB )
      goto LABEL_46;
    v16 = *(unsigned __int8 **)(v17 + 248);
    v15 = (_DWORD *)&word_2;
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      if ( a3 )
      {
        if ( *(_DWORD *)v24 == 1 )
        {
          v25 = (_QWORD *)*a3;
          v26 = *a3 + 8LL * a3[1];
          if ( *a3 != v26 )
          {
            while ( *(_QWORD *)(v24 + 8) != *v25 )
            {
              if ( (_QWORD *)v26 == ++v25 )
                goto LABEL_45;
            }
            if ( v25 != (_QWORD *)v26 )
              goto LABEL_46;
          }
        }
      }
LABEL_45:
      v15 = *(int **)(v24 + 80);
      v16 = nullptr;
      if ( get_tinfo_size() != *(_DWORD *)(*(_QWORD *)(v17 + 112) + 80LL) )
      {
LABEL_46:
        v15 = *(int **)(v17 + 112);
        v16 = (unsigned __int8 *)v40;
        sub_118750(v40, (__int64)v15);
      }
    }
    v17 = *(_QWORD *)(a1 + 1496);
  }
  if ( v46[0] == 9 )
  {
    v21 = v47[4];
    if ( *(_QWORD *)(*(_QWORD *)v47 + 440LL) < v21 )
      sub_1911E0(v16, v15);
    v22 = *(_QWORD *)(*(_QWORD *)v47 + 432LL) + 104 * v21;
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( (get_tinfo_property() & 0xF) != 0xB )
        goto LABEL_19;
      if ( !a3 )
        goto LABEL_38;
      if ( *(_DWORD *)v22 != 1 )
        goto LABEL_38;
      v27 = (_QWORD *)*a3;
      v28 = *a3 + 8LL * a3[1];
      if ( *a3 == v28 )
        goto LABEL_38;
      while ( *(_QWORD *)(v22 + 8) != *v27 )
      {
        if ( (_QWORD *)v28 == ++v27 )
          goto LABEL_38;
      }
      if ( (_QWORD *)v28 == v27 )
      {
LABEL_38:
        if ( get_tinfo_size() == *(_DWORD *)(*(_QWORD *)(v17 + 112) + 80LL) )
          goto LABEL_19;
      }
    }
    sub_118750((char *)v29.m128i_i64[0], *(_QWORD *)(v17 + 112));
  }
LABEL_19:
  v18 = sub_192840(a1, *(_QWORD *)(a2 + 24), (__int64)v40);
  *(_QWORD *)(v18 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v18 + 16) = *(_QWORD *)(a2 + 16);
  sub_119690(a2, v18);
  if ( v18 )
  {
    sub_118BA0(v18 + 64);
    sub_118BA0(v18 + 48);
    sub_118BA0(v18 + 32);
    j__qfree();
  }
  v19 = (__int64)v30;
  do
  {
    v19 -= 80;
    cleanup_argloc();
    if ( *(_QWORD *)(v19 + 32) )
    {
      *(_QWORD *)(v19 + 40) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_118BA0(v19);
  }
  while ( (char *)v19 != v40 );
  return 1;
}

