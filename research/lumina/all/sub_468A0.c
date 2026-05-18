unsigned __int64 __fastcall sub_468A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  int v4; // r9d
  char *v5; // rcx
  unsigned __int64 v6; // rdx
  _BYTE v8[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = sub_199140(a1, a2);
  sub_1677A0(v8, 25, v2, 0);
  v5 = "";
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 >= 2 )
    v5 = "s";
  sub_16B870((unsigned int)"%s Using a license with %llu seat%s\n", (unsigned int)v8, v6, (_DWORD)v5, v3, v4);
  return v9 - __readfsqword(0x28u);
}
