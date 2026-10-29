unsigned __int64 __fastcall sub_3ED6B0(__int64 a1, __int64 *a2)
{
  int v2; // edx
  int v4; // esi
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 *vars10; // [rsp+10h] [rbp+10h] BYREF
  __int128 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  v2 = *(_DWORD *)(a1 + 80);
  vars28 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 656);
  vars0[0] = 0;
  vars0[1] = 0;
  sub_63880(vars0, v4, v2);
  vars10 = nullptr;
  vars18 = 0;
  sub_63C80(a2, vars0);
  sub_317070(a2 + 2, &vars10);
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree();
  }
  qfree();
  return vars28 - __readfsqword(0x28u);
}

