__int64 __fastcall sub_A9F90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 *v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  __int64 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a2 && (v4 = a2, sub_122240(a3, *(_QWORD *)(a2 + 8), 0)) )
  {
    sub_127A20((__int64)v8, a1, a2, 1, v5, v6);
    LOBYTE(v4) = sub_A9D90(a1, v8, *(_QWORD *)(a2 + 8), a3, 1u) == 0;
    if ( v9 )
    {
      v10 = 0;
      qfree(v9);
    }
    qfree((__int64)v8[0]);
  }
  else
  {
    return 1;
  }
  return v4;
}

