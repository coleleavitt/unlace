__int64 __fastcall sub_33F90(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __m128i v5; // xmm0
  unsigned int v6; // ebx
  __int64 v8[2]; // [rsp+0h] [rbp-68h] BYREF
  void *v9; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  int v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v11 = a3;
  v8[1] = a2;
  v8[0] = (__int64)&off_2362D8;
  v9 = nullptr;
  v10 = 0;
  v9 = (void *)sub_1987B0(&v9, 0, 16, 1);
  memset((char *)v9 + v10, 0, 16 - v10);
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)&v10 = 16;
  *(__m128i *)v9 = v5;
  v6 = sub_33DC0(a1, v8, a4);
  if ( !v6 )
    v6 = sub_336D0(a1, v8, a4);
  v8[0] = (__int64)&off_2362D8;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    j__free(v9);
  }
  return v6;
}
