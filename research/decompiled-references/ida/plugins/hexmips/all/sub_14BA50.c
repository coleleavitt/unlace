_BOOL8 __fastcall sub_14BA50(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _BOOL8 result; // rax
  _DWORD *v5; // rsi
  _DWORD *v6; // rsi
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_BYTE *)a2 == 4;
  v7[1] = __readfsqword(0x28u);
  result = true;
  if ( !v2
    || (v6 = *(_DWORD **)(a2 + 8), *v6 != 13)
    || !sub_121960((unsigned __int8 *)a1, (__int64)(v6 + 8), 0)
    || !(unsigned __int8)sub_11BB80((char *)(*(_QWORD *)(a2 + 8) + 48LL), v7, 0)
    || v7[0] != 1 )
  {
    if ( *(_BYTE *)a1 != 4 )
      return false;
    v5 = *(_DWORD **)(a1 + 8);
    if ( *v5 != 13
      || !sub_121960((unsigned __int8 *)a2, (__int64)(v5 + 8), 0)
      || !(unsigned __int8)sub_11BB80((char *)(*(_QWORD *)(a1 + 8) + 48LL), v7, 0)
      || v7[0] != 1 )
    {
      return false;
    }
  }
  return result;
}

