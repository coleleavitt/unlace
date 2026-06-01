void __fastcall sub_5E7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // esi
  __int64 v8; // rax
  __int64 v10; // r10
  __int16 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r12
  int v16; // eax
  __int64 dtype_size; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rax
  __m128i v22; // xmm1
  __int32 v23; // ebx
  __m128i si128; // xmm0
  __m128i *v25; // rsi
  __int64 v26; // rax
  __m128i v27[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( a4 < 0 && *(_QWORD *)(a1 + 128) <= a4 )
  {
    v7 = *(unsigned __int16 *)(a3 + 6);
    v8 = *(_QWORD *)(a1 + 176);
    v10 = a1 + 168;
    v11 = *(_WORD *)(a3 + 6);
    if ( !v8 )
      goto LABEL_33;
    v12 = a1 + 168;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v8 + 16);
        v14 = *(_QWORD *)(v8 + 24);
        if ( v7 <= *(_DWORD *)(v8 + 32) )
          break;
        v8 = *(_QWORD *)(v8 + 24);
        if ( !v14 )
          goto LABEL_8;
      }
      v12 = v8;
      v8 = *(_QWORD *)(v8 + 16);
    }
    while ( v13 );
LABEL_8:
    if ( v10 == v12 || v7 < *(_DWORD *)(v12 + 32) )
    {
LABEL_33:
      if ( v7 < *(_DWORD *)(a1 + 272) || (v15 = (__int64 *)(a1 + 248), v7 > *(_DWORD *)(a1 + 276)) )
      {
        if ( v7 >= *(_DWORD *)(a1 + 232) && v7 <= *(_DWORD *)(a1 + 236) )
        {
          v15 = (__int64 *)(a1 + 208);
        }
        else
        {
          if ( (unsigned int)(v7 - 4) > 7
            && (unsigned __int16)(v11 - 148) > 0xBu
            && (unsigned int)(v7 - 109) > 0xF
            && (unsigned int)(v7 - 69) > 7
            && (unsigned int)(v7 - 49) > 3
            && (unsigned int)(v7 - 171) > 7 )
          {
            return;
          }
          v15 = (__int64 *)(a1 + 16);
        }
      }
      v16 = *(_DWORD *)(a3 + 4);
      LOBYTE(v16) = 0;
      if ( v16 == 10356480 && !*(_QWORD *)(a1 + 136) )
        *(_QWORD *)(a1 + 136) = a4;
      v27[0].m128i_i64[0] = *(_QWORD *)(a2 + 16);
      dtype_size = get_dtype_size();
      v18 = *v15;
      v19 = -a4 - dtype_size;
      v20 = dtype_size;
      v21 = v15[1];
      v22 = (__m128i)(unsigned __int64)v19;
      v23 = *(unsigned __int16 *)(a3 + 6);
      si128 = _mm_unpacklo_epi64(_mm_loadl_epi64(v27), v22);
      if ( v15[2] < (unsigned __int64)(v21 + 1) )
      {
        v27[0] = si128;
        v26 = qvector_reserve((__int64)v15, v18, v21 + 1, 32);
        si128 = _mm_load_si128(v27);
        *v15 = v26;
        v18 = v26;
        v21 = v15[1];
      }
      v25 = (__m128i *)(32 * v21 + v18);
      v25[1].m128i_i64[0] = v20;
      v25[1].m128i_i32[2] = v23;
      *v25 = si128;
      ++v15[1];
    }
  }
}
