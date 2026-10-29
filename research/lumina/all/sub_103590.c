unsigned __int64 __fastcall sub_103590(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, __int64 a6, double a7)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 *v13[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v14; // [rsp+20h] [rbp-88h]
  _BYTE v15[6]; // [rsp+22h] [rbp-86h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp-20h]

  v13[0] = a2;
  v13[2] = &qword_60 + 4;
  v16 = __readfsqword(0x28u);
  v13[3] = nullptr;
  v13[1] = (__int64 *)v15;
  v14 = 1;
  sub_103310(a1, v13, a3, a4, a5, a6, a7);
  if ( !HIBYTE(v14) )
    sub_F4BA0((__int64)v13, (__int64)v13, v7, v8, v9, v10);
  v11 = *a2;
  *(_BYTE *)(v11 + 23) = 74;
  *(_WORD *)(v11 + 20) |= 0x800u;
  return __readfsqword(0x28u) ^ v16;
}
