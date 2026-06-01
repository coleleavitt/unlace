__int64 __fastcall sub_15510(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  const void *v6; // rbx
  void *v7; // rdi
  size_t v8; // rbp
  __int64 v9; // r13
  __int64 *v10; // rbx
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h]
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  result = 1;
  if ( *a2 == 15 )
  {
    v6 = (const void *)(a3 + (unsigned int)a2[2]);
    if ( (unsigned __int64)v6 < a4 )
    {
      v7 = nullptr;
      v15 = 0;
      v8 = a4 - (_QWORD)v6;
      v16 = 0;
      v9 = a4 - (_QWORD)v6 + 1;
      if ( a4 - (_QWORD)v6 != -1 )
      {
        v15 = qvector_reserve();
        v7 = (void *)v15;
      }
      v16.m128i_i64[0] = v9;
      memmove(v7, v6, v8);
      *(_BYTE *)(v15 + v8) = 0;
      v10 = *(__int64 **)(a1 + 8);
      v11 = v15;
      v12 = _mm_loadu_si128(&v16);
      v16 = 0;
      v15 = 0;
      if ( *v10 )
      {
        v10[1] = 0;
        v14 = v12;
        qfree();
        v12 = _mm_load_si128(&v14);
      }
      *v10 = v11;
      v13 = v15;
      *(__m128i *)(v10 + 1) = v12;
      if ( v13 )
      {
        v16.m128i_i64[0] = 0;
        qfree();
      }
    }
    *(_BYTE *)(a1 + 16) = 1;
    return 0;
  }
  return result;
}

