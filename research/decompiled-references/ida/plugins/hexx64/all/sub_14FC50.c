_BOOL8 __fastcall sub_14FC50(__int64 a1, __int64 a2, double a3)
{
  bool v3; // zf
  _BOOL8 result; // rax
  _DWORD *v6; // rsi
  _DWORD *v7; // rsi
  __int64 v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_BYTE *)a2 == 4;
  v8[1] = __readfsqword(0x28u);
  result = true;
  if ( !v3
    || (v7 = *(_DWORD **)(a2 + 8), *v7 != 13)
    || !sub_125B60((unsigned __int8 *)a1, (__int64)(v7 + 8), 0, a3)
    || !(unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(a2 + 8) + 48LL), v8, 0)
    || v8[0] != 1 )
  {
    if ( *(_BYTE *)a1 != 4 )
      return false;
    v6 = *(_DWORD **)(a1 + 8);
    if ( *v6 != 13
      || !sub_125B60((unsigned __int8 *)a2, (__int64)(v6 + 8), 0, a3)
      || !(unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(a1 + 8) + 48LL), v8, 0)
      || v8[0] != 1 )
    {
      return false;
    }
  }
  return result;
}

