__int64 __fastcall sub_23460(unsigned int *a1, __int64 *a2, __int64 *a3)
{
  unsigned int v4; // eax
  int v5; // r8d
  unsigned int v6; // ebx
  size_t v8; // rbx
  void *v9; // rcx
  int v10; // r8d
  const __m128i *v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r13
  __m128i *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // [rsp+0h] [rbp-88h]
  size_t v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-50h]
  __int128 v26; // [rsp+40h] [rbp-48h]
  unsigned __int64 v27; // [rsp+50h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  v22 = 0;
  v23 = 0x8000000000000000LL;
  v4 = sub_21C60(a1, &v23, &v22, nullptr, nullptr, nullptr, a3);
  if ( !(_BYTE)v4 )
    return 0;
  v6 = v4;
  if ( v23 )
  {
    if ( v23 != 0x8000000000000005LL )
    {
      sub_1F390(v23);
      sub_15ED0(a3);
      return 0;
    }
    v8 = v22;
    sub_70460((_DWORD)a1, (unsigned int)"MapSize: 0x%llX\n", v22, 5, v5);
    v25 = 0;
    v9 = nullptr;
    v26 = 0;
    if ( v8 )
    {
      v25 = qvector_reserve();
      memset((void *)(v25 + v26), 0, v8 - v26);
      *(_QWORD *)&v26 = v8;
      v9 = (void *)v25;
    }
    v24 = 0;
    v6 = sub_21C60(a1, &v23, &v22, v9, nullptr, &v24, a3);
    if ( !(_BYTE)v6 )
      goto LABEL_10;
    v12 = v24;
    sub_70460((_DWORD)a1, (unsigned int)"DescriptorSize: 0x%llX\n", v24, v20, v10);
    if ( v23 )
    {
      sub_1F390(v23);
      sub_15ED0(a3);
    }
    else
    {
      if ( v12 > 0x27 && !(v22 % v12) )
      {
        v11 = (const __m128i *)v25;
        v13 = v25 + v22;
        if ( v25 < v25 + v22 )
        {
          do
          {
            v16 = a2[1];
            v17 = *a2;
            v18 = v16 + 1;
            if ( a2[2] < (unsigned __int64)(v16 + 1) )
            {
              v19 = qvector_reserve();
              v16 = a2[1];
              *a2 = v19;
              v17 = v19;
              v18 = v16 + 1;
            }
            a2[1] = v18;
            v14 = (__m128i *)(v17 + 40 * v16);
            *v14 = _mm_loadu_si128(v11);
            v14[1] = _mm_loadu_si128(v11 + 1);
            v15 = v11[2].m128i_i64[0];
            v11 = (const __m128i *)((char *)v11 + v12);
            v14[2].m128i_i64[0] = v15;
          }
          while ( (unsigned __int64)v11 < v13 );
LABEL_10:
          v11 = (const __m128i *)v25;
        }
LABEL_11:
        if ( v11 )
        {
          *(_QWORD *)&v26 = 0;
          qfree();
        }
        return v6;
      }
      sub_15ED0(a3);
    }
    v11 = (const __m128i *)v25;
    v6 = 0;
    goto LABEL_11;
  }
  return v6;
}

