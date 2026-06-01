__int64 __fastcall sub_6FA60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *func; // r12
  unsigned int v5; // ebx
  int v7; // edx
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  func = (__int64 *)get_func();
  v5 = sub_6F3C0(*(_QWORD *)(a1 + 5304), func, v8, 0);
  if ( (_BYTE)v5 )
  {
    if ( *(_QWORD *)(v8[0] + 24LL) == a3 )
    {
      v7 = *(_DWORD *)(v8[0] + 32LL);
      if ( v7 == 3 )
      {
        sub_6EEB0(a1, a3, *(_QWORD *)(v8[0] + 8LL));
        sub_6E060(a1);
      }
      else if ( v7 == 4 )
      {
        sub_6EF40(a1, a3, *(_QWORD *)(v8[0] + 8LL));
        sub_6E060(a1);
      }
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
