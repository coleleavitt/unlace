unsigned __int64 __fastcall sub_224F0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  const __m128i *v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  bool v15; // r14
  const char *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  int v21; // eax
  char v22; // dl
  int v23; // eax
  int v24; // ecx
  char v25; // al
  __int64 selector; // rax
  __m128i v27; // xmm0
  __int16 v28; // dx
  const char *v29; // rsi
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  __int64 v40; // [rsp+0h] [rbp-588h]
  char *v41; // [rsp+10h] [rbp-578h]
  unsigned int v42; // [rsp+18h] [rbp-570h]
  unsigned __int8 v43; // [rsp+1Fh] [rbp-569h]
  __int64 v44; // [rsp+20h] [rbp-568h]
  __m128i v46; // [rsp+30h] [rbp-558h] BYREF
  _QWORD v47[4]; // [rsp+40h] [rbp-548h] BYREF
  _QWORD v48[4]; // [rsp+60h] [rbp-528h] BYREF
  _OWORD v49[2]; // [rsp+80h] [rbp-508h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-4E8h]
  __int64 v51; // [rsp+A8h] [rbp-4E0h]
  __int64 v52; // [rsp+B0h] [rbp-4D8h]
  __int128 v53; // [rsp+B8h] [rbp-4D0h]
  __int128 v54; // [rsp+C8h] [rbp-4C0h]
  __int128 v55; // [rsp+D8h] [rbp-4B0h]
  __int128 v56; // [rsp+E8h] [rbp-4A0h]
  __int128 v57; // [rsp+F8h] [rbp-490h]
  __int128 v58; // [rsp+108h] [rbp-480h]
  __int128 v59; // [rsp+118h] [rbp-470h]
  __int128 v60; // [rsp+128h] [rbp-460h]
  unsigned __int64 v61; // [rsp+138h] [rbp-450h]
  char v62[1032]; // [rsp+140h] [rbp-448h] BYREF
  unsigned __int64 v63; // [rsp+548h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v41 = "CODE";
  if ( (*(_BYTE *)(a5 + 68) & 4) == 0 )
  {
    if ( strcmp((const char *)(a5 + 8), "__TEXT") )
    {
      v41 = "DATA";
      if ( !*(_QWORD *)(a5 + 48) )
        v41 = "BSS";
    }
  }
  v44 = -1;
  v9 = *(_DWORD *)(a2 + 364) & 0x50;
  v10 = v9 == 0 ? 35 : 43;
  v42 = v9 == 0 ? 35 : 43;
  if ( (*(_DWORD *)(a2 + 364) & 0x20) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 32);
    if ( v11 )
      v44 = *(_QWORD *)(v11 + 8);
  }
  v12 = *(const __m128i **)a4;
  v40 = *(_QWORD *)a4 + 16LL * *(_QWORD *)(a4 + 8);
  if ( *(_QWORD *)a4 != v40 )
  {
    do
    {
      v13 = *(_QWORD *)(a2 + 8);
      v14 = *(_QWORD *)(a2 + 240);
      v46 = _mm_loadu_si128(v12);
      if ( *(_QWORD *)(v13 + 16) == v14 || v14 == -1 )
      {
        v15 = 1;
        if ( *(_QWORD *)(a5 + 40) )
          goto LABEL_12;
      }
      else
      {
        if ( v14 < v46.m128i_i64[0] )
          goto LABEL_32;
        v15 = 0;
        if ( v14 >= v46.m128i_i64[1] )
          goto LABEL_32;
        if ( *(_QWORD *)(a5 + 40) )
        {
LABEL_12:
          if ( *(_QWORD *)(a5 + 24) != v44 )
            goto LABEL_13;
        }
      }
      if ( *(_QWORD *)(a5 + 48) )
      {
        v31 = v46.m128i_i64[0];
        if ( v46.m128i_i64[0] == (*(_QWORD *)(a5 + 24) & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL)) )
        {
          v15 = 0;
          qstrncpy(v62, "HEADER", 1024, v10, a5, a6);
          if ( !(unsigned __int8)getinf_flag(45, 16) )
          {
            v15 = 1;
            v39 = getinf(15);
            if ( v39 >= v31 )
              v15 = v39 >= v46.m128i_i64[1];
          }
          v32 = *(_QWORD *)(a2 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v32 && v32 != -1 )
            sub_22160(a1, a2, a3, *(_QWORD *)(a5 + 40), v46.m128i_i32[2] - v31, (unsigned int)&v46, 0, 0, (__int64)v62);
          v43 = 1;
          v16 = (const char *)(a5 + 8);
          v41 = "DATA";
          goto LABEL_20;
        }
      }
LABEL_13:
      if ( (*(_BYTE *)(a2 + 364) & 0x50) != 0
        || !(unsigned __int8)sub_11B00(a5, &v46, 0) && !(unsigned __int8)sub_11B00(a5, &v46, 144) )
      {
        v16 = (const char *)(a5 + 8);
        if ( *(_DWORD *)(a5 + 64) )
          goto LABEL_18;
        if ( *(_DWORD *)(a2 + 340) == 12 )
        {
          if ( !strcmp((const char *)(a5 + 8), "__BRANCH_STUBS") )
          {
            qstrncpy(v62, "__stubs", 1024, v33, v34, v35);
          }
          else
          {
            if ( strcmp((const char *)(a5 + 8), "__BRANCH_GOTS") )
              goto LABEL_18;
            qstrncpy(v62, "__got", 1024, v36, v37, v38);
          }
        }
        else if ( (*(_BYTE *)(a2 + 364) & 0x10) != 0 && !strncmp((const char *)(a5 + 8), "__OBJC_", 7u) )
        {
          qstrncpy(v62, a5 + 8, 1024, v17, v18, v19);
        }
        else
        {
LABEL_18:
          qsnprintf(v62, 1024, "%s_hidden", (const char *)(a5 + 8));
        }
        v43 = 0;
LABEL_20:
        v61 = 0xFFFFFFFF00000000LL;
        v50 = 0;
        v51 = 513;
        v20 = *(_BYTE *)(a1 + 13692);
        v52 = 0;
        memset(v49, 0, sizeof(v49));
        *(_DWORD *)((char *)&v51 + 3) = (unsigned __int8)(v20 + 1);
        v53 = -1;
        v54 = -1;
        v55 = -1;
        v56 = -1;
        v57 = -1;
        v58 = -1;
        v59 = -1;
        v60 = -1;
        v21 = strcmp(v16, "__DATA_CONST");
        v22 = 4;
        if ( v21 )
        {
          v23 = strcmp(v16, "__OBJC_RO");
          v22 = 4;
          if ( v23 )
          {
            v24 = *(_DWORD *)(a5 + 60);
            v25 = (4 * v24) & 4;
            if ( (v24 & 2) != 0 )
              v25 = (4 * v24) & 4 | 2;
            v22 = v25 | 1;
            if ( (v24 & 4) == 0 )
              v22 = v25;
          }
        }
        BYTE2(v51) = v22;
        selector = allocate_selector(0);
        v27 = _mm_load_si128(&v46);
        v52 = selector;
        v49[0] = v27;
        v28 = WORD2(v51) | 4;
        if ( !v15 )
          v28 = WORD2(v51) & 0xFFFB;
        WORD2(v51) = v28 | (v43 << 6);
        sub_1CE50(v48, a2);
        sub_18750(v47, v62, v48);
        if ( v48[0] )
        {
          v48[1] = 0;
          *(double *)v27.m128i_i64 = qfree(v48[0], v62);
        }
        v29 = (const char *)v47[0];
        add_segm_ex(v49, v47[0], v41, v42);
        if ( v47[0] )
        {
          v47[1] = 0;
          qfree(v47[0], v29, *(double *)v27.m128i_i64);
        }
      }
LABEL_32:
      ++v12;
    }
    while ( (const __m128i *)v40 != v12 );
  }
  return v63 - __readfsqword(0x28u);
}
