__int64 __fastcall sub_1B8D0(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  __m128i v7; // xmm0
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r14
  __m128i si128; // xmm0
  __int64 v13; // r12
  __int64 v14; // rdx
  const char *v15; // rdi
  int v16; // eax
  size_t v17; // rax
  size_t v18; // r13
  __int64 v19; // rax
  size_t v20; // rax
  size_t v21; // r12
  unsigned int v22; // ebx
  __int64 v24; // rcx
  const char *v25; // rax
  const char *v26; // rdi
  void *v27; // rdi
  size_t v28; // r14
  void *v29; // rdi
  size_t v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp-8h] [rbp-2078h]
  __int16 v34; // [rsp+4h] [rbp-206Ch] BYREF
  unsigned __int16 v35; // [rsp+6h] [rbp-206Ah] BYREF
  __int64 v36; // [rsp+8h] [rbp-2068h] BYREF
  __int64 v37; // [rsp+10h] [rbp-2060h]
  __int128 v38; // [rsp+18h] [rbp-2058h]
  char src[4096]; // [rsp+30h] [rbp-2040h] BYREF
  char s[4104]; // [rsp+1030h] [rbp-1040h] BYREF
  unsigned __int64 v41; // [rsp+2038h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v38 = 0;
  v2 = (_QWORD *)qvector_reserve();
  v37 = (__int64)v2;
  *(_QWORD *)&v38 = 788;
  *v2 = 0x5B323235313A3040LL;
  *(_QWORD *)((char *)v2 + 779) = 0xA3E383E523A6C6CLL;
  qmemcpy(
    (void *)((unsigned __int64)(v2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_7E9D0 - ((char *)v2 - ((unsigned __int64)(v2 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v2 - (((_DWORD)v2 + 8) & 0xFFFFFFF8) + 787) >> 3));
  *(_BYTE *)(v37 + 787) = 0;
  v3 = v38;
  if ( (unsigned __int8)netnode_inited() )
  {
    if ( (_QWORD)v38 )
    {
      v11 = v38 + 24;
      v10 = v38 + 25;
      v9 = v37;
      v3 = v38 - 1;
      if ( *((_QWORD *)&v38 + 1) >= (unsigned __int64)(v38 + 25) )
        goto LABEL_7;
    }
    else
    {
      v9 = v37;
      v10 = 26;
      v11 = 25;
      if ( *((_QWORD *)&v38 + 1) >= 0x1Au )
      {
LABEL_7:
        si128 = _mm_load_si128((const __m128i *)&xmmword_82320);
        *(_QWORD *)&v38 = v10;
        *(_BYTE *)(v9 + v11) = 0;
        v13 = v37 + v3;
        *(__m128i *)v13 = si128;
        *(__m128i *)(v13 + 9) = _mm_load_si128((const __m128i *)&xmmword_82330);
        goto LABEL_8;
      }
    }
    v37 = qvector_reserve();
    v9 = v37;
    goto LABEL_7;
  }
  if ( (_QWORD)v38 )
  {
    v6 = v38 + 24;
    v5 = v38 + 25;
    v4 = v37;
    v3 = v38 - 1;
    if ( *((_QWORD *)&v38 + 1) >= (unsigned __int64)(v38 + 25) )
      goto LABEL_4;
LABEL_28:
    v37 = qvector_reserve();
    v4 = v37;
    goto LABEL_4;
  }
  v4 = v37;
  v5 = 26;
  v6 = 25;
  if ( *((_QWORD *)&v38 + 1) < 0x1Au )
    goto LABEL_28;
LABEL_4:
  v7 = _mm_load_si128((const __m128i *)&xmmword_82300);
  *(_QWORD *)&v38 = v5;
  *(_BYTE *)(v4 + v6) = 0;
  v8 = v37 + v3;
  *(__m128i *)v8 = v7;
  *(__m128i *)(v8 + 9) = _mm_load_si128((const __m128i *)&xmmword_82310);
LABEL_8:
  memset(src, 0, sizeof(src));
  memset(s, 0, 0x1000u);
  qstrncpy();
  qstrncpy();
  v14 = *(int *)(a1 + 1176);
  v34 = *(unsigned __int8 *)(a1 + 2144);
  v35 = *(_QWORD *)(a1 + 1944);
  v36 = *(_QWORD *)(qword_9AC10 + 8 * v14);
  while ( 1 )
  {
    if ( (unsigned __int8)netnode_inited() )
    {
      v24 = qword_9AC30 + 24 * v36;
      v25 = ::src;
      if ( *(_QWORD *)(v24 + 8) )
        v25 = *(const char **)v24;
      v26 = ::src;
      if ( (_QWORD)v38 )
        v26 = (const char *)v37;
      v16 = sub_1B800(
              (__int64)v26,
              sub_25F00,
              &qword_9A888,
              a1 + 912,
              a1 + 1880,
              a1 + 1888,
              src,
              s,
              &v34,
              &v35,
              v25,
              v33);
    }
    else
    {
      v15 = ::src;
      if ( (_QWORD)v38 )
        v15 = (const char *)v37;
      v16 = sub_1B800(
              (__int64)v15,
              sub_25F00,
              &qword_9A888,
              a1 + 912,
              a1 + 1880,
              a1 + 1888,
              src,
              s,
              &v34,
              &v35,
              &qword_9AC30,
              &v36);
    }
    if ( !v16 )
    {
      v22 = 0;
      goto LABEL_22;
    }
    if ( *(__int64 *)(a1 + 912) >= 0 )
      break;
    sub_14020((__int64)"AUTOHIDE NONE\nWrong timeout value");
  }
  if ( *(_QWORD *)(qword_9AC10 + 8LL * *(int *)(a1 + 1176)) != v36 )
  {
    *(_DWORD *)(a1 + 1176) = *(_QWORD *)(qword_9AC10 + 8 * v36);
    sub_5F730(a1);
  }
  v17 = strlen(s);
  v18 = v17;
  if ( v17 )
  {
    v29 = *(void **)(a1 + 2104);
    v30 = v17 + 1;
    if ( *(_QWORD *)(a1 + 2120) < v17 + 1 )
    {
      v31 = qvector_reserve();
      *(_QWORD *)(a1 + 2104) = v31;
      v29 = (void *)v31;
    }
    *(_QWORD *)(a1 + 2112) = v30;
    memmove(v29, s, v18);
    *(_BYTE *)(*(_QWORD *)(a1 + 2104) + v18) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 2112) = 0;
  }
  v19 = v35;
  *(_BYTE *)(a1 + 2144) = v34 != 0;
  *(_QWORD *)(a1 + 1944) = v19;
  v20 = strlen(src);
  v21 = v20;
  if ( v20 )
  {
    v27 = *(void **)(a1 + 1904);
    v28 = v20 + 1;
    if ( *(_QWORD *)(a1 + 1920) < v20 + 1 )
    {
      v32 = qvector_reserve();
      *(_QWORD *)(a1 + 1904) = v32;
      v27 = (void *)v32;
    }
    *(_QWORD *)(a1 + 1912) = v28;
    memmove(v27, src, v21);
    *(_BYTE *)(*(_QWORD *)(a1 + 1904) + v21) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 1912) = 0;
  }
  sub_2FCD0(a1 + 1704, a1 + 1904);
  v22 = 1;
LABEL_22:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  return v22;
}

