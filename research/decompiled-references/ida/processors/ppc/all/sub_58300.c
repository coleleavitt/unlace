unsigned __int64 __fastcall sub_58300(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char *v8; // rax
  const char *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r13
  bool v12; // zf
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // r14d
  char v17; // r15
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r9
  char *v21; // rax
  __int64 v22; // r12
  unsigned __int16 v23; // bp
  __m128 v24; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __m128 v31; // xmm0
  __int64 v32; // [rsp+8h] [rbp-230h]
  __int64 v33; // [rsp+10h] [rbp-228h]
  __int64 v34; // [rsp+20h] [rbp-218h] BYREF
  __int64 v35; // [rsp+28h] [rbp-210h] BYREF
  __int64 v36; // [rsp+30h] [rbp-208h] BYREF
  __m128 v37; // [rsp+38h] [rbp-200h]
  __int64 v38; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-1E0h]
  __int128 v40; // [rsp+60h] [rbp-1D8h]
  __int64 v41; // [rsp+70h] [rbp-1C8h]
  __int128 v42; // [rsp+78h] [rbp-1C0h]
  __int128 v43; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-198h]
  __int64 v45; // [rsp+A8h] [rbp-190h]
  __int64 v46; // [rsp+B0h] [rbp-188h]
  char v47; // [rsp+B8h] [rbp-180h] BYREF
  _QWORD v48[8]; // [rsp+1F8h] [rbp-40h] BYREF

  v48[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_57A80(a1) )
    goto LABEL_24;
  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(v2 + 8);
  if ( v3 > 1 )
  {
    v5 = 1;
    v6 = 1;
    do
    {
      v7 = *(_QWORD *)(v2 + 24 * v6 + 8);
      if ( v4 < v7 )
        v4 = v7;
      v6 = ++v5;
    }
    while ( v5 < v3 );
  }
  v44 = -1;
  v8 = &v47;
  v45 = 0;
  v46 = 0;
  v43 = -1;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 40;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *((_QWORD *)v8 - 2) = 0;
  }
  while ( v8 != (char *)v48 );
  decode_insn(&v43, v4, v48, 0.0);
  v9 = (const char *)&v34;
  v10 = WORD1(v45) + v4;
  if ( !(unsigned __int8)sub_56FC0(a1, &v34, &v35, v10, 10) )
  {
    v9 = (const char *)&v34;
    if ( !(unsigned __int8)sub_57380((__int64 *)a1, &v34, &v35, v10, 10) )
    {
LABEL_24:
      *(_QWORD *)(a1 + 184) = 0;
      *(_QWORD *)(a1 + 200) = -1;
      *(_QWORD *)(a1 + 48) = -1;
      return v48[0] - __readfsqword(0x28u);
    }
  }
  v11 = v35;
  v36 = 0;
  v12 = *(_QWORD *)(a1 + 184) == 0;
  v13 = *(_QWORD *)(a1 + 176);
  v37 = 0;
  *(_DWORD *)(a1 + 56) = v34;
  *(_DWORD *)(a1 + 60) = v11;
  if ( v12 )
  {
    v36 = v13;
    v31 = _mm_loadh_ps((const double *)(a1 + 192));
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
    v37 = v31;
    goto LABEL_22;
  }
  v9 = nullptr;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  do
  {
    v22 = v13 + 24 * v18;
    v23 = *(_WORD *)(v22 + 16);
    if ( (unsigned __int16)(v23 - 3) <= 7u )
    {
      if ( v23 < (unsigned __int64)(v34 + 3) )
        goto LABEL_16;
    }
    else if ( (unsigned __int16)(v23 - 36) > 7u || v23 < (unsigned __int64)(v11 + 36) )
    {
      goto LABEL_16;
    }
    v19 = *(_QWORD *)v22;
    v20 = *(_QWORD *)(v22 + 8);
    if ( v14 < v15 + 1 )
    {
      v33 = *(_QWORD *)(v22 + 8);
      v32 = *(_QWORD *)v22;
      v36 = qvector_reserve(&v36, v9, v15 + 1, 24);
      v15 = v37.m128_u64[0];
      v9 = (const char *)v36;
      v20 = v33;
      v19 = v32;
    }
    v21 = (char *)&v9[24 * v15];
    *(_QWORD *)v21 = v19;
    v9 = (const char *)v36;
    *((_QWORD *)v21 + 1) = v20;
    *((_WORD *)v21 + 8) = v23;
    v13 = *(_QWORD *)(a1 + 176);
    v14 = v37.m128_u64[1];
    v15 = v37.m128_u64[0] + 1;
    LOWORD(v21) = *(_WORD *)(v22 + 16);
    ++v37.m128_u64[0];
    v17 |= (unsigned __int16)((_WORD)v21 - 36) <= 7u;
LABEL_16:
    v18 = ++v16;
  }
  while ( (unsigned __int64)v16 < *(_QWORD *)(a1 + 184) );
  *(_QWORD *)(a1 + 176) = v9;
  v24 = _mm_loadh_ps((const double *)(a1 + 192));
  *(_QWORD *)(a1 + 184) = v15;
  *(_QWORD *)(a1 + 192) = v14;
  v36 = v13;
  v37 = v24;
  if ( !v15 )
  {
LABEL_22:
    if ( v13 )
    {
      v37.m128_u64[0] = 0;
      qfree(v13, v9);
    }
    goto LABEL_24;
  }
  v26 = *(_QWORD *)a1;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  v40 = 0;
  v42 = 0;
  sub_40880(v26, (__int64)&v38, 0.0);
  if ( !v17 )
    *(_DWORD *)(a1 + 60) = v42;
  v27 = *(_QWORD *)(a1 + 176);
  v28 = *(unsigned __int16 *)(v27 + 16);
  if ( (unsigned __int16)(v28 - 36) <= 7u )
  {
    *(_DWORD *)(a1 + 56) = 8;
    v29 = 8 * *(unsigned __int16 *)(v27 + 16) - 256;
  }
  else
  {
    v29 = 4 * v28 - 12;
  }
  v30 = v41;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)v27 - v29;
  if ( v30 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v30, (const char *)&v38);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, (const char *)&v38);
  }
  if ( v36 )
  {
    v37.m128_u64[0] = 0;
    qfree(v36, (const char *)&v38);
  }
  return v48[0] - __readfsqword(0x28u);
}

