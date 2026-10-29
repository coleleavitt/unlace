unsigned __int64 __fastcall sub_133790(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdi
  unsigned int *v7; // rcx
  __int64 v8; // rbp
  const __m128i *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r13
  unsigned int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // r13
  int v18; // ebx
  __int64 v19; // rsi
  __m128i *v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rax
  int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // r13
  __int64 i; // r14
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r15
  unsigned int v33; // r8d
  int v34; // ecx
  int v35; // r13d
  __int64 v36; // rax
  int v37; // eax
  _BYTE *v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  _BYTE *v41; // rcx
  unsigned int v44; // [rsp+8h] [rbp-F0h]
  __int64 v45; // [rsp+10h] [rbp-E8h]
  __int64 v46; // [rsp+10h] [rbp-E8h]
  unsigned int *v47; // [rsp+18h] [rbp-E0h]
  __int64 v48; // [rsp+20h] [rbp-D8h]
  int v49; // [rsp+20h] [rbp-D8h]
  __int64 v50; // [rsp+28h] [rbp-D0h]
  __int64 v51; // [rsp+28h] [rbp-D0h]
  __int64 v52; // [rsp+30h] [rbp-C8h]
  __int64 v53; // [rsp+30h] [rbp-C8h]
  unsigned int v54; // [rsp+3Ch] [rbp-BCh]
  __int64 v55; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v56; // [rsp+48h] [rbp-B0h]
  __m128i v57; // [rsp+58h] [rbp-A0h]
  __m128i v58; // [rsp+68h] [rbp-90h]
  __m128i v59; // [rsp+78h] [rbp-80h]
  __m128i v60; // [rsp+88h] [rbp-70h]
  __m128i v61; // [rsp+98h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+B8h] [rbp-40h]

  v4 = *(unsigned __int8 *)(a3 + 64);
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(a3 + 96);
  v7 = *(unsigned int **)(a3 + 56);
  v63 = __readfsqword(0x28u);
  v47 = v7;
  v8 = *(_QWORD *)(v5 + 16);
  v48 = *(_QWORD *)(a1 + 8);
  v50 = (unsigned __int8)v4;
  v9 = (const __m128i *)(v48 + 104 * v4 + 8);
  sub_E8800(v5, 1, "RIGHT-JOIN %s", **(const char ***)(v48 + 8 * ((unsigned __int8)v4 + 12 * v4) + 40));
  if ( a2 <= 0 )
  {
    v10 = 0;
  }
  else
  {
    v45 = v5;
    v10 = 0;
    v11 = a1 + 876;
    v12 = a1 + 112LL * (unsigned int)(a2 - 1) + 988;
    do
    {
      while ( 1 )
      {
        v10 |= *(_QWORD *)(*(_QWORD *)(v11 + 92) + 8LL);
        sub_E1710(v8, 136, *(_DWORD *)v11, 0, 0);
        v13 = *(_DWORD *)(v11 + 4);
        if ( v13 )
          break;
        v11 += 112;
        if ( v11 == v12 )
          goto LABEL_6;
      }
      v11 += 112;
      sub_E1710(v8, 136, v13, 0, 0);
    }
    while ( v11 != v12 );
LABEL_6:
    v5 = v45;
  }
  v46 = 0;
  if ( (*(_BYTE *)(v48 + 104 * v50 + 68) & 0x40) == 0 )
  {
    v14 = *(_QWORD *)(v6 + 8) | v10;
    if ( *(int *)(a1 + 140) > 0 )
    {
      v15 = *(_QWORD *)(a1 + 152);
      if ( (*(_BYTE *)(v15 + 18) & 2) == 0 )
      {
        v52 = v8;
        v16 = nullptr;
        v17 = ~v14;
        v18 = 0;
        do
        {
          if ( (v17 & *(_QWORD *)(v15 + 48)) == 0 )
          {
            v19 = *(_QWORD *)v15;
            if ( (*(_DWORD *)(*(_QWORD *)v15 + 4LL) & 0x400001) == 0 )
            {
              v20 = nullptr;
              if ( v19 )
                v20 = sub_DD6E0(*(_QWORD *)v5, v19, 0, nullptr);
              v16 = sub_F07D0(v5, (__int64)v16, (__int64)v20);
            }
          }
          if ( *(_DWORD *)(a1 + 140) <= ++v18 )
            break;
          v15 = *(_QWORD *)(a1 + 152) + 56LL * v18;
        }
        while ( (*(_BYTE *)(v15 + 18) & 2) == 0 );
        v46 = (__int64)v16;
        v8 = v52;
      }
    }
  }
  v55 = 0x100000001LL;
  v56 = _mm_loadu_si128(v9);
  v57 = _mm_loadu_si128(v9 + 1);
  v58 = _mm_loadu_si128(v9 + 2);
  v59 = _mm_loadu_si128(v9 + 3);
  v21 = _mm_loadu_si128(v9 + 4);
  v59.m128i_i8[12] = 0;
  v60 = v21;
  v22 = _mm_loadu_si128(v9 + 5);
  v61 = v22;
  v62 = v9[6].m128i_i64[0];
  ++*(_BYTE *)(v5 + 38);
  v23 = sub_12EFF0(v5, (unsigned int)&v55, v46, 0, 0, 0, 4096, 0);
  v53 = v23;
  if ( v23 )
  {
    v24 = *(_DWORD *)(v5 + 56);
    v44 = *(_DWORD *)(a3 + 4);
    v25 = v24 + 1;
    *(_DWORD *)(v5 + 56) = v24 + 1;
    v54 = *(_DWORD *)(v23 + 56);
    v26 = *(_QWORD *)(v48 + 104 * v50 + 40);
    if ( *(char *)(v26 + 48) >= 0 )
    {
      sub_127530((__int64 *)v8, *(_QWORD *)(v48 + 104 * v50 + 40), v44, -1, v25, *(double *)v22.m128i_i64);
      v49 = 1;
    }
    else
    {
      for ( i = *(_QWORD *)(v26 + 16); i && (*(_BYTE *)(i + 99) & 3) != 2; i = *(_QWORD *)(i + 40) )
        ;
      v28 = *(unsigned __int16 *)(i + 94);
      v49 = v28;
      *(_DWORD *)(v5 + 56) = v28 + v24;
      if ( v28 )
      {
        v51 = v5;
        v29 = i;
        v30 = v26;
        v31 = 0;
        v32 = (unsigned int)(v28 - 1) + 1LL;
        do
        {
          v33 = v25 + v31;
          v34 = *(__int16 *)(*(_QWORD *)(v29 + 8) + 2 * v31++);
          sub_127530((__int64 *)v8, v30, v44, v34, v33, *(double *)v22.m128i_i64);
        }
        while ( v32 != v31 );
        v5 = v51;
      }
    }
    v35 = sub_E1710(v8, 63, v47[1], 0, v25);
    if ( !*(_BYTE *)(*(_QWORD *)v8 + 103LL) )
    {
      v36 = *(_QWORD *)(v8 + 136) + 24LL * v35;
      *(_BYTE *)(v36 + 1) = -3;
      *(_DWORD *)(v36 + 16) = v49;
    }
    sub_E1770((_QWORD *)v8, 28, *v47, v54, v25, v49);
    v37 = *(_DWORD *)(v8 + 144);
    if ( v35 < 0 )
      v35 = v37 - 1;
    v38 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v8 + 103LL) )
      v38 = (_BYTE *)(*(_QWORD *)(v8 + 136) + 24LL * v35);
    *((_DWORD *)v38 + 2) = v37;
    sub_E1710(v8, 9, v47[2], v47[3], 0);
    sub_133C90(v53);
  }
  if ( v46 )
    sub_D7720(*(_QWORD *)v5, v46);
  v39 = *(_DWORD *)(v5 + 304);
  if ( v39 )
  {
    v40 = *(_QWORD *)(v5 + 16);
    if ( v39 < 0 )
    {
      v41 = byte_241F50;
      v39 = *(_DWORD *)(v40 + 144) - 1;
      if ( *(_BYTE *)(*(_QWORD *)v40 + 103LL) )
        goto LABEL_43;
    }
    else
    {
      v41 = byte_241F50;
      if ( *(_BYTE *)(*(_QWORD *)v40 + 103LL) )
      {
LABEL_43:
        v39 = *((_DWORD *)v41 + 2);
        goto LABEL_44;
      }
    }
    v41 = (_BYTE *)(*(_QWORD *)(v40 + 136) + 24LL * v39);
    goto LABEL_43;
  }
LABEL_44:
  *(_DWORD *)(v5 + 304) = v39;
  --*(_BYTE *)(v5 + 38);
  return __readfsqword(0x28u) ^ v63;
}
