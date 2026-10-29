unsigned __int64 __fastcall sub_414640(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11[2]; // [rsp+0h] [rbp-48h] BYREF
  const void *v12[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( *a2 != 61 )
  {
    sub_127A20((__int64)v11, a1[23], (__int64)a2, 1, a5, a6, a7, a8);
    sub_64280(a1 + 3, v11, a7);
    sub_316CB0(a1 + 5, v12, v9, v10);
    if ( v12[0] )
    {
      v12[1] = nullptr;
      qfree((__int64)v12[0]);
    }
    qfree(v11[0]);
  }
  return v13 - __readfsqword(0x28u);
}

