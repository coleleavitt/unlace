unsigned __int64 __fastcall sub_CB710(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  _BYTE v4[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2 = sub_CB6C0(v4, a2);
  sub_C6FC0(a1, (__int64)v4, v2);
  return __readfsqword(0x28u) ^ v5;
}
