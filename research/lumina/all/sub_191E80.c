__int64 __fastcall sub_191E80(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // ebp
  int v5; // r12d
  char v6; // al
  bool v7; // dl
  __int64 result; // rax
  _WORD v9[16]; // [rsp+0h] [rbp-68h] BYREF
  int v10[6]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_1911A0(a1, v9);
  sub_1911A0(a2, v10);
  v4 = v9[1];
  v5 = HIWORD(v10[0]);
  *a3 = 0;
  if ( v4 && v5 )
  {
    v6 = sub_190B20((__int64)v9, v10);
    v7 = sub_191200((__int64)v10, v6, 0, (unsigned int)(v4 + v5 - 16382), 112);
    result = 2;
    if ( !v7 )
      return result;
    LOWORD(v10[0]) = -(v9[0] != LOWORD(v10[0]));
    sub_191160(v10, (__int64)a3);
  }
  return 1;
}
