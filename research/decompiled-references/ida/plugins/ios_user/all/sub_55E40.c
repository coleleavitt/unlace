__int64 __fastcall sub_55E40(__int64 a1, __int64 a2, double a3, __m128i a4, __int64 a5, int a6, int a7, int a8)
{
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // rbp
  __int64 v11; // rax
  void (*v12)(); // rdx
  void (*v13)(); // rax
  unsigned int v14; // ebp
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i *v20; // rsi
  __int64 v21; // rax
  __int64 v23; // rax
  void *v24; // rbp
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rsi
  __m128i *v28; // rsi
  __int64 v29; // rax
  void *v30; // rbp
  int v31; // [rsp+0h] [rbp-58h]
  int v32; // [rsp+0h] [rbp-58h]
  __m128i *src; // [rsp+8h] [rbp-50h]

  v8 = *(_QWORD *)(a1 + 1336);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 1344);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = v8 + 32 * i;
        if ( *(_QWORD *)(v11 + 8) )
        {
          *(_QWORD *)(v11 + 16) = 0;
          qfree();
          v8 = *(_QWORD *)(a1 + 1336);
        }
      }
    }
    *(_QWORD *)(a1 + 1344) = 0;
    qfree();
    *(_QWORD *)(a1 + 1336) = 0;
    *(_QWORD *)(a1 + 1352) = 0;
  }
  v12 = nullsub_21;
  v13 = *(void (**)())(*(_QWORD *)a1 + 664LL);
  if ( v13 != nullsub_21 )
    ((void (__fastcall *)(__int64, __int64))v13)(a1, a2);
  src = nullptr;
  sub_5B150(*(_QWORD *)(a1 + 864), a2, (_DWORD)v12, a6, a7, a8);
  v14 = sub_54C60(a1, 0, 0xFFFFFFFF, 0.0, a4);
  if ( v14 != -1 )
  {
    v15 = *(_DWORD *)(a1 + 856);
    if ( v14 != 1 || *(_DWORD *)(a1 + 1360) == 6 )
    {
      v16 = v15 == 5;
      v17 = 1;
      if ( v16 )
        v17 = 100002;
      v31 = v17;
      src = (__m128i *)qvector_reserve();
      *src = _mm_load_si128((const __m128i *)&xmmword_77540);
      strcpy(&src->m128i_i8[15], " attach>");
      v24 = (void *)qalloc_or_throw();
      memcpy(v24, src, 0x18u);
      v18 = *(_QWORD *)(a1 + 1344);
      v19 = *(_QWORD *)(a1 + 1336);
      if ( *(_QWORD *)(a1 + 1352) < (unsigned __int64)(v18 + 1) )
      {
        v23 = qvector_reserve();
        *(_QWORD *)(a1 + 1336) = v23;
        v19 = v23;
        v18 = *(_QWORD *)(a1 + 1344);
      }
      v20 = (__m128i *)(32 * v18 + v19);
      v20->m128i_i32[0] = v31;
      v20->m128i_i64[1] = (__int64)v24;
      v20[1] = _mm_unpacklo_epi64((__m128i)0x18uLL, (__m128i)0x18uLL);
      v21 = *(_QWORD *)(a1 + 864);
      ++*(_QWORD *)(a1 + 1344);
      if ( *(_DWORD *)(v21 + 128) == 1 )
        sub_44610((_QWORD *)a1);
    }
    else
    {
      v16 = v15 == 5;
      v25 = 0;
      if ( v16 )
        v25 = 100001;
      v32 = v25;
      src = (__m128i *)qvector_reserve();
      *src = _mm_load_si128((const __m128i *)&xmmword_77510);
      src[1] = _mm_load_si128((const __m128i *)&xmmword_77520);
      *(__m128i *)((char *)src + 25) = _mm_load_si128((const __m128i *)&xmmword_77530);
      src[2].m128i_i8[9] = 0;
      v30 = (void *)qalloc_or_throw();
      memcpy(v30, src, 0x2Au);
      v26 = *(_QWORD *)(a1 + 1344);
      v27 = *(_QWORD *)(a1 + 1336);
      if ( *(_QWORD *)(a1 + 1352) < (unsigned __int64)(v26 + 1) )
      {
        v29 = qvector_reserve();
        *(_QWORD *)(a1 + 1336) = v29;
        v27 = v29;
        v26 = *(_QWORD *)(a1 + 1344);
      }
      v28 = (__m128i *)(32 * v26 + v27);
      v28->m128i_i32[0] = v32;
      v28->m128i_i64[1] = (__int64)v30;
      v28[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
      ++*(_QWORD *)(a1 + 1344);
    }
    v14 = 1;
  }
  if ( src )
    qfree();
  return v14;
}

