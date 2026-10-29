__int64 __fastcall sub_1AAA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  const char *v4; // rdi
  __int128 v5; // [rsp+8h] [rbp-40h] BYREF
  __int64 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v5 = 0;
  v2 = 3;
  if ( (unsigned __int8)parse_config_value() )
  {
    v4 = s;
    if ( *(_QWORD *)(a2 + 8) )
      v4 = *(const char **)a2;
    v2 = sub_EFC0((__int64)v4, 1, 2u, (__int64)&v5);
  }
  free_idcv();
  return v2;
}

