__int64 __fastcall sub_2013A0(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = -1;
  v8 = 0;
  if ( (unsigned __int8)sub_1C3110(a2, (__int64)&v7, a4, a5) )
  {
    if ( (_BYTE)v8 == *(_BYTE *)(a1 + 16) )
    {
      if ( HIDWORD(v8) )
      {
        if ( *(_DWORD *)(a1 + 20) )
        {
          v6 = *(_QWORD *)(a1 + 8);
          if ( SHIDWORD(v8) + v7 - 1 >= v6 && *(int *)(a1 + 20) + v6 - 1 >= v7 )
            sub_32F920((__int64 *)(a1 + 8), (__int64 *)&v7);
        }
      }
    }
  }
  return 0;
}

