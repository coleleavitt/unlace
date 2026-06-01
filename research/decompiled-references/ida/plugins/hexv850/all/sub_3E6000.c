unsigned __int64 __fastcall sub_3E6000(__int64 *a1, int a2, int a3)
{
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 *vars10; // [rsp+10h] [rbp+10h] BYREF
  __int128 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0[0] = 0;
  vars0[1] = 0;
  sub_5F400(vars0, a2, a3);
  vars10 = nullptr;
  vars18 = 0;
  sub_5F800(a1, vars0);
  sub_3113F0(a1 + 2, &vars10);
  if ( vars10 )
  {
    *(_QWORD *)&vars18 = 0;
    qfree();
  }
  qfree();
  return vars28 - __readfsqword(0x28u);
}

