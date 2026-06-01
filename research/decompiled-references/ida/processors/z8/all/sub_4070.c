__int64 __fastcall sub_4070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  char refinfo; // dl
  unsigned __int64 v8; // [rsp+8h] [rbp-50h]

  if ( !a5 )
    return map_code_ea();
  get_flags_ex();
  if ( !(unsigned __int8)is_off() )
    return a3 + *(_QWORD *)(a1 + 224);
  refinfo = get_refinfo();
  result = 0xFFFFFFFFFFFFFFFLL;
  if ( refinfo )
    return v8 >> 4;
  return result;
}

