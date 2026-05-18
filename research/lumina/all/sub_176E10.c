unsigned __int64 __fastcall sub_176E10(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 v6; // rdi
  unsigned __int8 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 24);
  vars28 = __readfsqword(0x28u);
  vars0 = 2;
  vars8 = 0;
  vars18 = 0;
  sub_176730(&vars0, (unsigned __int8 *)(v2 + 32 * v1 - 32));
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v6 = v4 - 1;
    *(_QWORD *)(a1 + 32) = v6;
    sub_176520(*(_QWORD *)(a1 + 24) + 32 * v6);
  }
  sub_176520((__int64)&vars0);
  return vars28 - __readfsqword(0x28u);
}
