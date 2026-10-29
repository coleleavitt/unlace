__int64 __fastcall sub_1978A0(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r13
  _QWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  char *v9; // r11
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 result; // rax
  __int64 *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbx
  __m128i v27; // xmm1
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // r14
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rcx
  size_t v40; // rbx
  void *v41; // rax
  const void *v42; // rsi
  __m128i v43; // [rsp+0h] [rbp-C8h] BYREF
  void *v44; // [rsp+18h] [rbp-B0h]
  __m128i v45; // [rsp+20h] [rbp-A8h] BYREF
  int v46; // [rsp+34h] [rbp-94h]
  __int64 v47; // [rsp+38h] [rbp-90h]
  __int64 v48; // [rsp+40h] [rbp-88h]
  int v49; // [rsp+48h] [rbp-80h]
  int v50; // [rsp+4Ch] [rbp-7Ch]
  __int64 v51; // [rsp+50h] [rbp-78h]
  __int64 v52; // [rsp+58h] [rbp-70h] BYREF
  __int64 v53; // [rsp+60h] [rbp-68h]
  __int64 v54; // [rsp+68h] [rbp-60h]
  __int64 v55; // [rsp+70h] [rbp-58h]
  _QWORD *v56; // [rsp+78h] [rbp-50h]
  __int64 *v57; // [rsp+80h] [rbp-48h]
  __int64 *v58; // [rsp+88h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  v45.m128i_i64[1] = *a2;
  v46 = *((_DWORD *)a2 + 2);
  v47 = a2[4];
  v49 = *((_DWORD *)a2 + 10);
  v48 = a2[7];
  v50 = *((_DWORD *)a2 + 16);
  v51 = a2[9];
  v52 = a2[10];
  v53 = a2[11];
  v4 = a2[13];
  v44 = nullptr;
  v45.m128i_i64[0] = v4;
  if ( v4 )
  {
    v40 = 8 * v4;
    v41 = (void *)qalloc_or_throw();
    v42 = (const void *)a2[12];
    v44 = v41;
    memcpy(v41, v42, v40);
  }
  v5 = a1[16];
  v6 = a1[17];
  v7 = v2[15];
  if ( v6 < v5 + 1 )
  {
    v43.m128i_i64[0] = v2[15];
    v21 = (__int64 *)&unk_4AF760;
    v22 = qvector_reserve();
    v23 = a1[15];
    v24 = v43.m128i_i64[0];
    v25 = a1[17];
    a1[17] = v6;
    v26 = a1[16];
    v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AF770, (__m128i)(unsigned __int64)off_4AF750);
    v54 = v25;
    v28 = v26 - 1;
    if ( v28 >= 0 )
    {
      v55 = v24;
      v58 = (__int64 *)&unk_4AF760;
      v56 = a1;
      v29 = v28;
      v30 = v22;
      v57 = v2;
      v31 = v23;
      v32 = v22;
      do
      {
        *(_QWORD *)v30 = *(_QWORD *)v31;
        v33 = *(_DWORD *)(v31 + 8);
        *(__m128i *)(v30 + 16) = v27;
        *(_DWORD *)(v30 + 8) = v33;
        *(_QWORD *)(v30 + 32) = *(_QWORD *)(v31 + 32);
        v34 = *(_DWORD *)(v31 + 40);
        *(_QWORD *)(v30 + 48) = off_4AF750;
        *(_DWORD *)(v30 + 40) = v34;
        *(_QWORD *)(v30 + 56) = *(_QWORD *)(v31 + 56);
        *(_DWORD *)(v30 + 64) = *(_DWORD *)(v31 + 64);
        v35 = *(_QWORD *)(v31 + 88);
        *(__m128i *)(v30 + 72) = _mm_loadu_si128((const __m128i *)(v31 + 72));
        *(_QWORD *)(v30 + 88) = v35;
        v36 = *(_QWORD *)(v31 + 96);
        v37 = _mm_loadu_si128((const __m128i *)(v31 + 104));
        *(_QWORD *)(v31 + 96) = 0;
        *(_QWORD *)(v30 + 96) = v36;
        *(__m128i *)(v30 + 104) = v37;
        v38 = *(_QWORD *)(v31 + 120);
        *(_QWORD *)(v31 + 112) = 0;
        *(_QWORD *)(v30 + 120) = v38;
        if ( *(_QWORD *)(v31 + 96) )
        {
          *(_QWORD *)(v31 + 104) = 0;
          v43 = v27;
          qfree();
          v27 = _mm_load_si128(&v43);
        }
        v31 += 128;
        v30 += 128;
      }
      while ( v29-- != 0 );
      v3 = v56;
      v22 = v32;
      v24 = v55;
      v2 = v57;
      v21 = v58;
    }
    v57 = v21;
    v56 = &unk_4AF740;
    v55 = v22;
    v43.m128i_i64[0] = v24;
    qfree();
    v8 = v55;
    v10 = v57;
    v9 = (char *)v56;
    v3[17] = v54;
    v7 = v43.m128i_i64[0];
    v3[15] = v8;
    v5 = v3[16];
  }
  else
  {
    v8 = a1[15];
    v9 = (char *)&unk_4AF740;
    v10 = (__int64 *)&unk_4AF760;
  }
  v11 = (v5 << 7) + v8;
  v12 = v45.m128i_i64[1];
  v13 = v47;
  *(_DWORD *)(v11 + 40) = v49;
  *(_QWORD *)v11 = v12;
  LODWORD(v12) = v46;
  *(_QWORD *)(v11 + 32) = v13;
  *(_DWORD *)(v11 + 8) = v12;
  *(_QWORD *)(v11 + 48) = v9 + 16;
  v14 = v48;
  *(_QWORD *)(v11 + 120) = v7;
  *(_QWORD *)(v11 + 56) = v14;
  LODWORD(v14) = v50;
  *(__m128i *)(v11 + 16) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)(v10 + 2),
                             (__m128i)(unsigned __int64)(v9 + 16));
  *(_DWORD *)(v11 + 64) = v14;
  v15 = v53;
  *(__m128 *)(v11 + 72) = _mm_loadh_ps((const double *)&v52);
  v16 = _mm_loadl_epi64(&v45);
  *(_QWORD *)(v11 + 88) = v15;
  *(_QWORD *)(v11 + 96) = v44;
  *(__m128i *)(v11 + 104) = _mm_unpacklo_epi64(v16, v16);
  ++v3[16];
  v17 = v2[10];
  if ( v17 != -1 )
  {
    v18 = v3[44];
    if ( v18 > v17 || v18 == -1 )
      v3[44] = v17;
  }
  if ( v3[38] == -1 )
    v3[38] = v2[4];
  if ( v3[41] == -1 )
    v3[41] = v2[7];
  v19 = *((_DWORD *)v2 + 10);
  if ( v19 != -1 && v19 < *((_DWORD *)v3 + 78) )
    *((_DWORD *)v3 + 78) = v19;
  result = *((unsigned int *)v2 + 16);
  if ( (_DWORD)result != -1 && (int)result < *((_DWORD *)v3 + 84) )
    *((_DWORD *)v3 + 84) = result;
  return result;
}

