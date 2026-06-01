__int64 __fastcall sub_3C63D0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        char a5,
        double a6,
        __m128 a7)
{
  unsigned int v9; // ebx
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v11 = 0;
  v13 = 0;
  v12 = 0;
  v9 = sub_3C5980((__int64)&v11, a4, a5, 0.0, a7);
  if ( (_BYTE)v9 && ((unsigned __int64)v12 <= 1 || (unsigned __int8)sub_3C5800(a1, (__int64)&v11, a3, a5)) )
    sub_3C5FA0(a1, a2, a3, (__int64)&v11);
  else
    v9 = 0;
  clear_tinfo_t();
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v9;
}

