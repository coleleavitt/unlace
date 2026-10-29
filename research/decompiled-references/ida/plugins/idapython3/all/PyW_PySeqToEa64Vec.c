__int64 __fastcall PyW_PySeqToEa64Vec(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  return pyvar_walk_seq(a2, (int)sub_7130, (int)a1, a3, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

