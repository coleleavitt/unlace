__int64 __fastcall sub_1EBD30(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 1440) + a2;
  v4 = a1 + 232;
  v7[3] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v4 + 1264);
  v7[1] = a3;
  v7[0] = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & v3;
  return sub_313CF0(v4, v7, 0);
}

