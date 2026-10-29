unsigned __int64 __fastcall sub_64D70(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8 = -1;
  v7 = a3;
  v3 = sub_1AE730(a3, (__int64)a2, (unsigned __int64)a1);
  sub_1B0020(a1, a2, (__int64 (__fastcall *)(__int64 *))sub_63DC0, (__int64)&v7);
  sub_1AF1F0((__int64)a2, v3, v4, v5);
  return v9 - __readfsqword(0x28u);
}

