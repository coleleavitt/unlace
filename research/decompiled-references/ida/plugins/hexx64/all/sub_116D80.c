__int64 __fastcall sub_116D80(_QWORD *a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int8 *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  unsigned __int8 *v17; // rbx
  unsigned __int8 **v18; // rbx
  __int64 v19; // rax
  unsigned __int8 **v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 *v23; // rax
  unsigned __int64 *v24; // rsi
  char *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rsi
  int v28; // eax
  char *v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  char *v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rsi
  int v36; // r8d
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int64 *v39; // rdi
  unsigned __int64 *v40; // r14
  unsigned __int64 *v41; // rbx
  unsigned __int64 *v42; // rax
  char v43; // [rsp+Fh] [rbp-A1h]
  char *v44; // [rsp+18h] [rbp-98h]
  unsigned __int64 *v45; // [rsp+20h] [rbp-90h]
  int v46; // [rsp+28h] [rbp-88h]
  int v47; // [rsp+2Ch] [rbp-84h]
  __int64 *v48; // [rsp+38h] [rbp-78h]
  unsigned __int8 v49[16]; // [rsp+40h] [rbp-70h] BYREF
  unsigned __int64 *v50[12]; // [rsp+50h] [rbp-60h] BYREF

  v48 = (__int64 *)a2;
  v50[5] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a2 - 29) <= 0xC )
  {
    v47 = *((_DWORD *)a2 + 9);
    if ( a1[3] )
      goto LABEL_3;
LABEL_12:
    if ( *((_DWORD *)a1 + 9) < v47 )
      return 0;
    v7 = (unsigned __int8 *)(a1 + 4);
    if ( *((_BYTE *)a1 + 32) != 4 )
      goto LABEL_4;
LABEL_14:
    a2 = (unsigned __int8 *)*a1;
    if ( (unsigned __int8)sub_1205A0((_BYTE *)a1[5], *a1, 0, a4, a5, a6) )
      goto LABEL_9;
    goto LABEL_4;
  }
  v47 = *((_DWORD *)a2 + 17);
  if ( !a1[3] )
    goto LABEL_12;
LABEL_3:
  v7 = (unsigned __int8 *)(a1 + 4);
  if ( *((_BYTE *)a1 + 32) == 4 )
    goto LABEL_14;
LABEL_4:
  v8 = a1[7];
  if ( !v8 || v8 == a1[2] )
    goto LABEL_20;
  sub_124680((__int64)v50, a1[1], v8, 1u);
  a2 = (unsigned __int8 *)v50;
  v9 = sub_A9AA0(a1[1], v50, a1[7], a1[2], 1u);
  if ( v50[2] )
  {
    v50[3] = nullptr;
    qfree((__int64)v50[2]);
  }
  qfree((__int64)v50[0]);
  if ( !v9 )
    goto LABEL_20;
LABEL_9:
  if ( !sub_125B60(v7, a1[6], 0) )
    return 0;
  v11 = sub_138140(*(_QWORD **)(a1[1] + 64LL), *(int *)(a1[6] + 4LL), 1);
  if ( v11 == -1 )
    return 0;
  v12 = a1[6];
  v13 = _mm_cvtsi32_si128(v11);
  v14 = a1[7];
  v15 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + 4));
  LODWORD(v50[0]) = 1;
  v16 = _mm_unpacklo_epi32(v15, v13);
  *(__int64 *)((char *)v50 + 4) = v16.m128i_i64[0];
  if ( !v14 )
    v14 = a1[2];
  v17 = (unsigned __int8 *)sub_A3240(
                             a1[1],
                             *(_QWORD *)(v14 + 16),
                             4,
                             (unsigned __int8 *)v12,
                             nullptr,
                             (unsigned __int8 *)v50,
                             v16);
  sub_11CA10((char *)a1[6], (char *)v50);
  a2 = v17 + 64;
  sub_125180((__int64)v7, v17 + 64);
  sub_11CDA0((__int64)v50);
LABEL_20:
  v18 = (unsigned __int8 **)a1[9];
  v19 = a1[10];
  memset(v50, 0, 24);
  v20 = &v18[v19];
  while ( v20 != v18 )
  {
    sub_123A40((__int64)v49, *v18, v8, a4);
    v23 = v50[1];
    v24 = v50[0];
    v25 = (char *)v50[1] + 1;
    if ( v50[2] < (unsigned __int64 *)((char *)v50[1] + 1) )
    {
      v50[0] = (unsigned __int64 *)qvector_reserve((__int64)v50, (__int64)v50[0], (__int64)v25, 16);
      v24 = v50[0];
      v23 = v50[1];
    }
    v21 = (__int64)&v24[2 * (_QWORD)v23];
    a2 = v49;
    sub_123A40(v21, v49, (__int64)v25, v22);
    ++v18;
    ++v50[1];
    sub_11CDA0((__int64)v49);
  }
  if ( *((_DWORD *)a1 + 9) == v47 )
  {
    v44 = (char *)(v48 + 4);
    sub_11CA10((char *)v48 + 32, (char *)v7);
    v43 = 0;
  }
  else
  {
    v26 = j__qalloc_or_throw(80, (__int64)a2, v8, a4);
    v27 = v48[3];
    *(_QWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v26 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v26 + 56) = 0;
    *(_QWORD *)(v26 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v26 + 72) = 0;
    sub_330970(v26, v27);
    v28 = 10;
    if ( *((_DWORD *)a1 + 9) <= v47 )
      v28 = (*(_DWORD *)a1[3] != 8) + 8;
    *(_DWORD *)v26 = v28;
    sub_11CA10((char *)(v26 + 32), (char *)v7);
    *(_DWORD *)(v26 + 68) = v47;
    v44 = (char *)(v48 + 4);
    sub_11CDA0((__int64)(v48 + 4));
    *((_BYTE *)v48 + 32) = 4;
    v48[5] = v26;
    v43 = 1;
    *((_DWORD *)v48 + 9) = *(_DWORD *)(v26 + 68);
  }
  v29 = (char *)(v48 + 6);
  v46 = *(_DWORD *)v48;
  *(_DWORD *)v48 = *((unsigned __int8 *)a1 + 133) + 15;
  v30 = *a1;
  sub_120A10((__int64)(v48 + 6), *a1, a1[14], v47, a1[8], 0);
  v33 = (char *)v50[0];
  v45 = &v50[0][2 * (__int64)v50[1]];
  if ( v45 != v50[0] )
  {
    do
    {
      v34 = j__qalloc_or_throw(80, v30, v31, v32);
      v35 = v48[3];
      *(_QWORD *)(v34 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v34 + 40) = 0;
      *(_QWORD *)(v34 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v34 + 56) = 0;
      *(_QWORD *)(v34 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v34 + 72) = 0;
      sub_330970(v34, v35);
      *(_DWORD *)v34 = *(_DWORD *)v48;
      sub_11CA10((char *)(v34 + 32), v44);
      sub_11CA10((char *)(v34 + 48), v29);
      v30 = (__int64)v33;
      *(_DWORD *)(v34 + 68) = v47;
      *((_BYTE *)v48 + 32) = 4;
      v48[5] = v34;
      *((_DWORD *)v48 + 9) = *(_DWORD *)(v34 + 68);
      sub_11CA10(v29, v33);
      v36 = *((_DWORD *)v48 + 9);
      if ( *((_DWORD *)v48 + 13) > v36 )
      {
        v30 = *a1;
        sub_1207E0(v29, *a1, 10, *(_QWORD *)(v34 + 24), v36);
      }
      v33 += 16;
      *(_DWORD *)v48 = 12;
    }
    while ( v45 != (unsigned __int64 *)v33 );
  }
  if ( (unsigned int)(v46 - 29) <= 0xC )
  {
    *((_DWORD *)v48 + 17) = *((_DWORD *)v48 + 9);
    sub_12B6F0((__int64)v48, *a1, v46, 1, 1);
    sub_120A10((__int64)v29, *a1, 0, *((_DWORD *)v48 + 9), v48[3], 0);
  }
  if ( v43 )
    sub_15BC70((unsigned int *)v48, (unsigned __int64 *)*a1, 0, 0, nullptr, nullptr, (__m128i)0LL, 0);
  v37 = a1[1];
  v38 = *(_DWORD *)(v37 + 24);
  BYTE1(v38) &= ~2u;
  LOBYTE(v38) = v38 | 0x80;
  *(_DWORD *)(v37 + 24) = v38;
  v39 = v50[0];
  if ( v50[0] )
  {
    v40 = v50[1];
    if ( v50[1] )
    {
      v41 = nullptr;
      do
      {
        v42 = v41;
        v41 = (unsigned __int64 *)((char *)v41 + 1);
        sub_11CDA0((__int64)&v39[2 * (_QWORD)v42]);
        v39 = v50[0];
      }
      while ( v40 != v41 );
    }
    v50[1] = nullptr;
    qfree((__int64)v39);
  }
  return 1;
}

