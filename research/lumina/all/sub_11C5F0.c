__int64 __fastcall sub_11C5F0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // eax
  const char *v4; // r11
  __int64 v5; // rbx
  __int64 v7; // [rsp+0h] [rbp-1C8h] BYREF
  char *v8; // [rsp+8h] [rbp-1C0h]
  unsigned int v9; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v10; // [rsp+198h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v3 = sub_CA320(a2, a3);
  v5 = v3;
  if ( v3 == 1 )
  {
    sub_E3CE0(&v7, a2);
    if ( !(unsigned int)sub_11C510((__int64)&v7) )
    {
      if ( v8 )
        sub_C9250(a1, v8);
      sub_D7990((__int64)&v7);
      return *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32 * v5 + 8);
    }
    sub_F63C0(a1, v9, "%s", v8);
    if ( v8 )
      sub_C9250(a1, v8);
    sub_D7990((__int64)&v7);
    return 0;
  }
  else
  {
    if ( v3 >= 0 )
      return *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32 * v5 + 8);
    sub_F63C0(a1, 1, "unknown database %s", v4);
    return 0;
  }
}
