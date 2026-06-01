_QWORD *__fastcall sub_35220(_DWORD *a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __m128 v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // xmm1_8
  unsigned __int64 *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // r12
  _BYTE *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // r13
  __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  unsigned __int64 v23; // rax
  void *v24; // rdi
  char *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbp
  void *v30; // rdi
  __int64 v31; // rax
  __int64 v33; // rax
  __m128i si128; // xmm0
  __int64 v35; // rbx
  __int64 v36; // rax
  struct _Unwind_Exception *v37; // rbx
  __int64 v38; // [rsp+0h] [rbp-58h]
  _QWORD *v39; // [rsp+8h] [rbp-50h]

  if ( a1 )
  {
    v3 = operator new(0x28u);
    *(_DWORD *)v3 = 1;
    v4 = v3;
    v5 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 2));
    v39 = (_QWORD *)v3;
    *(__m128 *)(v3 + 8) = v5;
    v6 = *((_QWORD *)a1 + 3);
    v7 = _mm_movehl_ps(a3, v5).m128_u64[0];
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 24) = v6;
    if ( v7 > 0x71C71C71C71C7180LL )
    {
      v37 = (struct _Unwind_Exception *)QT::qBadAlloc();
      operator delete(v39, 0x28u);
      _Unwind_Resume(v37);
    }
    v8 = (unsigned __int64 *)operator new[](144 * (v7 >> 7) + 8);
    *v8 = v7 >> 7;
    v9 = v8 + 1;
    if ( v7 >> 7 )
    {
      v10 = (v7 >> 7) - 2;
      v11 = v8 + 1;
      do
      {
        --v10;
        *v11 = -1;
        v11 += 9;
        *((_QWORD *)v11 - 2) = 0;
        *((_WORD *)v11 - 4) = 0;
        *(v11 - 8) = -1;
        *(v11 - 7) = -1;
        *(v11 - 6) = -1;
        *(v11 - 5) = -1;
        *(v11 - 4) = -1;
        *(v11 - 3) = -1;
        *(v11 - 2) = -1;
      }
      while ( v10 != -2 );
      v38 = 0;
      v39[4] = v9;
      do
      {
        v12 = 0;
        v13 = *((_QWORD *)a1 + 4) + v38;
        do
        {
          v16 = *(unsigned __int8 *)(v13 + v12);
          if ( (_BYTE)v16 != 0xFF )
          {
            v17 = (_QWORD *)(*(_QWORD *)(v13 + 128) + 8 * v16);
            v18 = v39[4] + v38;
            v19 = *(unsigned __int8 *)(v18 + 137);
            if ( (_BYTE)v19 == *(_BYTE *)(v18 + 136) )
            {
              if ( (_BYTE)v19 )
              {
                if ( (_BYTE)v19 == 48 )
                {
                  v20 = 640;
                  v19 = 80;
                }
                else
                {
                  v19 += 16LL;
                  v20 = 8 * v19;
                }
              }
              else
              {
                v20 = 384;
                v19 = 48;
              }
              v21 = (_QWORD *)operator new[](v20);
              v22 = *(_BYTE *)(v18 + 136);
              v14 = v21;
              v23 = 0;
              if ( !v22
                || (v25 = *(char **)(v18 + 128),
                    v23 = v22,
                    v26 = 8LL * v22,
                    *v14 = *(_QWORD *)v25,
                    v14[(unsigned __int64)v26 / 8 - 1] = *(_QWORD *)&v25[v26 - 8],
                    qmemcpy(
                      (void *)((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                      (const void *)(v25 - ((char *)v14 - ((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                      8LL * (((unsigned int)v14 - (((_DWORD)v14 + 8) & 0xFFFFFFF8) + (unsigned int)v26) >> 3)),
                    v23 < v19) )
              {
                do
                {
                  LOBYTE(v14[v23]) = v23 + 1;
                  ++v23;
                }
                while ( v23 < v19 );
              }
              v24 = *(void **)(v18 + 128);
              if ( v24 )
                operator delete[](v24);
              *(_BYTE *)(v18 + 136) = v19;
              LOBYTE(v19) = *(_BYTE *)(v18 + 137);
              *(_QWORD *)(v18 + 128) = v14;
            }
            else
            {
              v14 = *(_QWORD **)(v18 + 128);
            }
            v15 = &v14[(unsigned __int8)v19];
            *(_BYTE *)(v18 + 137) = *v15;
            *(_BYTE *)(v18 + v12) = v19;
            *(_QWORD *)v15 = *v17;
          }
          ++v12;
        }
        while ( v12 != 128 );
        v38 += 144;
      }
      while ( 144 * (v7 >> 7) != v38 );
    }
    else
    {
      v39[4] = v9;
    }
    if ( *a1 != -1 && !_InterlockedSub(a1, 1u) )
    {
      v27 = *((_QWORD *)a1 + 4);
      if ( v27 )
      {
        v28 = v27 + 144LL * *(_QWORD *)(v27 - 8);
        if ( v27 == v28 )
        {
          v31 = 0;
        }
        else
        {
          do
          {
            v29 = v28;
            v30 = *(void **)(v28 - 16);
            v28 -= 144;
            if ( v30 )
              operator delete[](v30);
          }
          while ( *((_QWORD *)a1 + 4) != v28 );
          v31 = 144LL * *(_QWORD *)(v29 - 152);
        }
        operator delete[]((void *)(v28 - 8), v31 + 8);
      }
      operator delete(a1, 0x28u);
    }
  }
  else
  {
    v33 = operator new(0x28u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_40F60);
    *(_QWORD *)v33 = 1;
    v35 = v33;
    *(_QWORD *)(v33 + 24) = 0;
    *(_QWORD *)(v33 + 32) = 0;
    *(__m128i *)(v33 + 8) = si128;
    v39 = (_QWORD *)v33;
    v36 = operator new[](0x98u);
    *(_QWORD *)v36 = 1;
    *(_OWORD *)(v36 + 8) = -1;
    *(_OWORD *)(v36 + 24) = -1;
    *(_OWORD *)(v36 + 40) = -1;
    *(_OWORD *)(v36 + 56) = -1;
    *(_OWORD *)(v36 + 72) = -1;
    *(_OWORD *)(v36 + 88) = -1;
    *(_OWORD *)(v36 + 104) = -1;
    *(_OWORD *)(v36 + 120) = -1;
    *(_QWORD *)(v36 + 136) = 0;
    *(_WORD *)(v36 + 144) = 0;
    *(_QWORD *)(v35 + 32) = v36 + 8;
    *(_QWORD *)(v35 + 24) = QT::QHashSeed::globalSeed(nullptr);
  }
  return v39;
}
