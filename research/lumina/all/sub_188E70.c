__int64 __fastcall sub_188E70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  size_t v5; // r13
  void *v6; // r12
  __int16 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rdi
  __int64 v12; // rdi
  void *v14; // rdi
  __m128i si128; // xmm2
  char v16; // al
  __m128i v17; // xmm0
  __m128i v18[3]; // [rsp+0h] [rbp-88h] BYREF
  char v19; // [rsp+38h] [rbp-50h]
  __m128i v20; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 160);
  v21 = __readfsqword(0x28u);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 152);
    v4 = v3 + (v1 << 6) - 64;
    v5 = *(_QWORD *)(v4 + 8);
    v18[0] = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    if ( v5 )
    {
      v6 = (void *)sub_198760(v5);
      memcpy(v6, *(const void **)v4, v5);
      v1 = *(_QWORD *)(a1 + 160);
      v7 = *(_WORD *)(v4 + 24);
      v19 = *(_BYTE *)(v4 + 40);
      v8 = *(_QWORD *)(v4 + 32);
      v20 = _mm_loadu_si128((const __m128i *)(v4 + 48));
      if ( !v1 )
      {
LABEL_10:
        v14 = *(void **)(a1 + 40);
        if ( v14 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          j__free(v14);
        }
        si128 = _mm_load_si128(v18);
        v16 = v19;
        *(_QWORD *)(a1 + 40) = v6;
        v17 = _mm_load_si128(&v20);
        *(_WORD *)(a1 + 64) = v7;
        *(_QWORD *)(a1 + 72) = v8;
        *(_BYTE *)(a1 + 80) = v16;
        *(__m128i *)(a1 + 48) = si128;
        *(__m128i *)(a1 + 88) = v17;
        return 0;
      }
      v3 = *(_QWORD *)(a1 + 152);
    }
    else
    {
      v6 = nullptr;
      v7 = *(_WORD *)(v4 + 24);
      v8 = *(_QWORD *)(v4 + 32);
      v19 = *(_BYTE *)(v4 + 40);
      v20 = _mm_loadu_si128((const __m128i *)(v4 + 48));
    }
    v9 = v1 - 1;
    *(_QWORD *)(a1 + 160) = v9;
    v10 = (v9 << 6) + v3;
    v11 = *(void **)v10;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      j__free(v11);
    }
    goto LABEL_10;
  }
  v12 = *(_QWORD *)(a1 + 104);
  if ( !(unsigned int)sub_184A80(v12) )
    return 0;
  return sub_18FA20(v12, a1 + 40);
}
