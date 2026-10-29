unsigned __int64 __fastcall sub_12480(__int64 a1, int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)base64_decode() )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = v3[1];
    v5 = *v3;
    if ( v3[2] < (unsigned __int64)(v4 + 1) )
    {
      v7 = qvector_reserve();
      *v3 = v7;
      v5 = v7;
      v4 = v3[1];
    }
    v6 = 32 * v4 + v5;
    *(_QWORD *)v6 = 0;
    *(_DWORD *)(v6 + 24) = a2;
    *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)0LL);
    ++v3[1];
  }
  return v9 - __readfsqword(0x28u);
}

