unsigned __int64 __fastcall sub_3F0F00(__int64 *a1, int a2, int a3, double a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF
  __int128 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0[0] = 0;
  vars0[1] = 0;
  sub_63E80(vars0, a2, a3, a4);
  vars10 = 0;
  vars18 = 0;
  sub_64280(a1, vars0, 0.0);
  sub_316CB0(a1 + 2, (const void **)&vars10, v4, v5);
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree(vars10);
  }
  qfree(vars0[0]);
  return vars28 - __readfsqword(0x28u);
}

