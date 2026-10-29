__int64 *__fastcall sub_39A60(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  result = (__int64 *)validate_name(a2, 2, 1);
  if ( !(_BYTE)result )
  {
    v5 = *(_QWORD *)(a3 + 224);
    v6 = v5 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v5 == -1 || !v6 )
    {
      if ( under_debugger )
        BUG();
      interr(30478);
    }
    return sub_20160(a2, (__int64)"$<%llu,%d>", v6, v5 >> 63);
  }
  return result;
}

