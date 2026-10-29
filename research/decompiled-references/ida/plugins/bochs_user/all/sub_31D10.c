__int64 __fastcall sub_31D10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  int v5; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a1 + 1208;
  v3 = 1;
  v6[3] = __readfsqword(0x28u);
  if ( !(unsigned int)sub_25A00(a1 + 1208, a2, 0) )
  {
    v3 = 0;
    v6[0] = a2;
    if ( !(unsigned int)sub_26920(v2, (__int64)v6, &v5, 4) )
      return (unsigned int)sub_26C30(v2) == 0;
  }
  return v3;
}

