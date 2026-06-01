__int64 __fastcall sub_50480(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 *v4; // rdi
  unsigned int v5; // ebx
  size_t *v6; // rsi
  __int64 v7; // rdi
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v4 = *(__int64 **)(a1 + 16);
  v12 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v5 = sub_4F650(v4, a3, a2, (__int64)&v10);
  if ( (_BYTE)v5 )
  {
    v6 = *(size_t **)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 24);
    v9 = (__m128i)0x8000000000000000LL;
    sub_2FD40(v7, (__int64)(v6 + 3), *v6, nullptr, "rtype", &v9, &v10, 0, 0, 0);
  }
  return v5;
}
