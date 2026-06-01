unsigned __int64 __fastcall sub_C020(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 *v3; // rbx
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __m128i v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h]
  int v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int128 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8);
  v13 = __readfsqword(0x28u);
  v3 = *(unsigned __int64 **)a2;
  v4 = *(_QWORD *)a2 + 16 * v2;
  if ( v4 != *(_QWORD *)a2 )
  {
    do
    {
      v5 = *v3;
      v6 = v3[1] - *v3;
      if ( v6 >= *(unsigned int *)(a1 + 120) )
      {
        v11 = 0;
        v12 = 0;
        v9 = 4;
        v10 = -1;
        v8 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
        if ( v6 )
          sub_6130(a1, (__int64)&v8);
      }
      v3 += 2;
    }
    while ( (unsigned __int64 *)v4 != v3 );
  }
  return v13 - __readfsqword(0x28u);
}
