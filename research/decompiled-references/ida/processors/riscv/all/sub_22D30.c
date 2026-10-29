__int64 __fastcall sub_22D30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 152);
  v11 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  if ( netnode_qgetblob(v4, &v9, 1, a3, 371) <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v8 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)(v9 + (unsigned __int64)v10));
    sub_22B00(a1, &v8, a3);
    v6 = 1;
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v6;
}

