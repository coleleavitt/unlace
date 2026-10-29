bool __fastcall sub_3A80(__int64 a1, int a2)
{
  bool result; // al
  _BYTE v3[4]; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  qlseek(a1, (unsigned int)(a2 + 36), 0);
  qlread(a1, v3, 4);
  result = 0;
  if ( v3[0] == 114 && v3[1] == 119 && v3[2] == 100 )
    return v3[3] == 99;
  return result;
}

