__int64 __fastcall sub_1E1180(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = a2;
  v3 = a1 + 32;
  v4 = *(_QWORD *)(a1 + 24);
  v7 = 1;
  return (unsigned __int8)sub_1E0D10(v4, v3, &v6, a3) ^ 1u;
}

