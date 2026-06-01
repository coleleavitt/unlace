__int64 __fastcall sub_65CA0(_QWORD *a1, _DWORD *a2, _QWORD *a3, int a4, int a5, double a6)
{
  __int64 v7; // r12
  _QWORD *v8; // rbp
  int v9; // ebx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // edx
  _DWORD *v15; // r15
  _DWORD *v16; // rdx
  __int64 v17; // r15
  int v18; // edx
  _QWORD *i; // r12
  unsigned int v20; // r15d
  __int64 v21; // rsi
  __int64 v22; // r8
  int v23; // r14d
  __int64 v25; // rdx
  void (*v26)(); // rcx
  size_t v27; // r8
  size_t v28; // r11
  void *v29; // r14
  __int64 v30; // rax
  __m128i v31; // xmm3
  char v32; // r9
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // r13
  size_t na; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+8h] [rbp-80h]
  size_t v45; // [rsp+10h] [rbp-78h]
  int v46; // [rsp+18h] [rbp-70h]
  char v48; // [rsp+1Fh] [rbp-69h]
  size_t v49; // [rsp+28h] [rbp-60h]
  unsigned int v50; // [rsp+3Ch] [rbp-4Ch] BYREF
  _QWORD v51[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a5;
  v8 = a1;
  v9 = a4;
  v51[1] = __readfsqword(0x28u);
  if ( a1[17] == a1[21] )
  {
    v38 = a1[70];
    if ( v38 )
    {
      if ( a1[71] )
      {
        v39 = 0;
        v40 = 0;
        v41 = a1[71];
        do
        {
          if ( *(_QWORD *)(v38 + v40 + 8) )
          {
            *(_QWORD *)(v38 + v40 + 16) = 0;
            qfree();
            v38 = a1[70];
          }
          ++v39;
          v40 += 56;
        }
        while ( v41 != v39 );
        v9 = a4;
      }
      a1[71] = 0;
      qfree();
      a1[70] = 0;
      a1[72] = 0;
    }
  }
  v46 = 0;
  v10 = &a3[7 * v9];
  if ( a3 != v10 )
  {
    v11 = a3;
    do
    {
      if ( !*((_BYTE *)v11 + 40) )
      {
        v12 = *((_DWORD *)v11 + 8);
        v13 = *v11;
        if ( v12 == 4 )
        {
          v25 = a1[62];
          v51[0] = *v11;
          v50 = v25;
          v26 = *(void (**)())(*a1 + 544LL);
          if ( v26 != nullsub_41 )
          {
            ((void (__fastcall *)(_QWORD *, _QWORD *, unsigned int *))v26)(a1, v51, &v50);
            v13 = *v11;
            v12 = *((_DWORD *)v11 + 8);
          }
        }
        else
        {
          v14 = *((_DWORD *)v11 + 9);
          v51[0] = *v11;
          v50 = v14;
        }
        v15 = (_DWORD *)a1[70];
        v16 = &v15[14 * a1[71]];
        if ( v15 != v16 )
        {
          while ( v13 != *(_QWORD *)v15 || v15[8] != v12 )
          {
            v15 += 14;
            if ( v16 == v15 )
              goto LABEL_14;
          }
          if ( v16 != v15 && v15[12] == *((_DWORD *)v11 + 12) )
          {
            if ( *((_QWORD *)v15 + 1) )
            {
              *((_QWORD *)v15 + 2) = 0;
              qfree();
            }
            memmove(v15, v15 + 14, a1[70] + 56LL * a1[71]-- - (_QWORD)v15 - 56);
            v12 = *((_DWORD *)v11 + 8);
          }
        }
LABEL_14:
        v17 = (*(unsigned int (__fastcall **)(_QWORD *, _QWORD *, _QWORD, _QWORD, _QWORD))(*a1 + 312LL))(
                a1,
                v11 + 1,
                v12,
                v51[0],
                v50)
            + 2;
        sub_65BB0(
          (__int64)a1,
          (__int64)"dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n",
          *((_DWORD *)v11 + 8),
          a6,
          LODWORD(v51[0]),
          v50);
        LOBYTE(v18) = 8;
        if ( (unsigned int)v17 <= 4 )
        {
          v18 = dword_778B0[v17];
          v46 += v18 == 10 || v18 == 0;
        }
        *((_BYTE *)v11 + 40) = v18;
      }
      v11 += 7;
    }
    while ( v10 != v11 );
    v8 = a1;
    v7 = (int)v7;
  }
  for ( i = &v10[7 * v7]; i != v10; ++v46 )
  {
    while ( 1 )
    {
      v21 = *((unsigned int *)v10 + 8);
      *((_BYTE *)v10 + 40) = 0;
      v22 = (_DWORD)v21 == 4 ? *((unsigned int *)v10 + 4) : *((unsigned int *)v10 + 9);
      v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, __int64))(*v8 + 320LL))(
              v8,
              v21,
              *v10,
              v10[1],
              v22);
      sub_65BB0((__int64)v8, (__int64)"dbg_del_bpt(type=%d, ea=%a) => %d\n", *((_DWORD *)v10 + 8), a6, *v10);
      if ( v23 > 0 )
        break;
      *((_BYTE *)v10 + 40) = 8;
      v10 += 7;
      if ( i == v10 )
        goto LABEL_27;
    }
    v20 = *((_DWORD *)v10 + 8);
    if ( ((v20 - 4) & 0xFFFFFFFB) == 0 )
    {
      v27 = v10[2];
      v28 = *v10;
      v29 = nullptr;
      if ( v27 )
      {
        v45 = *v10;
        n = v10[2];
        v29 = (void *)qalloc_or_throw();
        memcpy(v29, (const void *)v10[1], n);
        v20 = *((_DWORD *)v10 + 8);
        v28 = v45;
        v27 = n;
      }
      v30 = v8[71];
      v31 = _mm_cvtsi32_si128(*((_DWORD *)v10 + 9));
      v32 = *((_BYTE *)v10 + 40);
      v33 = _mm_cvtsi32_si128(*((_DWORD *)v10 + 11));
      v34 = _mm_cvtsi32_si128(*((_DWORD *)v10 + 12));
      v35 = v8[70];
      if ( v8[72] < (unsigned __int64)(v30 + 1) )
      {
        v49 = v27;
        v48 = *((_BYTE *)v10 + 40);
        na = v28;
        v37 = qvector_reserve();
        v8[70] = v37;
        v35 = v37;
        v27 = v49;
        v30 = v8[71];
        v34 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v34));
        v33 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v33));
        v32 = v48;
        v31 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v31));
        v28 = na;
      }
      v36 = v35 + 56 * v30;
      *(__m128i *)(v36 + 16) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      *(_QWORD *)&a6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), v31).m128i_u64[0];
      *(_QWORD *)v36 = v28;
      *(_QWORD *)(v36 + 8) = v29;
      *(_BYTE *)(v36 + 40) = v32;
      *(double *)(v36 + 32) = a6;
      *(_QWORD *)(v36 + 44) = _mm_unpacklo_epi32(v33, v34).m128i_u64[0];
      ++v8[71];
    }
    v10 += 7;
  }
LABEL_27:
  if ( a2 )
    *a2 = v46;
  return 1;
}

