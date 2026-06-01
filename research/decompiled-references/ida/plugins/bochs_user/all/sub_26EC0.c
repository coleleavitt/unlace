__int64 __fastcall sub_26EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  int v8; // edx
  _QWORD v9[39]; // [rsp+0h] [rbp-138h] BYREF

  v9[33] = __readfsqword(0x28u);
  result = 0;
  if ( a4 )
  {
    if ( a5 )
    {
      qsnprintf();
      v8 = 10;
    }
    else
    {
      qsnprintf();
      v8 = 11;
    }
    result = sub_266F0(a1, (__int64)v9, v8);
    if ( !(_DWORD)result )
      return sub_2AF00(a1 + 16, *(_QWORD *)(a1 + 72), a3, a4);
  }
  return result;
}

