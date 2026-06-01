__int64 (__fastcall *get_idapython_hexdsp())(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 (__fastcall *result)(int, __int64, __int64, __int64, __int64, __int64, char); // rax

  result = (__int64 (__fastcall *)(int, __int64, __int64, __int64, __int64, __int64, char))get_hexdsp();
  if ( !result )
    return sub_7E30;
  return result;
}

