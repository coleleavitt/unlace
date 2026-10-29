__int64 __fastcall boost::asio::detail::config_get<int>(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int *v6; // rax
  __int64 result; // rax
  int *v8; // [rsp+0h] [rbp-68h]
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v4 = *a1;
  v11 = __readfsqword(0x28u);
  if ( !(*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _BYTE *, __int64))(v4 + 32))(a1, a2, a3, v10, 22) )
    return a4;
  v6 = __errno_location();
  *v6 = 0;
  v8 = v6;
  result = __isoc23_strtoll();
  if ( *v8 == 34 || (unsigned __int64)(result + 0x80000000LL) >> 32 )
  {
    std::out_of_range::out_of_range((std::out_of_range *)v9, "config out of range");
    boost::throw_exception<std::out_of_range>((std::logic_error *)v9);
  }
  return result;
}

