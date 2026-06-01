unsigned __int64 __fastcall sub_63BE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  bool v4; // cf
  _DWORD *v5; // rdi
  _QWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v8; // [rsp+10h] [rbp-38h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7[0] = a2;
  v7[1] = 0;
  v8 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4AF630), (__m128i)(unsigned __int64)sub_60B00);
  sub_63910((int **)a1, (__int64)v7);
  if ( v8.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v8.m128i_i64[0])(v7, v7, 3);
  v3 = *(_QWORD *)(a1 + 8) - 1LL;
  if ( v3 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v5 = (_DWORD *)(*(_QWORD *)a1 + 16 * v3);
        if ( v5[1] == *v5 )
          break;
        v4 = v3-- == 0;
        if ( v4 )
          return v9 - __readfsqword(0x28u);
      }
      memmove(v5, v5 + 4, 16 * (*(_QWORD *)(a1 + 8) - v3) - 16);
      --*(_QWORD *)(a1 + 8);
      v4 = v3-- == 0;
    }
    while ( !v4 );
  }
  return v9 - __readfsqword(0x28u);
}

