__int64 __fastcall sub_21DD0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __m128i v11; // [rsp+10h] [rbp-68h] BYREF
  int v12; // [rsp+28h] [rbp-50h]
  __m128i v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[28]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v10.m128i_i64[0] = __PAIR64__(a3, a2);
  qstrncpy();
  if ( v10.m128i_i64[1] == 0x73676E6972745323LL )
  {
    v3 = 1;
    if ( !v11.m128i_i8[0] )
      goto LABEL_8;
  }
  v3 = 2;
  switch ( v10.m128i_i32[2] )
  {
    case 0x535523:
      goto LABEL_8;
    case 0x6F6C4223:
      v3 = 3;
      if ( v10.m128i_i16[6] == 98 )
        goto LABEL_8;
      break;
    case 0x49554723:
      v3 = 4;
      if ( v10.m128i_i16[6] == 68 )
        goto LABEL_8;
      break;
  }
  if ( (v10.m128i_i16[4] != 32291 || v10.m128i_i8[10]) && (v10.m128i_i16[4] != 11555 || v10.m128i_i8[10]) )
    v3 = 0;
  else
    v3 = 5;
LABEL_8:
  v4 = _mm_load_si128(&v10);
  v5 = a1[3];
  v12 = v3;
  v6 = a1[2];
  v13 = v4;
  *(__m128i *)v14 = _mm_load_si128(&v11);
  *(__m128i *)&v14[12] = _mm_loadu_si128((const __m128i *)((char *)&v11.m128i_u64[1] + 4));
  if ( a1[4] < (unsigned __int64)(v5 + 1) )
  {
    v9 = qvector_reserve();
    v5 = a1[3];
    a1[2] = v9;
    v6 = v9;
  }
  v7 = v6 + 44 * v5;
  *(__m128i *)v7 = _mm_load_si128(&v13);
  *(__m128i *)(v7 + 16) = _mm_load_si128((const __m128i *)v14);
  *(__m128i *)(v7 + 28) = _mm_loadu_si128((const __m128i *)&v14[12]);
  result = a1[3];
  a1[3] = result + 1;
  return result;
}
