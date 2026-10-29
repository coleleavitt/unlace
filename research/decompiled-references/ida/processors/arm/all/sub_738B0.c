__int64 __fastcall sub_738B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-19h]

  get_flags_ex(a1, 0);
  result = is_off();
  if ( (_BYTE)result )
  {
    if ( a2 )
    {
      v3 = result;
      sub_1DB20(a2, 11, 11, 10);
      sub_1DB20(a2, 31, 31, 28);
      sub_1DB20(a2, 24, 24, 16);
      return v3;
    }
  }
  return result;
}
