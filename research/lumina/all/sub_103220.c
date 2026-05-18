unsigned __int64 __fastcall sub_103220(__int64 *a1, int a2, __int64 a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  __int16 vars20; // [rsp+20h] [rbp+20h]
  char vars22; // [rsp+22h] [rbp+22h] BYREF
  unsigned __int64 vars88; // [rsp+88h] [rbp+88h]

  vars0[0] = a1;
  vars0[2] = &qword_60 + 4;
  vars88 = __readfsqword(0x28u);
  vars0[3] = nullptr;
  vars0[1] = (__int64 *)&vars22;
  vars20 = 1;
  sub_102750(vars0, 91);
  if ( a2 > 0 )
  {
    v5 = a3 + 8LL * (unsigned int)(a2 - 1) + 8;
    do
    {
      a3 += 8;
      sub_1029E0(vars0);
      sub_102C90(vars0, *(_QWORD *)(a3 - 8), a4, v6, v7, v8, v9);
    }
    while ( a3 != v5 );
  }
  sub_102750(vars0, 93);
  if ( !HIBYTE(vars20) )
    sub_F4BA0((__int64)vars0, 93, v10, v11, v12, v13);
  v14 = *a1;
  *(_BYTE *)(v14 + 23) = 74;
  *(_WORD *)(v14 + 20) |= 0x800u;
  return __readfsqword(0x28u) ^ vars88;
}
