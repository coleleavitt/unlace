__int64 __fastcall sub_18E70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __m128i *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 120);
  v14 = __readfsqword(0x28u);
  v6 = (__m128i *)&v12;
  v12 = 0;
  v13 = 0;
  if ( netnode_qgetblob(v4, &v12, 1, a3, 371) <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v6 = &v11;
    v11 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)(v12 + (unsigned __int64)v13));
    sub_18C40(a1, &v11, a3);
    v9 = 1;
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v6, v7, v8);
  }
  return v9;
}
