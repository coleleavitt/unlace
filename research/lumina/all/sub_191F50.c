__int64 __fastcall sub_191F50(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // r14d
  __int64 result; // rax
  int v6; // ebp
  char v7; // al
  bool v8; // dl
  int v9[8]; // [rsp+0h] [rbp-68h] BYREF
  _WORD v10[12]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_1911A0(a1, v9);
  sub_1911A0(a2, v10);
  v4 = v10[1];
  result = 4;
  *a3 = 0;
  if ( v4 )
  {
    v6 = HIWORD(v9[0]);
    if ( HIWORD(v9[0]) )
    {
      v7 = sub_190D00((__int64)v10, v9);
      v8 = sub_191200((__int64)v9, v7, 0, (unsigned int)(v6 + 0x3FFF - v4), 112);
      result = 2;
      if ( v8 )
      {
        LOWORD(v9[0]) = -(LOWORD(v9[0]) != v10[0]);
        sub_191160(v9, (__int64)a3);
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
