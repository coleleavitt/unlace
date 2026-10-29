__int64 __fastcall sub_400C0(__int64 a1, unsigned __int16 a2, int a3, _WORD *a4)
{
  __int64 v4; // rdi
  unsigned int v6; // r9d
  char *v8[3]; // [rsp+8h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v8[1] = (char *)__readfsqword(0x28u);
  v6 = sub_3FE20(v4, a2, a3, nullptr, nullptr, (__int64)v8, nullptr, nullptr, nullptr);
  if ( (_BYTE)v6 )
    sub_40040(nullptr, nullptr, v8[0], a4);
  return v6;
}

