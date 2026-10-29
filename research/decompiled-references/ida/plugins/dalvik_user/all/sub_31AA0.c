__int64 __fastcall sub_31AA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  size_t v4; // r13
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 result; // rax
  void *v8; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = operator new(0x38u);
  *(_QWORD *)v3 = &off_7D510;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 16) = 0;
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 )
  {
    v8 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 8) = v8;
    *(_QWORD *)(v3 + 24) = v4;
    memcpy(v8, *(const void **)(v2 + 8), v4);
    *(_QWORD *)(v3 + 16) = v4;
  }
  v5 = *(_QWORD *)(v2 + 48);
  v6 = _mm_loadu_si128((const __m128i *)(v2 + 32));
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(v3 + 48) = v5;
  result = (unsigned int)dword_7FC30;
  *(__m128i *)(v3 + 32) = v6;
  *(_DWORD *)a1 = result;
  return result;
}

