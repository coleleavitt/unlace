__int64 __fastcall sub_FB9D0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  unsigned __int64 v17; // r14
  unsigned int v18; // r12d
  unsigned __int16 v19; // bx
  unsigned __int64 *v20; // rax
  _OWORD *v21; // rbp
  int v22; // r13d
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // r13d
  __int16 v26; // bp
  unsigned __int16 *v27; // rbx
  int v28; // r12d
  _OWORD *v29; // rbp
  unsigned int v30; // esi
  __int16 v31; // ax
  unsigned __int16 v32; // r8
  unsigned __int64 v33; // [rsp+0h] [rbp-398h]
  __int64 v36; // [rsp+20h] [rbp-378h]
  int v37; // [rsp+2Ch] [rbp-36Ch]
  const __m128i *v38; // [rsp+30h] [rbp-368h]
  __int64 *v39; // [rsp+38h] [rbp-360h]
  unsigned __int64 v40; // [rsp+48h] [rbp-350h]
  unsigned __int64 v41; // [rsp+70h] [rbp-328h]
  int v42; // [rsp+78h] [rbp-320h]
  unsigned int v43; // [rsp+7Ch] [rbp-31Ch]
  __m128i si128; // [rsp+80h] [rbp-318h] BYREF
  __m128i v45; // [rsp+90h] [rbp-308h]
  __int64 v46; // [rsp+A0h] [rbp-2F8h]
  _OWORD v47[3]; // [rsp+B0h] [rbp-2E8h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-2B8h]
  unsigned __int16 v49; // [rsp+F0h] [rbp-2A8h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-2A0h] BYREF
  unsigned __int16 v51; // [rsp+130h] [rbp-268h]
  char v52[56]; // [rsp+138h] [rbp-260h] BYREF
  _QWORD v53[2]; // [rsp+170h] [rbp-228h] BYREF
  char v54; // [rsp+180h] [rbp-218h]
  int v55; // [rsp+184h] [rbp-214h]
  int v56; // [rsp+18Ch] [rbp-20Ch]
  unsigned __int64 v57; // [rsp+190h] [rbp-208h]
  unsigned __int64 v58; // [rsp+358h] [rbp-40h]
  _OWORD v59[3]; // [rsp+360h] [rbp-38h] BYREF

  v4 = a1->m128i_i64[1];
  v5 = a1[1].m128i_i64[0];
  v58 = __readfsqword(0x28u);
  v6 = a1->m128i_i64[0];
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_DWORD *)(v4 + 20);
  v48 = 0;
  memset(v47, 0, sizeof(v47));
  v9 = *(_QWORD *)(v6 + 8);
  if ( (*(_BYTE *)(v9 + 104LL * *(unsigned __int8 *)(v5 + 16) + 68) & 0x10) != 0 )
    return 0;
  v33 = v7 + 56LL * v8;
  if ( v33 <= *(_QWORD *)(v4 + 32) )
    return 0;
  v39 = (__int64 *)v4;
  v10 = v5;
  v36 = v9 + 104LL * *(unsigned __int8 *)(v5 + 16) + 8;
  v11 = *(_QWORD *)(v4 + 32);
  v38 = a1;
  v37 = *(_DWORD *)(v9 + 104LL * *(unsigned __int8 *)(v5 + 16) + 72);
  while ( 1 )
  {
    if ( (*(_BYTE *)(v11 + 21) & 2) != 0 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      if ( (*(_QWORD *)(v12 + 488) & *(_QWORD *)(v10 + 8)) != 0 )
        break;
    }
LABEL_6:
    v11 += 56LL;
    if ( v33 <= v11 )
      return 0;
  }
  v40 = *(_QWORD *)(v12 + 32) + 56LL * *(int *)(v12 + 20);
  v15 = v38[2].m128i_i64[0];
  si128 = _mm_load_si128(v38);
  v16 = _mm_load_si128(v38 + 1);
  v46 = v15;
  v45 = v16;
  v17 = *(_QWORD *)(v12 + 32);
  v45.m128i_i64[1] = (__int64)&v49;
  if ( v40 <= v17 )
  {
    *(_WORD *)(v10 + 52) = 1;
    **(_QWORD **)(v10 + 64) = v11;
    *(_DWORD *)(v10 + 48) = 0x2000;
    *(_WORD *)(v10 + 18) = 0;
    *(_BYTE *)(v10 + 17) = 0;
    *(_OWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 40) = 0;
    goto LABEL_23;
  }
  v42 = 1;
  v18 = 0;
  v41 = v11;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v17 + 21) & 4) != 0 )
    {
      si128.m128i_i64[1] = *(_QWORD *)(v17 + 32);
      goto LABEL_13;
    }
    if ( *(_DWORD *)(v17 + 28) == v37 )
      break;
LABEL_20:
    v17 += 56LL;
    if ( v40 <= v17 )
    {
      v11 = v41;
      goto LABEL_22;
    }
  }
  v24 = *v39;
  v53[1] = v39;
  v54 = 44;
  v55 = 1;
  v56 = 1;
  v57 = v17;
  v53[0] = v24;
  si128.m128i_i64[1] = (__int64)v53;
LABEL_13:
  v49 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(v36 + 32) + 63LL) == 1 )
    v18 = sub_E7780(si128.m128i_i64, a2, a3);
  else
    v18 = sub_FB140((__int64)&si128, a2, *(double *)v16.m128i_i64);
  if ( !v18 )
    v18 = sub_FB9D0(&si128, a2, a3);
  v19 = v49;
  if ( v49 )
  {
    if ( v42 )
    {
      LOWORD(v47[0]) = v49;
      __memcpy_chk((char *)v47 + 8, &v50, 16LL * v49, 48);
      v42 = 0;
    }
    else
    {
      v25 = 0;
      v26 = v47[0];
      v51 = v47[0];
      __memcpy_chk(v52, (char *)v47 + 8, 16LL * LOWORD(v47[0]), 48);
      LOWORD(v47[0]) = 0;
      if ( v26 )
      {
        v43 = v18;
        while ( 1 )
        {
          if ( v19 )
          {
            v27 = &v49;
            v28 = 0;
            v29 = &v59[v25];
            do
            {
              v30 = (__int16)v27[9];
              ++v28;
              v27 += 8;
              sub_CB800(*((__int16 *)v29 - 271), v30);
              v31 = sub_CB800(*((__int16 *)v29 - 272), (__int16)*v27);
              sub_C4EB0((unsigned __int16 *)v47, *((_QWORD *)v27 - 1) | *((_QWORD *)v29 - 69), v31, v32);
            }
            while ( v49 > v28 );
          }
          if ( v51 <= ++v25 )
            break;
          v19 = v49;
        }
        v18 = v43;
      }
    }
    goto LABEL_20;
  }
  v11 = v41;
  LOWORD(v47[0]) = 0;
LABEL_22:
  v20 = *(unsigned __int64 **)(v10 + 64);
  *(_WORD *)(v10 + 52) = 1;
  *v20 = v11;
  *(_DWORD *)(v10 + 48) = 0x2000;
  *(_WORD *)(v10 + 18) = 0;
  *(_BYTE *)(v10 + 17) = 0;
  *(_OWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  if ( v18 )
    return v18;
LABEL_23:
  if ( !LOWORD(v47[0]) )
    goto LABEL_6;
  v21 = v47;
  v22 = 0;
  while ( 1 )
  {
    ++v22;
    *(_WORD *)(v10 + 20) = *((_WORD *)v21 + 8) + 1;
    *(_WORD *)(v10 + 22) = *((_WORD *)v21 + 9);
    *(_QWORD *)v10 = *((_QWORD *)v21 + 1);
    v23 = sub_DE680((__int64)v38, v10);
    if ( v23 )
      return v23;
    ++v21;
    if ( LOWORD(v47[0]) <= v22 )
      goto LABEL_6;
  }
}
