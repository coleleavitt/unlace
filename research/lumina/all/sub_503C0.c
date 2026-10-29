unsigned __int64 __fastcall sub_503C0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  void *v10; // r13
  __m128i v11; // xmm0
  void *v12; // rdi
  __int64 v13; // r13
  unsigned __int64 v14; // r11
  char *v15; // rcx
  __int64 v16; // rbp
  __int64 i; // r14
  char *v18; // rdx
  void *v19; // rdi
  __m128i v20; // xmm2
  unsigned __int64 v21; // r13
  char v22; // al
  bool v23; // zf
  __int64 *v25; // rbp
  __int64 v26; // r14
  _QWORD *v27; // rbx
  __int64 v28; // r12
  _QWORD *j; // r14
  void (*v30)(); // rax
  const void *v31; // rbp
  void *v32; // rax
  size_t v33; // r8
  const void *v34; // r10
  void *v35; // rax
  const void *v36; // rbp
  __int64 v37; // rax
  const void *v38; // r11
  __int128 v39; // xmm0
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rsi
  size_t v43; // rbx
  __int64 v44; // rdi
  void *v45; // rax
  const void **v46; // rsi
  size_t v47; // rbp
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __m128i v51; // [rsp+0h] [rbp-A8h] BYREF
  int v52; // [rsp+14h] [rbp-94h]
  int v53; // [rsp+18h] [rbp-90h]
  char v54; // [rsp+1Fh] [rbp-89h]
  __int64 v55; // [rsp+20h] [rbp-88h]
  const void *v56; // [rsp+28h] [rbp-80h]
  const void **v57; // [rsp+30h] [rbp-78h]
  __int64 v58; // [rsp+38h] [rbp-70h]
  __int64 v59; // [rsp+48h] [rbp-60h] BYREF
  int v60; // [rsp+50h] [rbp-58h] BYREF
  __int16 v61; // [rsp+54h] [rbp-54h]
  __int64 v62; // [rsp+58h] [rbp-50h]
  int v63; // [rsp+60h] [rbp-48h]
  int v64; // [rsp+64h] [rbp-44h]
  unsigned __int64 v65; // [rsp+68h] [rbp-40h]

  v52 = a3;
  v53 = a4;
  v58 = a5;
  v65 = __readfsqword(0x28u);
  v55 = a1 + 200;
  if ( *(_DWORD *)a2 == *(_DWORD *)(a1 + 200) && *(_WORD *)(a2 + 4) == *(_WORD *)(v55 + 4) )
    v54 = *(_BYTE *)(a1 + 352) ^ v52;
  else
    v54 = 1;
  v7 = a1 + 232;
  *(_DWORD *)(a1 + 200) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 204) = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 220) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 24);
  if ( a1 + 232 != a2 + 32 )
  {
    v8 = *(_QWORD *)(a2 + 40);
    if ( v8 > 1 )
    {
      v31 = *(const void **)(a2 + 32);
      v32 = *(void **)(a1 + 232);
      if ( *(_QWORD *)(a1 + 248) < v8 )
      {
        v32 = (void *)sub_1987B0(v7, *(_QWORD *)(a1 + 232), *(_QWORD *)(a2 + 40), 1);
        *(_QWORD *)(a1 + 232) = v32;
      }
      *(_QWORD *)(a1 + 240) = v8;
      memmove(v32, v31, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 232) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 240) = 0;
    }
  }
  v9 = *(_QWORD *)(a2 + 64);
  v10 = nullptr;
  v11 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    v51 = v11;
    v47 = 40 * v9;
    v10 = (void *)sub_198760(40 * v9);
    memcpy(v10, *(const void **)(a2 + 56), v47);
    v11 = _mm_load_si128(&v51);
  }
  v12 = *(void **)(a1 + 256);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    v51 = v11;
    j__free(v12);
    v11 = _mm_load_si128(&v51);
  }
  *(_QWORD *)(a1 + 256) = v10;
  v13 = 0;
  *(__m128i *)(a1 + 264) = v11;
  v14 = *(_QWORD *)(a2 + 88);
  v51 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v14 )
  {
    v56 = (const void *)v14;
    v36 = nullptr;
    v37 = sub_198760(24 * v14);
    v38 = v56;
    v39 = 0;
    v13 = v37;
    v40 = v37;
    do
    {
      v41 = *(_QWORD *)(a2 + 80);
      *(_QWORD *)v40 = 0;
      *(_OWORD *)(v40 + 8) = v39;
      v42 = v41 + 24LL * (_QWORD)v36;
      v43 = *(_QWORD *)(v42 + 8);
      if ( v43 )
      {
        v44 = *(_QWORD *)(v42 + 8);
        v56 = v38;
        v57 = (const void **)(v41 + 24LL * (_QWORD)v36);
        v45 = (void *)sub_198760(v44);
        v46 = v57;
        *(_QWORD *)(v40 + 16) = v43;
        *(_QWORD *)v40 = v45;
        memcpy(v45, *v46, v43);
        *(_QWORD *)(v40 + 8) = v43;
        v38 = v56;
        v39 = 0;
      }
      v36 = (char *)v36 + 1;
      v40 += 24;
    }
    while ( v38 != v36 );
  }
  v15 = *(char **)(a1 + 280);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 288);
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v18 = &v15[24 * i];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          j__free(v19);
          v15 = *(char **)(a1 + 280);
        }
      }
    }
    *(_QWORD *)(a1 + 288) = 0;
    j__free(v15);
  }
  v20 = _mm_load_si128(&v51);
  *(_QWORD *)(a1 + 280) = v13;
  *(__m128i *)(a1 + 288) = v20;
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 312) = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 320) = *(_QWORD *)(a2 + 120);
  if ( a1 + 328 != a2 + 128 )
  {
    v21 = *(_QWORD *)(a2 + 136);
    if ( !v21 || (v33 = v21 - 1, v21 == 1) )
    {
      *(_QWORD *)(a1 + 336) = 0;
    }
    else
    {
      v34 = *(const void **)(a2 + 128);
      v35 = *(void **)(a1 + 328);
      if ( *(_QWORD *)(a1 + 344) < v21 )
      {
        v49 = *(_QWORD *)(a2 + 136);
        v50 = *(_QWORD *)(a1 + 328);
        v56 = *(const void **)(a2 + 128);
        v51.m128i_i64[0] = v21 - 1;
        v35 = (void *)sub_1987B0(a1 + 328, v50, v49, 1);
        v34 = v56;
        v33 = v51.m128i_i64[0];
        *(_QWORD *)(a1 + 328) = v35;
      }
      *(_QWORD *)(a1 + 336) = v21;
      memmove(v35, v34, v33);
      *(_BYTE *)(*(_QWORD *)(a1 + 328) + v21 - 1) = 0;
    }
  }
  v22 = v52;
  v23 = v54 == 0;
  *(_BYTE *)(a1 + 504) = 0;
  *(_BYTE *)(a1 + 352) = v22;
  if ( (!v23 || (v53 & 2) != 0) && (v53 & 1) == 0 )
  {
    v59 = 0;
    v25 = nullptr;
    if ( (_BYTE)v52 )
    {
      v48 = *(_DWORD *)(a1 + 200);
      v25 = &v59;
      v64 = 0;
      v60 = v48;
      v61 = *(_WORD *)(a1 + 204);
      v62 = *(_QWORD *)(a1 + 212);
      v63 = *(_DWORD *)(a1 + 220);
      sub_4F9E0(a1, &v59, (__int64)&v60);
    }
    v26 = *(_QWORD *)(a1 + 392);
    v27 = *(_QWORD **)(a1 + 384);
    v28 = a1 + 40;
    for ( j = &v27[2 * v26]; j != v27; v27 += 2 )
    {
      v30 = *(void (**)())(*(_QWORD *)*v27 + 24LL);
      if ( v30 != nullsub_11 )
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *, __int64))v30)(*v27, v28, v55, v25, v58);
    }
  }
  return v65 - __readfsqword(0x28u);
}
