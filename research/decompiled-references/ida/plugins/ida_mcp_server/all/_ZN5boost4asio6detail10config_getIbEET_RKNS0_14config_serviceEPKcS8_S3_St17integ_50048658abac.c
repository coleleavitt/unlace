unsigned __int64 __fastcall boost::asio::detail::config_get<bool>(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int *v6; // rax
  unsigned __int64 v7; // rax
  int *v9; // [rsp+0h] [rbp-68h]
  _BYTE v10[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v4 = *a1;
  v12 = __readfsqword(0x28u);
  if ( !(*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _BYTE *, __int64))(v4 + 32))(a1, a2, a3, v11, 22) )
    return a4;
  v6 = __errno_location();
  *v6 = 0;
  v9 = v6;
  v7 = __isoc23_strtoll();
  if ( *v9 == 34 || v7 > 1 )
  {
    std::out_of_range::out_of_range((std::out_of_range *)v10, "config out of range");
    boost::throw_exception<std::out_of_range>((std::logic_error *)v10);
  }
  return v7 & 1;
}

