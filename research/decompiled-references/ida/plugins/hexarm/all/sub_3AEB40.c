unsigned __int64 __fastcall sub_3AEB40(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  size_t v9; // r14
  const void *v10; // r15
  __int64 v11; // r13
  size_t v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r12
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __int64 v18; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __m128i si128; // xmm0
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-78h] BYREF
  size_t v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  __m128i v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v5 = *a2;
  if ( a5 != *(_QWORD *)(a1 + 224) )
  {
    v7 = *(_QWORD *)(a1 + 216) + 48 * a5;
    if ( !*(_BYTE *)(v7 + 40) )
    {
      sub_6B2B0(*a2);
      v5 = *a2;
    }
    v8 = *(int *)(v7 + 36);
    v9 = 0;
    v10 = &unk_412793;
    if ( (unsigned int)v8 <= 3 )
    {
      v10 = *(&off_4E1C00 + v8);
      if ( !v10 )
      {
LABEL_10:
        v27 = 0;
        v26 = 0;
        get_ea_name();
        v15 = *a2;
        v26 = 0;
        v16 = _mm_loadu_si128(&v27);
        v27 = 0;
        if ( v15[6] )
        {
          v15[7] = 0;
          v24 = v16;
          qfree();
          v17 = _mm_load_si128(&v24);
          v18 = v26;
          v15[6] = 0;
          *(__m128i *)(v15 + 7) = v17;
          if ( v18 )
          {
            v27.m128i_i64[0] = 0;
            qfree();
          }
        }
        else
        {
          v15[6] = 0;
          *(__m128i *)(v15 + 7) = v16;
        }
        sub_6B2B0(*a2 + 9);
        sub_6B2B0(*a2 + 12);
        return sub_3AA2B0(*a2 + 15, *(_QWORD *)v7, *(_DWORD *)(v7 + 24));
      }
      v9 = strlen((const char *)*(&off_4E1C00 + v8));
    }
    v11 = v5[4];
    v12 = v9;
    if ( v11 )
      v12 = --v11 + v9;
    v13 = v5[3];
    v14 = v12 + 1;
    if ( v5[5] < v12 + 1 )
    {
      v25 = v12;
      v24.m128i_i64[0] = v12 + 1;
      v20 = qvector_reserve();
      v12 = v25;
      v14 = v24.m128i_i64[0];
      v5[3] = v20;
      v13 = v20;
    }
    v5[4] = v14;
    *(_BYTE *)(v13 + v12) = 0;
    memmove((void *)(v11 + v5[3]), v10, v9);
    goto LABEL_10;
  }
  v21 = v5[15];
  if ( (unsigned __int64)v5[17] <= 0x3E )
  {
    v23 = qvector_reserve();
    v5[15] = v23;
    v21 = v23;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_41FB60);
  v5[16] = 63;
  *(__m128i *)v21 = si128;
  *(__m128i *)(v21 + 16) = _mm_load_si128((const __m128i *)&xmmword_41FB70);
  *(__m128i *)(v21 + 32) = _mm_load_si128((const __m128i *)&xmmword_41FB80);
  *(__m128i *)(v21 + 46) = _mm_load_si128((const __m128i *)&xmmword_41FB90);
  *(_BYTE *)(v5[15] + 62) = 0;
  return v28 - __readfsqword(0x28u);
}

