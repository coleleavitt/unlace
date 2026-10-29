__int64 __fastcall idapython_unhook_from_notification_point(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v5; // eax

  v5 = unhook_from_notification_point();
  LOBYTE(v3) = v5 > 0;
  if ( v5 > 0 )
    idapython_unregister_hook(a1, a2, a3);
  return v3;
}

