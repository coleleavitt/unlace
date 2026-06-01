__int64 __fastcall sub_111C0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        _QWORD *a5,
        __int64 *a6,
        char a7,
        bool *a8)
{
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v14; // rdx
  char v15; // al
  __m128i si128; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int128 v18; // [rsp+18h] [rbp-50h]
  __int16 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  v17 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
  v10 = sub_11140(a1, a2, a3, a4, &si128);
  v11 = v17;
  v12 = v10;
  if ( (_BYTE)v10 )
  {
    v14 = si128.m128i_i64[1];
    v15 = HIBYTE(v19);
    if ( a5 )
      *a5 = si128.m128i_i64[0];
    if ( a6 )
      *a6 = v14;
    if ( a8 )
      *a8 = (v15 & 4) != 0;
  }
  if ( v11 )
    qfree(v11);
  return v12;
}

