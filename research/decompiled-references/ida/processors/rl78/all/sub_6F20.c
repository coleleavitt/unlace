__int64 __fastcall sub_6F20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int128 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  char v17; // [rsp+48h] [rbp-20h]
  unsigned __int64 v18; // [rsp+58h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  v11[0] = a1;
  v11[1] = a2;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v13 = 0;
  v15 = 0;
  v9 = sub_6B40((__int64)v11, 0.0, a8, a9, (unsigned __int8)a3, a3, a4, a5, a6);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v9;
}

