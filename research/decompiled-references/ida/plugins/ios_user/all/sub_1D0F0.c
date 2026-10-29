__int64 __fastcall sub_1D0F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  size_t v5; // r12
  void *v6; // r14
  __m128i v7; // xmm0
  __m128i v8; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+10h] [rbp-98h] BYREF
  __int64 v10; // [rsp+20h] [rbp-88h]
  __int128 v11; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+38h] [rbp-70h]
  size_t n[2]; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+58h] [rbp-50h]
  __int128 v16; // [rsp+60h] [rbp-48h]
  int v17; // [rsp+70h] [rbp-38h]
  unsigned __int64 v18; // [rsp+78h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v11 = 0;
  *(_OWORD *)n = 0;
  v16 = 0;
  v10 = 0;
  src = nullptr;
  v15 = 0;
  v14 = 0;
  v17 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_773F0);
  v3 = sub_438C0(a1, &si128, a3);
  if ( (_BYTE)v3 )
  {
    v5 = n[0];
    v6 = nullptr;
    if ( n[0] )
    {
      v6 = (void *)qalloc_or_throw();
      memcpy(v6, src, v5);
    }
    v7 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    if ( *a2 )
    {
      a2[1] = 0;
      v8 = v7;
      qfree();
      v7 = _mm_load_si128(&v8);
    }
    *a2 = v6;
    *(__m128i *)(a2 + 1) = v7;
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v3;
}

