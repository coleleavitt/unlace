__int64 __fastcall sub_22B880(__int64 a1, signed __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a1 + 848;
  v5 = *(_QWORD *)(v4 + 648);
  v8[3] = __readfsqword(0x28u);
  v8[0] = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & (a2 + *(_QWORD *)(v4 + 592));
  v8[1] = a3;
  result = sub_310AF0(v4, v8, 0);
  if ( (_BYTE)result )
    return sub_22B660(a1, a2, a3);
  return result;
}

