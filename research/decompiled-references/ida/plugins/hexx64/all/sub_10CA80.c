__int64 __fastcall sub_10CA80(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // r14
  __m128i *v5; // rdi
  __int64 v6; // rax
  __m128i *v7; // rdi
  const __m128i *v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  char v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( *((_BYTE *)a2 + 8) != 5 )
    sub_101D30(a3);
  v5 = *(__m128i **)(a1 + 8);
  v10 = *a2;
  v3 = v10;
  v11 = 5;
  v9 = (const __m128i *)&v10;
  sub_10BAA0(v5, (__int64)&v10, &v9);
  v6 = *((int *)a2 + 3);
  v7 = *(__m128i **)(a1 + 8);
  v11 = 5;
  v9 = (const __m128i *)&v10;
  v10 = v3 + v6;
  sub_10BAA0(v7, (__int64)&v10, &v9);
  return 0;
}

