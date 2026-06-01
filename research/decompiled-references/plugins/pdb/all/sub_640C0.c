char __fastcall sub_640C0(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // rax
  _DWORD *v4; // r11
  int v5; // edx
  char result; // al

  v3 = sub_5F700((_QWORD *)(a1 + 168), a3);
  if ( v3 )
  {
    v5 = v3[4];
    result = v5 != -1;
    if ( v4 )
    {
      if ( v5 != -1 )
        *v4 = v5;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(30566);
    return sub_64110();
  }
  return result;
}
