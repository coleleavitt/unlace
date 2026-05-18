__int64 *__fastcall sub_1058D0(_BYTE *a1, __int64 a2, double a3)
{
  _QWORD v4[3]; // [rsp+0h] [rbp-88h] BYREF
  int v5; // [rsp+18h] [rbp-70h]
  __int16 v6; // [rsp+1Ch] [rbp-6Ch]
  char v7; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v8; // [rsp+68h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (unsigned int)sub_FEBD0((__int64)a1, a2) )
    return nullptr;
  v4[0] = 0;
  v4[1] = &v7;
  v5 = 0;
  v4[2] = 0x3B9ACA0000000046LL;
  v6 = 0;
  sub_D9E30((__int64)v4, a1, a2, a3);
  return sub_DC130((__int64)v4);
}
