void __fastcall sub_1B450(__int64 a1)
{
  __m128i v1; // xmm3
  __m128i v2; // xmm2
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  void *v6; // rdi
  void **v7; // rbx
  unsigned __int64 v8; // r12
  void *v9; // rdi
  _OWORD v10[2]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v1 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v12 = __readfsqword(0x28u);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v10[0] = v1;
  v10[1] = v2;
  v11[0] = v4;
  v11[1] = v5;
  sub_12E50((__int64 *)v11, (__int64 *)v10);
  v6 = *(void **)a1;
  if ( v6 )
  {
    v7 = *(void ***)(a1 + 40);
    v8 = *(_QWORD *)(a1 + 72) + 8LL;
    if ( (unsigned __int64)v7 < v8 )
    {
      do
      {
        v9 = *v7++;
        operator delete(v9, 0x1F8u);
      }
      while ( (unsigned __int64)v7 < v8 );
      v6 = *(void **)a1;
    }
    operator delete(v6, 8LL * *(_QWORD *)(a1 + 8));
  }
}

