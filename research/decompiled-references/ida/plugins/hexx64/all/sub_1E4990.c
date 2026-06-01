__int64 __fastcall sub_1E4990(unsigned __int64 **a1, __int64 **a2, __int64 *a3, int a4)
{
  char v4; // r15
  __int64 *v7; // r12
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  char v24; // al
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i si128; // xmm2
  bool v28; // zf
  int v29; // eax
  __int64 v30; // rdx
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __int64 v33; // rcx
  __m128i v34; // xmm2
  unsigned __int64 v35; // r9
  char v36; // al
  __int64 v37; // rax
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v44; // [rsp+0h] [rbp-D8h]
  __int64 v45; // [rsp+8h] [rbp-D0h]
  __int64 v46; // [rsp+8h] [rbp-D0h]
  unsigned int v47; // [rsp+14h] [rbp-C4h]
  unsigned __int64 v48; // [rsp+18h] [rbp-C0h]
  __int64 v49; // [rsp+18h] [rbp-C0h]
  const __m128i *v50; // [rsp+18h] [rbp-C0h]
  __m128i *v52; // [rsp+28h] [rbp-B0h]
  const __m128i *v53; // [rsp+28h] [rbp-B0h]
  __m256i v54; // [rsp+30h] [rbp-A8h] BYREF
  __m256i v55; // [rsp+50h] [rbp-88h] BYREF
  __m128i v56; // [rsp+70h] [rbp-68h]
  __m128i v57; // [rsp+80h] [rbp-58h]
  unsigned __int64 v58; // [rsp+98h] [rbp-40h]

  v4 = 0;
  v58 = __readfsqword(0x28u);
  v7 = *a2;
  v8 = (__int64)(*a2 + 3);
  v45 = *(_QWORD *)v8 + *((int *)*a2 + 11);
  if ( *((_BYTE *)*a2 + 32) == 5 )
    v4 = *(_BYTE *)(*(_QWORD *)((*a1)[188] + 96) + 145LL);
  v9 = *a3;
  v10 = v7[3];
  v11 = (__m128i *)(*a2 + 5);
  memset(&v54.m256i_u64[1], 0, 24);
  v12 = (unsigned int)(v9 - v10);
  v54.m256i_i64[0] = 0x800000000LL;
  v47 = v9 - v10;
  if ( (_DWORD)v9 == (_DWORD)v10 )
    goto LABEL_4;
  if ( v4 )
  {
    v53 = (const __m128i *)v8;
    v50 = (const __m128i *)(v8 + 16);
    v24 = sub_314D00(v11, (__m128i *)&v54, (unsigned int)(*(_DWORD *)(v8 + 20) + v10 - v9), v12);
    v11 = (__m128i *)v50;
    if ( v24 )
    {
      v25 = _mm_loadu_si128(v50 + 1);
      v26 = _mm_loadu_si128(v53 + 1);
      v53[1] = _mm_load_si128((const __m128i *)&v54);
      si128 = _mm_load_si128((const __m128i *)&v54.m256i_u64[2]);
      v57 = v25;
      v50[1] = si128;
      *(__m128i *)v54.m256i_i8 = v26;
      *(__m128i *)&v54.m256i_u64[2] = v25;
      v28 = v53[1].m128i_i32[0] == 1;
      v56 = v26;
      if ( !v28 )
        goto LABEL_13;
LABEL_33:
      v37 = *v7;
      v38 = (unsigned __int64)v7;
      if ( (*v7 & 2) == 0 )
      {
        v39 = v7[2];
        if ( (*(_BYTE *)v39 & 2) != 0 )
        {
          v38 = v37 & 0xFFFFFFFFFFFFFFFCLL;
          v40 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v40 & 2) == 0 )
          {
            v41 = (unsigned __int64)v7;
            do
            {
              if ( v41 != *(_QWORD *)(v38 + 16) )
                break;
              v41 = v38;
              v42 = v40 & 0xFFFFFFFFFFFFFFFCLL;
              v40 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
              v38 = v42;
            }
            while ( (v40 & 2) == 0 );
          }
        }
        else
        {
          do
          {
            v38 = v39;
            v39 = *(_QWORD *)(v39 + 8);
          }
          while ( (*(_BYTE *)v39 & 2) == 0 );
        }
      }
      v48 = v38;
      sub_1E3D90(a1 + 1, v7);
      v47 = 0;
      goto LABEL_6;
    }
LABEL_4:
    sub_312D90((__int64)&v54, (__int64)v11);
    v13 = *v7;
    v14 = (unsigned __int64)v7;
    if ( (*v7 & 2) == 0 )
    {
      v20 = v7[2];
      if ( (*(_BYTE *)v20 & 2) != 0 )
      {
        v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
        v21 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v21 & 2) == 0 )
        {
          v22 = (unsigned __int64)v7;
          do
          {
            if ( v22 != *(_QWORD *)(v14 + 16) )
              break;
            v22 = v14;
            v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
            v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
            v14 = v23;
          }
          while ( (v21 & 2) == 0 );
        }
      }
      else
      {
        do
        {
          v14 = v20;
          v20 = *(_QWORD *)(v20 + 8);
        }
        while ( (*(_BYTE *)v20 & 2) == 0 );
      }
    }
    v48 = v14;
    sub_1E3D90(a1 + 1, v7);
LABEL_6:
    v15 = (__int64 *)v48;
    goto LABEL_7;
  }
  v49 = v8;
  v52 = (__m128i *)(v8 + 16);
  if ( !(unsigned __int8)sub_314D00(v11, (__m128i *)&v54, v47, v12) )
  {
    v11 = v52;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v49 + 16) == 1 )
    goto LABEL_33;
LABEL_13:
  v47 = 0;
  v15 = v7;
LABEL_7:
  v16 = *a3 + a4;
  v55.m256i_i64[0] = 0x800000000LL;
  v17 = v16;
  memset(&v55.m256i_u64[1], 0, 24);
  if ( v45 > v16 )
  {
    v29 = a4;
    v46 = v17;
    v44 = (unsigned __int64)v15;
    v30 = v29 + v47;
    if ( v4 )
    {
      if ( !(unsigned __int8)sub_314D00((__m128i *)&v54, (__m128i *)&v55, (unsigned int)(v54.m256i_i32[1] - v30), v17) )
        goto LABEL_8;
      v31 = _mm_load_si128((const __m128i *)&v54);
      v32 = _mm_load_si128((const __m128i *)&v54.m256i_u64[2]);
      v33 = v46;
      *(__m128i *)v54.m256i_i8 = _mm_load_si128((const __m128i *)&v55);
      v34 = _mm_load_si128((const __m128i *)&v55.m256i_u64[2]);
      v35 = v44;
      v56 = v31;
      v57 = v32;
      *(__m128i *)&v54.m256i_u64[2] = v34;
      *(__m128i *)v55.m256i_i8 = v31;
      *(__m128i *)&v55.m256i_u64[2] = v32;
    }
    else
    {
      v36 = sub_314D00((__m128i *)&v54, (__m128i *)&v55, v30, v17);
      v35 = v44;
      v33 = v46;
      if ( !v36 )
        goto LABEL_8;
    }
    if ( v55.m256i_i32[0] != 1 )
    {
      *a2 = (__int64 *)sub_1E45A0((__m128i *)(a1 + 1), v35, v33, *((unsigned __int8 *)a3 + 8), (__int64)&v55);
      v18 = 1;
      goto LABEL_9;
    }
  }
LABEL_8:
  v18 = 0;
LABEL_9:
  sub_312B80((__int64)&v55);
  sub_312B80((__int64)&v54);
  return v18;
}

