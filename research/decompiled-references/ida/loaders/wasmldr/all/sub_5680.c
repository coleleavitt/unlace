__int64 __fastcall sub_5680(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  bool v13; // cc
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // edx
  void *v23; // rsi
  unsigned int v24; // ebp
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  char *v31; // r12
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  void *v34; // rsi
  __int64 v36; // rdi
  char v37; // dl
  __int64 v38; // rsi
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdi
  __m128i v43; // [rsp+10h] [rbp-D8h] BYREF
  int *i; // [rsp+20h] [rbp-C8h]
  unsigned int v45; // [rsp+2Ch] [rbp-BCh]
  unsigned int v46; // [rsp+30h] [rbp-B8h] BYREF
  int v47; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int v48; // [rsp+38h] [rbp-B0h] BYREF
  int v49; // [rsp+3Ch] [rbp-ACh] BYREF
  char *v50; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+48h] [rbp-A0h]
  _BYTE *v52; // [rsp+60h] [rbp-88h] BYREF
  __m128i v53; // [rsp+68h] [rbp-80h]
  char *v54; // [rsp+80h] [rbp-68h] BYREF
  __m128i v55[2]; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v56; // [rsp+A8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v56 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 92)) == 0 )
    sub_3890((__int64)"elem section: couldn't read elem segment count");
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  v51 = 0;
  v50 = nullptr;
  v50 = (char *)qvector_reserve(&v50, 0, 12, 1);
  *(_QWORD *)&v51 = 12;
  strcpy(v50, "elem count ");
  sub_4EE0((__int64 *)&v50, (__int64)"(%u)", *(_DWORD *)(a1 + 92));
  v7 = (char *)&unk_10F58;
  if ( (_QWORD)v51 )
    v7 = v50;
  set_cmt(*(_QWORD *)(a1 + 40), v7, 0);
  if ( *(_DWORD *)(a1 + 92) )
  {
    v45 = 0;
    do
    {
      sub_3BA0(*(_QWORD *)(a1 + 24), 1u, (__int64)"elem %u", v45);
      v8 = *(_QWORD *)(a1 + 8);
      v9 = v8 + *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(a1 + 32) + v8;
      if ( v9 >= v10 || (v11 = sub_E440(v9, v10, &v46)) == 0 )
        sub_3890((__int64)"elem section: couldn't read elem %u flags", v45);
      v12 = *(_QWORD *)(a1 + 24);
      v13 = v46 <= 7;
      *(_QWORD *)(a1 + 40) = v12;
      *(_QWORD *)(a1 + 24) = v11 + v12;
      if ( !v13 )
        sub_3890((__int64)"elem section: invalid elem %u flags", v45);
      create_data(v12, 0, v11, -1);
      set_cmt(*(_QWORD *)(a1 + 40), "flags", 0);
      v14 = v46;
      v47 = 0;
      if ( (v46 & 3) == 2 )
      {
        v38 = *(_QWORD *)(a1 + 8);
        v39 = v38 + *(_QWORD *)(a1 + 24);
        v40 = *(_QWORD *)(a1 + 32) + v38;
        if ( v39 >= v40 || (v41 = sub_E440(v39, v40, &v47)) == 0 )
          sub_3890((__int64)"elem section: couldn't read elem %u table index", v45);
        v42 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 40) = v42;
        *(_QWORD *)(a1 + 24) = v41 + v42;
        create_data(v42, 0, v41, -1);
        set_cmt(*(_QWORD *)(a1 + 40), "table index", 0);
        v14 = v46;
      }
      if ( (v14 & 1) != 0
        || (auto_mark_range(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24) + 1LL, 20),
            LOBYTE(v54) = 0,
            sub_4A00((_QWORD *)a1, (__m128i *)&v54, 0),
            v14 = v46,
            (v46 & 3) != 0) )
      {
        if ( (v14 & 4) != 0 )
        {
          sub_3940((__int64)"SEGFLAG_USE_ELEM_EXPRS is not currently supported!");
        }
        else
        {
          v36 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v36 + 1) )
            sub_3890((__int64)"couldn't read template type @0x%llx", *(_QWORD *)(a1 + 24));
          v37 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v36);
          *(_QWORD *)(a1 + 40) = v36;
          *(_QWORD *)(a1 + 24) = v36 + 1;
          if ( v37 )
            sub_3890((__int64)"elem section: elem type must be func");
          create_data(v36, 0, 1, -1);
          set_cmt(*(_QWORD *)(a1 + 40), "kind", 0);
        }
      }
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v16 + *(_QWORD *)(a1 + 24);
      v18 = *(_QWORD *)(a1 + 32) + v16;
      if ( v17 >= v18 || (v19 = sub_E440(v17, v18, &v48), (v15 = v19) == 0) )
        sub_3890((__int64)"elem section: couldn't read elem expression count", v18, v15);
      v20 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v20;
      *(_QWORD *)(a1 + 24) = v19 + v20;
      create_data(v20, 0, v19, -1);
      v52 = nullptr;
      v53 = 0;
      v21 = qvector_reserve(&v52, 0, 23, 1);
      v22 = v48;
      v52 = (_BYTE *)v21;
      v53.m128i_i64[0] = 23;
      *(__m128i *)v21 = _mm_load_si128((const __m128i *)&xmmword_F320);
      *(_QWORD *)(v21 + 14) = 0x20746E756F63206ELL;
      v52[22] = 0;
      sub_4EE0((__int64 *)&v52, (__int64)"(%u)", v22);
      v23 = &unk_10F58;
      if ( v53.m128i_i64[0] )
        v23 = v52;
      set_cmt(*(_QWORD *)(a1 + 40), v23, 0);
      v24 = 0;
      for ( i = &v49; v24 < v48; ++v24 )
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)(a1 + 24);
          if ( (v46 & 4) == 0 )
            break;
          auto_mark_range(v25, v25 + 1, 20);
          LOBYTE(v54) = 0;
          sub_4A00((_QWORD *)a1, (__m128i *)&v54, 0);
          if ( ++v24 >= v48 )
            goto LABEL_34;
        }
        v26 = *(_QWORD *)(a1 + 8);
        v27 = v26 + v25;
        v28 = *(_QWORD *)(a1 + 32) + v26;
        if ( v27 >= v28 || (v29 = sub_E440(v27, v28, i)) == 0 )
          sub_3890((__int64)"elem section: couldn't read function index %u", v24);
        v30 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 40) = v30;
        *(_QWORD *)(a1 + 24) = v29 + v30;
        create_data(v30, 0, v29, -1);
        v55[0] = 0;
        v54 = nullptr;
        v54 = (char *)qvector_reserve(&v54, 0, 16, 1);
        v55[0].m128i_i64[0] = 16;
        strcpy(v54, "function index ");
        v31 = v54;
        v32 = _mm_loadu_si128(v55);
        v54 = nullptr;
        v55[0] = 0;
        if ( v52 )
        {
          v43 = v32;
          v53.m128i_i64[0] = 0;
          qfree(v52);
          v33 = _mm_load_si128(&v43);
          v52 = v31;
          v53 = v33;
          if ( v54 )
          {
            v55[0].m128i_i64[0] = 0;
            qfree(v54);
          }
        }
        else
        {
          v52 = v31;
          v53 = v32;
        }
        sub_4EE0((__int64 *)&v52, (__int64)"(%u)", v49);
        v34 = &unk_10F58;
        if ( v53.m128i_i64[0] )
          v34 = v52;
        set_cmt(*(_QWORD *)(a1 + 40), v34, 0);
      }
LABEL_34:
      if ( v52 )
      {
        v53.m128i_i64[0] = 0;
        qfree(v52);
      }
      ++v45;
    }
    while ( v45 < *(_DWORD *)(a1 + 92) );
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  return 1;
}

