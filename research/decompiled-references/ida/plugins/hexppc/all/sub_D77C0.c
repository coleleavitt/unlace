__int64 __fastcall sub_D77C0(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v6[3]; // [rsp+0h] [rbp-68h] BYREF
  char v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+30h] [rbp-38h]
  unsigned int v11; // [rsp+34h] [rbp-34h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a2 == a3 )
  {
    return 0;
  }
  else
  {
    v10 = a3;
    v8 = a1;
    v6[1] = 0;
    v6[2] = 0;
    v7 = 0;
    v6[0] = (__int64)off_4C9EE8;
    v9 = a4;
    v11 = 0;
    v4 = sub_D7600((__int64)v6, a2);
    if ( v4 || !(unsigned int)sub_6BB50(v6, *(__int64 **)(a1 + 784), a2, 0) )
      v4 = v11;
    v6[0] = (__int64)off_4C8C78;
    qfree();
  }
  return v4;
}

