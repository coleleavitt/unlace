__int64 __fastcall sub_3A3790(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        double a6,
        double a7,
        __m128i a8,
        double a9)
{
  bool v11; // zf
  __int64 *v13; // rax
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  int v16; // [rsp+8h] [rbp-60h]
  _BYTE v17[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v11 = *(_QWORD *)(a1 + 32) == 0;
  v18 = __readfsqword(0x28u);
  if ( !v11 && !get_func() )
    return 0;
  v16 = 5;
  LODWORD(v15) = a4 - 1;
  HIDWORD(v15) = a5 - 1;
  sub_390A30((__int64)v17, a1 + 32, &v15);
  v13 = sub_395890((__int64)v17, 56, 0, 0, a6, a7, a8, a9);
  if ( !v13 )
    return 0;
  *a2 = v13[4] + 128;
  *a3 = v13[1];
  return v13[2];
}

