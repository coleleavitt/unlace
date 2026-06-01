__int64 __fastcall sub_93B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v7; // ebx
  __int64 v9[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v7 = a1;
  v12 = __readfsqword(0x28u);
  sub_127A20((__int64)v9, a1, a2, 1, a5, a6);
  LOBYTE(v7) = sub_A9D90(a1, v9, *(_QWORD *)(a2 + 8), a3, 1u) != 0;
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
  }
  qfree(v9[0]);
  return v7;
}

