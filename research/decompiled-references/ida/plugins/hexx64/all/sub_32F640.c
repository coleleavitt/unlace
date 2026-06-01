__int64 __fastcall sub_32F640(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // di
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v5 = *(_BYTE *)(a2 + 8);
  if ( v5 == 1 )
  {
    v7 = *(_DWORD *)a2;
    v10[0] = 0;
    v10[1] = 0;
    sub_63E80(v10, v7, a4, 0.0);
    v11 = 0;
    v12 = 0;
    sub_64280((__int64 *)a1, v10, 0.0);
    sub_316CB0((__int64 *)(a1 + 16), (const void **)&v11, v8, v9);
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    qfree(v10[0]);
  }
  else
  {
    if ( v5 != 5 )
      sub_328990(0.0);
    sub_122B20((__int64 *)a1, *(_QWORD *)(a3 + 1440) + *(_QWORD *)a2, a4);
  }
  return a1;
}

