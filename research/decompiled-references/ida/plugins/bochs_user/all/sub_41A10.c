__int64 sub_41A10()
{
  __int64 v0; // rbx
  const char *v1; // rsi
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  v0 = *(_QWORD *)(qword_753F8 + 4832);
  sub_27380(v0, (__int64)v3);
  v1 = "rax";
  if ( !*(_BYTE *)(qword_753F8 + 121) )
    v1 = "eax";
  sub_25E30(v0, v1, v3[0]);
  return 0;
}

