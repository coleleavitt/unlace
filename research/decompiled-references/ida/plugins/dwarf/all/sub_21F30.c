__int64 __fastcall sub_21F30(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD v11[5]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  memset(v11, 0, 28);
  if ( !(unsigned __int8)sub_90150(a3, &v11[1]) )
    return 0;
  v8 = sub_82460(a3);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 24);
  v11[0] = *(_QWORD *)(v8 + 4);
  if ( (unsigned int)sub_21580(
                       v10,
                       (__int64)v11,
                       (__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64))sub_13490,
                       v9) )
    return 0;
  **(_QWORD **)(a1 + 8) = a2;
  sub_1D740((__int64)"found matching subfile: loadaddr=%a declared_loadaddr=%a\n", 0.0, a5);
  return 1;
}

