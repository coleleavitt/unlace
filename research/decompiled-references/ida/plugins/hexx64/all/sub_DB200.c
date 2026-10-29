__int64 __fastcall sub_DB200(__int64 a1, unsigned int a2, int a3, __int64 a4, double a5)
{
  unsigned int v5; // ebp
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  __int64 v9; // [rsp+10h] [rbp-58h]
  char v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+30h] [rbp-38h]
  unsigned int v14; // [rsp+34h] [rbp-34h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a2 == a3 )
  {
    return 0;
  }
  else
  {
    v13 = a3;
    v11 = a1;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v7 = off_4DCD88;
    v12 = a4;
    v14 = 0;
    v5 = sub_DB040((__int64)&v7, a2, a5);
    if ( v5 || !(unsigned int)sub_6F590((__int64 *)&v7, *(__int64 **)(a1 + 784), a2, 0) )
      v5 = v14;
    v7 = off_4DBB18;
    qfree(v8);
  }
  return v5;
}

