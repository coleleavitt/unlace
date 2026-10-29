__int64 __fastcall idapython_hook_to_notification_point(unsigned int a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  unsigned __int8 v7; // [rsp+Fh] [rbp-29h]

  result = hook_to_notification_point();
  if ( (_BYTE)result )
  {
    v7 = result;
    idapython_register_hook(a1, a2, a3, a4);
    return v7;
  }
  return result;
}

