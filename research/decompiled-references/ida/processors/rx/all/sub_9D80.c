__int64 __fastcall sub_9D80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        __m128 a8)
{
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int128 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-18h]
  unsigned __int64 v17; // [rsp+58h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  v10[0] = a1;
  v10[1] = a2;
  v11 = 0;
  v13 = 0;
  v16 = -1;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v8 = sub_98C0((__int64)v10, 0.0, a7, a8, (unsigned __int8)a3, a3, a4, a5);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v8;
}

