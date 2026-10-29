unsigned __int64 __fastcall sub_22500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  const __m128i *v8; // rbx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // r14
  const char *v13; // r13
  char v14; // al
  int v15; // eax
  char v16; // dl
  int v17; // eax
  int v18; // ecx
  char v19; // al
  __int64 selector; // rax
  __m128i v21; // xmm0
  __int16 v22; // dx
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-588h]
  unsigned __int8 v28; // [rsp+1Fh] [rbp-569h]
  __int64 v29; // [rsp+20h] [rbp-568h]
  __m128i v31; // [rsp+30h] [rbp-558h] BYREF
  __int64 v32[4]; // [rsp+40h] [rbp-548h] BYREF
  __int64 v33[4]; // [rsp+60h] [rbp-528h] BYREF
  __m128i v34; // [rsp+80h] [rbp-508h]
  __int128 v35; // [rsp+90h] [rbp-4F8h]
  __int64 v36; // [rsp+A0h] [rbp-4E8h]
  __int64 v37; // [rsp+A8h] [rbp-4E0h]
  __int64 v38; // [rsp+B0h] [rbp-4D8h]
  __int128 v39; // [rsp+B8h] [rbp-4D0h]
  __int128 v40; // [rsp+C8h] [rbp-4C0h]
  __int128 v41; // [rsp+D8h] [rbp-4B0h]
  __int128 v42; // [rsp+E8h] [rbp-4A0h]
  __int128 v43; // [rsp+F8h] [rbp-490h]
  __int128 v44; // [rsp+108h] [rbp-480h]
  __int128 v45; // [rsp+118h] [rbp-470h]
  __int128 v46; // [rsp+128h] [rbp-460h]
  unsigned __int64 v47; // [rsp+138h] [rbp-450h]
  char v48[1032]; // [rsp+140h] [rbp-448h] BYREF
  unsigned __int64 v49; // [rsp+548h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a5 + 68) & 4) == 0 )
    strcmp((const char *)(a5 + 8), "__TEXT");
  v29 = -1;
  if ( (*(_DWORD *)(a2 + 364) & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 32);
    if ( v7 )
      v29 = *(_QWORD *)(v7 + 8);
  }
  v8 = *(const __m128i **)a4;
  v27 = *(_QWORD *)a4 + 16LL * *(_QWORD *)(a4 + 8);
  if ( *(_QWORD *)a4 != v27 )
  {
    do
    {
      v9 = _mm_loadu_si128(v8);
      v10 = *(_QWORD *)(a2 + 8);
      v11 = *(_QWORD *)(a2 + 240);
      v31 = v9;
      if ( *(_QWORD *)(v10 + 16) == v11 || v11 == -1 )
      {
        v12 = 1;
        if ( *(_QWORD *)(a5 + 40) )
          goto LABEL_12;
      }
      else
      {
        if ( v11 < v31.m128i_i64[0] )
          goto LABEL_32;
        v12 = 0;
        if ( v11 >= v31.m128i_i64[1] )
          goto LABEL_32;
        if ( *(_QWORD *)(a5 + 40) )
        {
LABEL_12:
          if ( *(_QWORD *)(a5 + 24) != v29 )
            goto LABEL_13;
        }
      }
      if ( *(_QWORD *)(a5 + 48) )
      {
        v24 = v31.m128i_i64[0];
        if ( v31.m128i_i64[0] == (*(_QWORD *)(a5 + 24) & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL)) )
        {
          v12 = 0;
          qstrncpy();
          if ( !(unsigned __int8)getinf_flag() )
          {
            v12 = 1;
            v26 = getinf();
            if ( v26 >= v24 )
              v12 = v26 >= v31.m128i_i64[1];
          }
          v25 = *(_QWORD *)(a2 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v25 && v25 != -1 )
            sub_22170(
              a1,
              a2,
              a3,
              *(_QWORD *)(a5 + 40),
              v31.m128i_i64[1] - v24,
              (const char **)&v31,
              *(double *)v9.m128i_i64,
              0,
              0);
          v28 = 1;
          v13 = (const char *)(a5 + 8);
          goto LABEL_20;
        }
      }
LABEL_13:
      if ( (*(_BYTE *)(a2 + 364) & 0x50) != 0
        || !(unsigned __int8)sub_11B00(a5, (unsigned __int64 *)&v31, 0)
        && !(unsigned __int8)sub_11B00(a5, (unsigned __int64 *)&v31, 144) )
      {
        v13 = (const char *)(a5 + 8);
        if ( *(_DWORD *)(a5 + 64) )
          goto LABEL_18;
        if ( *(_DWORD *)(a2 + 340) == 12 )
        {
          if ( !strcmp((const char *)(a5 + 8), "__BRANCH_STUBS") || !strcmp((const char *)(a5 + 8), "__BRANCH_GOTS") )
            goto LABEL_47;
LABEL_18:
          qsnprintf();
        }
        else
        {
          if ( (*(_BYTE *)(a2 + 364) & 0x10) == 0 || strncmp((const char *)(a5 + 8), "__OBJC_", 7u) )
            goto LABEL_18;
LABEL_47:
          qstrncpy();
        }
        v28 = 0;
LABEL_20:
        v47 = 0xFFFFFFFF00000000LL;
        v36 = 0;
        v37 = 513;
        v14 = *(_BYTE *)(a1 + 13692);
        v38 = 0;
        v34 = 0;
        *(_DWORD *)((char *)&v37 + 3) = (unsigned __int8)(v14 + 1);
        v35 = 0;
        v39 = -1;
        v40 = -1;
        v41 = -1;
        v42 = -1;
        v43 = -1;
        v44 = -1;
        v45 = -1;
        v46 = -1;
        v15 = strcmp(v13, "__DATA_CONST");
        v16 = 4;
        if ( v15 )
        {
          v17 = strcmp(v13, "__OBJC_RO");
          v16 = 4;
          if ( v17 )
          {
            v18 = *(_DWORD *)(a5 + 60);
            v19 = (4 * v18) & 4;
            if ( (v18 & 2) != 0 )
              v19 = (4 * v18) & 4 | 2;
            v16 = v19 | 1;
            if ( (v18 & 4) == 0 )
              v16 = v19;
          }
        }
        BYTE2(v37) = v16;
        selector = allocate_selector();
        v21 = _mm_load_si128(&v31);
        v38 = selector;
        v34 = v21;
        v22 = WORD2(v37) | 4;
        if ( !v12 )
          v22 = WORD2(v37) & 0xFFFB;
        WORD2(v37) = v22 | (v28 << 6);
        sub_1CE50(v33, a2);
        sub_18750(v32, v48, (__int64)v33);
        if ( v33[0] )
        {
          v33[1] = 0;
          qfree();
        }
        add_segm_ex();
        if ( v32[0] )
        {
          v32[1] = 0;
          qfree();
        }
      }
LABEL_32:
      ++v8;
    }
    while ( (const __m128i *)v27 != v8 );
  }
  return v49 - __readfsqword(0x28u);
}

