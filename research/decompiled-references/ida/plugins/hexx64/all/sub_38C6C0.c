__m128i *__fastcall sub_38C6C0(__m128i *a1, int a2)
{
  char **v2; // rax
  char *v3; // rbp
  bool v4; // zf
  bool v5; // sf
  bool v6; // of
  int v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+8h] [rbp-50h]
  _DWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_2581E0(a1);
  if ( (unsigned __int64)a2 >= a1[8].m128i_i64[1] )
    return nullptr;
  v2 = (char **)(a1[8].m128i_i64[0] + 32LL * a2);
  v3 = *v2;
  if ( !*v2 || (unsigned int)sub_3862A0(*v2, 0) )
    return nullptr;
  v6 = __OFSUB__(a1[9].m128i_i32[2], a2);
  v4 = a1[9].m128i_i32[2] == a2;
  v5 = a1[9].m128i_i32[2] - a2 < 0;
  v10[0] = 0;
  v8 = 0;
  sub_38A790((__int64)a1, v3, 0, v5 ^ v6 | v4, 0, (__int64)&v8, (__int64)v10);
  if ( v8 == 1 )
  {
    if ( v11 > 0x44 )
    {
      if ( v11 != 73 && (v11 & 0x40000000) == 0 )
        return (__m128i *)v9;
    }
    else if ( v11 <= 0x42 )
    {
      return (__m128i *)v9;
    }
    return nullptr;
  }
  if ( v8 == 3 )
    return a1 + 1;
  else
    return (__m128i *)(*(_BYTE *)tag_skipcodes() == 125);
}

