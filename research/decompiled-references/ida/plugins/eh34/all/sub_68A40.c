__int64 __fastcall sub_68A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __m128i v16; // xmm0
  int v17; // eax
  __m128i v18; // xmm0
  __int64 (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // di
  void *v27; // rax
  const void *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rbx
  __m128i v40; // xmm0
  int v41; // eax
  __int64 v42; // r11
  void *v43; // rax
  __int64 v44; // r10
  void *v45; // rax
  const void *v46; // rsi
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+0h] [rbp-68h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 n; // [rsp+10h] [rbp-58h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  __int64 v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+28h] [rbp-40h]

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 32);
  *(__m128i *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  LOWORD(v8) = *(_WORD *)(a2 + 44);
  *(_QWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 44) = v8;
  *(_OWORD *)(a1 + 56) = 0;
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    v21 = qalloc_or_throw(12 * v9);
    v22 = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 64) = v9;
    *(_QWORD *)(a1 + 48) = v21;
    *(_WORD *)v21 = *(_WORD *)v22;
    *(_BYTE *)(v21 + 2) = *(_BYTE *)(v22 + 2);
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v22 + 4);
    a4 = *(unsigned __int8 *)(v22 + 4);
    a3 = *(unsigned int *)(v22 + 8);
    *(_BYTE *)(v21 + 4) = a4;
    *(_DWORD *)(v21 + 8) = a3;
    if ( v9 != 1 )
    {
      a4 = 12;
      v23 = 1;
      do
      {
        ++v23;
        v24 = a4 + *(_QWORD *)(a2 + 48);
        v25 = a4 + *(_QWORD *)(a1 + 48);
        a4 += 12;
        *(_WORD *)v25 = *(_WORD *)v24;
        *(_BYTE *)(v25 + 2) = *(_BYTE *)(v24 + 2);
        *(_DWORD *)(v25 + 4) = *(_DWORD *)(v24 + 4);
        v26 = *(_BYTE *)(v24 + 4);
        a3 = *(unsigned int *)(v24 + 8);
        *(_BYTE *)(v25 + 4) = v26;
        *(_DWORD *)(v25 + 8) = a3;
      }
      while ( v9 != v23 );
    }
    *(_QWORD *)(a1 + 56) = v9;
  }
  v10 = *(_QWORD *)(a2 + 136);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(_QWORD *)(a1 + 136) = v10;
  *(__m128i *)(a1 + 88) = v11;
  *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(__m128i *)(a1 + 120) = _mm_loadu_si128((const __m128i *)(a2 + 120));
  *(_BYTE *)(a1 + 144) = *(_BYTE *)(a2 + 144);
  v12 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = v12;
  *(_OWORD *)(a1 + 168) = 0;
  v13 = *(_QWORD *)(a2 + 168);
  if ( v13 )
  {
    v45 = (void *)qalloc_or_throw(32 * v13);
    *(_QWORD *)(a1 + 160) = v45;
    v46 = *(const void **)(a2 + 160);
    *(_QWORD *)(a1 + 176) = v13;
    memcpy(v45, v46, 32 * v13);
    *(_QWORD *)(a1 + 168) = v13;
  }
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v14 = *(_QWORD *)(a2 + 192);
  v55 = v14;
  if ( v14 )
  {
    v29 = *(_QWORD *)(a2 + 192);
    v30 = qalloc_or_throw(40 * v14);
    *(_QWORD *)(a1 + 184) = v30;
    v31 = v30;
    v32 = 0;
    *(_QWORD *)(a1 + 200) = v29;
    while ( 1 )
    {
      v33 = 40 * v32 + v31;
      v34 = *(_QWORD *)(a2 + 184) + 40 * v32;
      *(_QWORD *)v33 = *(_QWORD *)v34;
      v35 = *(_DWORD *)(v34 + 8);
      *(_QWORD *)(v33 + 16) = 0;
      *(_DWORD *)(v33 + 8) = v35;
      *(_OWORD *)(v33 + 24) = 0;
      a4 = *(_QWORD *)(v34 + 24);
      if ( a4 )
      {
        v47 = *(_QWORD *)(v34 + 24);
        v36 = qalloc_or_throw(72 * a4);
        a4 = v47;
        *(_QWORD *)(v33 + 16) = v36;
        v37 = 0;
        *(_QWORD *)(v33 + 32) = v47;
        while ( 1 )
        {
          v38 = v36 + 72 * v37;
          v39 = *(_QWORD *)(v34 + 16) + 72 * v37;
          v40 = _mm_loadu_si128((const __m128i *)(v39 + 8));
          *(_BYTE *)v38 = *(_BYTE *)v39;
          v41 = *(_DWORD *)(v39 + 24);
          *(__m128i *)(v38 + 8) = v40;
          *(_DWORD *)(v38 + 24) = v41;
          LOBYTE(v41) = *(_BYTE *)(v39 + 28);
          *(_QWORD *)(v38 + 32) = 0;
          *(_BYTE *)(v38 + 28) = v41;
          *(_OWORD *)(v38 + 40) = 0;
          v42 = *(_QWORD *)(v39 + 40);
          if ( v42 )
          {
            v50 = v38;
            v54 = a4;
            v53 = v37;
            v48 = *(_QWORD *)(v39 + 40);
            n = 8 * v42;
            v43 = (void *)qalloc_or_throw(8 * v42);
            v44 = v50;
            *(_QWORD *)(v50 + 48) = v48;
            *(_QWORD *)(v50 + 32) = v43;
            v51 = v48;
            v49 = v44;
            memcpy(v43, *(const void **)(v39 + 32), n);
            v38 = v49;
            a4 = v54;
            v37 = v53;
            *(_QWORD *)(v49 + 40) = v51;
          }
          ++v37;
          *(_DWORD *)(v38 + 56) = *(_DWORD *)(v39 + 56);
          *(_DWORD *)(v38 + 60) = *(_DWORD *)(v39 + 60);
          *(_BYTE *)(v38 + 64) = *(_BYTE *)(v39 + 64);
          if ( a4 == v37 )
            break;
          v36 = *(_QWORD *)(v33 + 16);
        }
        *(_QWORD *)(v33 + 24) = a4;
        if ( v55 == ++v32 )
        {
LABEL_22:
          *(_QWORD *)(a1 + 192) = v55;
          break;
        }
      }
      else if ( v55 == ++v32 )
      {
        goto LABEL_22;
      }
      v31 = *(_QWORD *)(a1 + 184);
    }
  }
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  v15 = *(_QWORD *)(a2 + 216);
  if ( v15 )
  {
    v27 = (void *)qalloc_or_throw(16 * v15);
    *(_QWORD *)(a1 + 208) = v27;
    v28 = *(const void **)(a2 + 208);
    *(_QWORD *)(a1 + 224) = v15;
    memcpy(v27, v28, 16 * v15);
    *(_QWORD *)(a1 + 216) = v15;
  }
  *(_BYTE *)(a1 + 232) = *(_BYTE *)(a2 + 232);
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 240));
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
  v17 = *(_DWORD *)(a2 + 280);
  *(__m128i *)(a1 + 240) = v16;
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 256));
  *(_DWORD *)(a1 + 280) = v17;
  *(__m128i *)(a1 + 256) = v18;
  *(_BYTE *)(a1 + 288) = *(_BYTE *)(a2 + 288);
  sub_68290(a1 + 296, a2 + 296, a3, a4, a5);
  *(_QWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1 + 296, (const char *)(a2 + 296));
  return hexdsp(203, a1 + 736, a2 + 736);
}

