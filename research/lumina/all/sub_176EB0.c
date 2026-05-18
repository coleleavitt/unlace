unsigned __int64 __fastcall sub_176EB0(__int64 *a1, unsigned __int8 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rax
  unsigned __int8 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = 2;
  vars18 = 0;
  vars8 = 0;
  sub_176730(&vars0, a2);
  v3 = a1[1];
  v4 = *a1;
  if ( a1[2] < (unsigned __int64)(v3 + 1) )
  {
    v7 = sub_1987B0(a1, v4, v3 + 1, 32);
    *a1 = v7;
    v4 = v7;
    v3 = a1[1];
  }
  v5 = v4 + 32 * v3;
  *(_BYTE *)v5 = 2;
  *(_QWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 8) = 0;
  sub_176730((unsigned __int8 *)v5, &vars0);
  ++a1[1];
  sub_176520((__int64)&vars0);
  return vars28 - __readfsqword(0x28u);
}
