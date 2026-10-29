__int64 __fastcall sub_5A510(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int128 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  if ( netnode_qgetblob() <= 0 )
  {
    v4 = 0;
  }
  else
  {
    v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)(v7 + v8));
    v4 = sub_59F50(a1, (unsigned __int8 **)&v6, a3);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v4;
}
