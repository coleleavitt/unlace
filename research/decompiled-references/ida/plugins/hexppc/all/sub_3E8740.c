unsigned __int64 __fastcall sub_3E8740(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF
  __int128 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  v3 = *(_DWORD *)(a1 + 472);
  vars28 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  sub_60440(&vars0, v3, 32);
  vars10 = 0;
  vars18 = 0;
  sub_60C00(a3, &vars0, v5, v6, v7, v8);
  sub_313AE0(a3 + 2, (__int64)&vars10);
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree();
  }
  qfree();
  v9 = *(_DWORD *)(a1 + 480);
  vars0 = 0;
  vars8 = 0;
  sub_60440(&vars0, v9, 4);
  vars10 = 0;
  vars18 = 0;
  sub_60C00(a3, &vars0, v10, v11, v12, v13);
  sub_313AE0(a3 + 2, (__int64)&vars10);
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree();
  }
  qfree();
  return vars28 - __readfsqword(0x28u);
}

