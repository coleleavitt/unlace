unsigned int **__fastcall sub_21440(unsigned int **a1, double a2, __m128 a3)
{
  unsigned int **result; // rax
  __int64 v4; // rax
  __m128 v5; // xmm0
  __int64 v6; // rsi
  unsigned __int64 v7; // xmm1_8
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _OWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  _QWORD *v15; // r13
  _BYTE *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  unsigned __int64 v25; // r9
  void *v26; // rdi
  __int64 v27; // rax
  __m128i si128; // xmm0
  __int64 v29; // rbx
  __int64 v30; // rax
  char *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rbp
  void *v36; // rdi
  __int64 v37; // rax
  struct _Unwind_Exception *v38; // rbx
  __int64 v39; // [rsp+8h] [rbp-60h]
  unsigned int *v40; // [rsp+10h] [rbp-58h]
  unsigned int *v41; // [rsp+18h] [rbp-50h]

  v41 = *a1;
  if ( !*a1 )
  {
    v27 = operator new(0x28u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_40F60);
    *(_QWORD *)v27 = 1;
    v29 = v27;
    *(_QWORD *)(v27 + 24) = 0;
    *(_QWORD *)(v27 + 32) = 0;
    *(__m128i *)(v27 + 8) = si128;
    v40 = (unsigned int *)v27;
    v30 = operator new[](0x98u);
    *(_QWORD *)v30 = 1;
    *(_OWORD *)(v30 + 8) = -1;
    *(_OWORD *)(v30 + 24) = -1;
    *(_OWORD *)(v30 + 40) = -1;
    *(_OWORD *)(v30 + 56) = -1;
    *(_OWORD *)(v30 + 72) = -1;
    *(_OWORD *)(v30 + 88) = -1;
    *(_OWORD *)(v30 + 104) = -1;
    *(_OWORD *)(v30 + 120) = -1;
    *(_QWORD *)(v30 + 136) = 0;
    *(_WORD *)(v30 + 144) = 0;
    *(_QWORD *)(v29 + 32) = v30 + 8;
    *(_QWORD *)(v29 + 24) = QT::QHashSeed::globalSeed(nullptr);
LABEL_23:
    result = a1;
    *a1 = v40;
    return result;
  }
  result = (unsigned int **)*v41;
  if ( (unsigned int)result <= 1 )
    return result;
  v4 = operator new(0x28u);
  v5 = (__m128)_mm_loadu_si128((const __m128i *)(v41 + 2));
  *(_DWORD *)v4 = 1;
  v6 = v4;
  *(__m128 *)(v4 + 8) = v5;
  v7 = _mm_movehl_ps(a3, v5).m128_u64[0];
  v40 = (unsigned int *)v4;
  v8 = *((_QWORD *)v41 + 3);
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 24) = v8;
  if ( v7 > 0x71C71C71C71C7180LL )
  {
    v38 = (struct _Unwind_Exception *)QT::qBadAlloc();
    operator delete(v40, 0x28u);
    _Unwind_Resume(v38);
  }
  v9 = (unsigned __int64 *)operator new[](144 * (v7 >> 7) + 8);
  *v9 = v7 >> 7;
  v10 = v9 + 1;
  if ( v7 >> 7 )
  {
    v11 = (v7 >> 7) - 2;
    v12 = v9 + 1;
    do
    {
      --v11;
      *v12 = -1;
      v12 += 9;
      *((_QWORD *)v12 - 2) = 0;
      *((_WORD *)v12 - 4) = 0;
      *(v12 - 8) = -1;
      *(v12 - 7) = -1;
      *(v12 - 6) = -1;
      *(v12 - 5) = -1;
      *(v12 - 4) = -1;
      *(v12 - 3) = -1;
      *(v12 - 2) = -1;
    }
    while ( v11 != -2 );
    v39 = 0;
    *((_QWORD *)v40 + 4) = v10;
    do
    {
      v13 = 0;
      v14 = *((_QWORD *)v41 + 4) + v39;
      do
      {
        v17 = *(unsigned __int8 *)(v14 + v13);
        if ( (_BYTE)v17 != 0xFF )
        {
          v18 = (_QWORD *)(*(_QWORD *)(v14 + 128) + 8 * v17);
          v19 = *((_QWORD *)v40 + 4) + v39;
          v20 = *(unsigned __int8 *)(v19 + 137);
          if ( (_BYTE)v20 == *(_BYTE *)(v19 + 136) )
          {
            if ( (_BYTE)v20 )
            {
              if ( (_BYTE)v20 == 48 )
              {
                v22 = 640;
                v21 = 80;
              }
              else
              {
                v21 = v20 + 16;
                v22 = 8 * (v20 + 16);
              }
            }
            else
            {
              v22 = 384;
              v21 = 48;
            }
            v23 = (_QWORD *)operator new[](v22);
            v24 = *(_BYTE *)(v19 + 136);
            v15 = v23;
            v25 = 0;
            if ( !v24
              || (v31 = *(char **)(v19 + 128),
                  v25 = v24,
                  v32 = 8LL * v24,
                  *v23 = *(_QWORD *)v31,
                  v23[(unsigned __int64)v32 / 8 - 1] = *(_QWORD *)&v31[v32 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v23 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v31 - ((char *)v23 - ((unsigned __int64)(v23 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v23 - (((_DWORD)v23 + 8) & 0xFFFFFFF8) + (unsigned int)v32) >> 3)),
                  v25 < v21) )
            {
              do
              {
                LOBYTE(v23[v25]) = v25 + 1;
                ++v25;
              }
              while ( v25 < v21 );
            }
            v26 = *(void **)(v19 + 128);
            if ( v26 )
              operator delete[](v26);
            *(_QWORD *)(v19 + 128) = v15;
            LOBYTE(v20) = *(_BYTE *)(v19 + 137);
            *(_BYTE *)(v19 + 136) = v21;
          }
          else
          {
            v15 = *(_QWORD **)(v19 + 128);
          }
          v16 = &v15[(unsigned __int8)v20];
          *(_BYTE *)(v19 + 137) = *v16;
          *(_BYTE *)(v19 + v13) = v20;
          *(_QWORD *)v16 = *v18;
        }
        ++v13;
      }
      while ( v13 != 128 );
      v39 += 144;
    }
    while ( 144 * (v7 >> 7) != v39 );
  }
  else
  {
    *((_QWORD *)v40 + 4) = v10;
  }
  if ( *v41 == -1 || _InterlockedSub((volatile signed __int32 *)v41, 1u) )
    goto LABEL_23;
  v33 = *((_QWORD *)v41 + 4);
  if ( v33 )
  {
    v34 = v33 + 144LL * *(_QWORD *)(v33 - 8);
    if ( v33 == v34 )
    {
      v37 = 0;
    }
    else
    {
      do
      {
        v35 = v34;
        v36 = *(void **)(v34 - 16);
        v34 -= 144;
        if ( v36 )
          operator delete[](v36);
      }
      while ( *((_QWORD *)v41 + 4) != v34 );
      v37 = 144LL * *(_QWORD *)(v35 - 152);
    }
    operator delete[]((void *)(v34 - 8), v37 + 8);
  }
  operator delete(v41, 0x28u);
  *a1 = v40;
  return a1;
}
