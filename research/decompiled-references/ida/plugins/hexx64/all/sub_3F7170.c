__int64 __fastcall sub_3F7170(
        __int64 a1,
        __m128i a2,
        __m128 a3,
        __int64 a4,
        int a5,
        unsigned __int8 *a6,
        unsigned int a7,
        __m128 a8)
{
  unsigned __int8 v11; // al
  _QWORD v13[13]; // [rsp+0h] [rbp-68h] BYREF

  v13[5] = __readfsqword(0x28u);
  qstrncpy();
  qstrncat();
  v11 = sub_3EE260(a1 + 24);
  if ( v11 <= 1u )
    sub_1D6840(a1, v11, 2, a5, a5, 0, a2, a3, a8);
  return sub_3F50D0(a1, (__int64)v13, a5, a6, a7, *(double *)a2.m128i_i64, a3);
}

