unsigned __int64 __fastcall sub_19DBC0(char *a1, char *a2, unsigned int a3, char *a4, unsigned __int64 a5)
{
  char *v5; // r9
  unsigned int v7; // r15d
  char *v8; // rax
  __int128 *v9; // rsi
  __int64 v10; // rdx
  const __m128i *v11; // rbx
  const __m128i *v12; // rax
  __m128i v13; // xmm1
  __m128i si128; // xmm0
  char v15; // si
  __int128 *v16; // rdi
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // edx
  _DWORD *v30; // [rsp+18h] [rbp-120h]
  __m128i v32[7]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v33[32]; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-78h]
  __int128 v36; // [rsp+D0h] [rbp-68h]
  __int128 v37; // [rsp+E0h] [rbp-58h]
  char v38; // [rsp+F0h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+F8h] [rbp-40h]

  v5 = a4;
  v39 = __readfsqword(0x28u);
  v7 = a5;
  if ( a5 > 0x40 )
  {
    sub_19CE60(v32);
    v27 = v7;
    v7 = 32;
    sub_19CE90(v32, a4, v27);
    sub_19D080((__int64)v33, (unsigned int *)v32);
    v5 = v33;
  }
  v8 = v5;
  v34 = 0;
  v9 = &v34;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( v7 >= 8 )
  {
    LODWORD(v25) = 0;
    do
    {
      v26 = (unsigned int)v25;
      v25 = (unsigned int)(v25 + 8);
      *(_QWORD *)((char *)&v34 + v26) = *(_QWORD *)&v5[v26];
    }
    while ( (unsigned int)v25 < (v7 & 0xFFFFFFF8) );
    v9 = (__int128 *)((char *)&v34 + v25);
    v8 = &v5[v25];
  }
  v10 = 0;
  if ( (v7 & 4) == 0 )
  {
    if ( (v7 & 2) == 0 )
      goto LABEL_6;
LABEL_22:
    *(_WORD *)((char *)v9 + v10) = *(_WORD *)&v8[v10];
    v10 += 2;
    if ( (v7 & 1) == 0 )
      goto LABEL_7;
    goto LABEL_21;
  }
  *(_DWORD *)v9 = *(_DWORD *)v8;
  v10 = 4;
  if ( (v7 & 2) != 0 )
    goto LABEL_22;
LABEL_6:
  if ( (v7 & 1) != 0 )
LABEL_21:
    *((_BYTE *)v9 + v10) = v8[v10];
LABEL_7:
  v11 = (const __m128i *)&v34;
  v12 = (const __m128i *)&v34;
  v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x36363636u), 0);
  do
  {
    si128 = _mm_load_si128(v12++);
    v12[-1] = _mm_xor_si128(si128, v13);
  }
  while ( v12 != (const __m128i *)&v38 );
  v30 = v5;
  sub_19CE60(v32);
  sub_19CE90(v32, (char *)&v34, 0x40u);
  sub_19CE90(v32, a2, a3);
  sub_19D080((__int64)a1, (unsigned int *)v32);
  v15 = v7;
  v16 = &v34;
  v34 = 0;
  v17 = v30;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( v7 >= 8 )
  {
    v22 = v7 & 0xFFFFFFF8;
    LODWORD(v23) = 0;
    do
    {
      v24 = (unsigned int)v23;
      v23 = (unsigned int)(v23 + 8);
      *(_QWORD *)((char *)&v34 + v24) = *(_QWORD *)((char *)v30 + v24);
    }
    while ( (unsigned int)v23 < v22 );
    v16 = (__int128 *)((char *)&v34 + v23);
    v17 = (_DWORD *)((char *)v30 + v23);
  }
  v18 = 0;
  if ( (v15 & 4) == 0 )
  {
    if ( (v15 & 2) == 0 )
      goto LABEL_12;
LABEL_17:
    *(_WORD *)((char *)v16 + v18) = *(_WORD *)((char *)v17 + v18);
    v18 += 2;
    if ( (v15 & 1) == 0 )
      goto LABEL_13;
    goto LABEL_16;
  }
  *(_DWORD *)v16 = *v17;
  v18 = 4;
  if ( (v15 & 2) != 0 )
    goto LABEL_17;
LABEL_12:
  if ( (v15 & 1) != 0 )
LABEL_16:
    *((_BYTE *)v16 + v18) = *((_BYTE *)v17 + v18);
LABEL_13:
  v19 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x5C5C5C5Cu), 0);
  do
  {
    v20 = _mm_load_si128(v11++);
    v11[-1] = _mm_xor_si128(v20, v19);
  }
  while ( v11 != (const __m128i *)&v38 );
  sub_19CE60(v32);
  sub_19CE90(v32, (char *)&v34, 0x40u);
  sub_19CE90(v32, a1, 0x20u);
  sub_19D080((__int64)a1, (unsigned int *)v32);
  return v39 - __readfsqword(0x28u);
}
