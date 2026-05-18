unsigned __int64 __fastcall sub_102F80(__int64 *a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v14[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v15; // [rsp+20h] [rbp-88h]
  _BYTE v16[6]; // [rsp+22h] [rbp-86h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp-20h]

  v7 = *a4;
  v14[0] = a1;
  v14[2] = &qword_60 + 4;
  v17 = __readfsqword(0x28u);
  v14[3] = nullptr;
  v14[1] = (__int64 *)v16;
  v15 = 1;
  sub_102C90(v14, v7, a2, (__int64)a4, a5, a6, a7);
  if ( !HIBYTE(v15) )
    sub_F4BA0((__int64)v14, v7, v8, v9, v10, v11);
  v12 = *a1;
  *(_BYTE *)(v12 + 23) = 74;
  *(_WORD *)(v12 + 20) |= 0x800u;
  return __readfsqword(0x28u) ^ v17;
}
