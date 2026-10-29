__int64 __fastcall sub_471B0(__int64 a1, void (***a2)())
{
  __int64 v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  _BYTE v10[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = sub_46F60(a1, a2);
  v3 = (__int64 (__fastcall *)(__int64, __int64))(*a2)[4];
  if ( v3 != sub_2CA40 )
    return v3((__int64)a2, v2);
  v4 = sub_199140(a1, a2);
  sub_1677A0(v10, 25, v4, 0);
  v7 = *(_QWORD *)(v2 + 24);
  v8 = "";
  if ( v7 >= 2 )
    v8 = "s";
  sub_16B870((unsigned int)"%s Using a license with %llu seat%s\n", (unsigned int)v10, v7, (_DWORD)v8, v5, v6);
  return v11 - __readfsqword(0x28u);
}
