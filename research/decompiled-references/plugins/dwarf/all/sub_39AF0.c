__int64 *__fastcall sub_39AF0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 *(__fastcall *v5)(__int64, __int64 *, __int64); // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx

  result = (__int64 *)sub_97BF0(a3);
  if ( (_WORD)result == 46 )
  {
    result = (__int64 *)validate_name(a2, 8, 1);
    if ( !(_BYTE)result )
    {
      v5 = *(__int64 *(__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 16LL);
      if ( v5 == sub_33C40 )
      {
        v6 = *(_QWORD *)(a3 + 224);
        v7 = v6 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (v6 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v6 == -1 )
        {
          if ( under_debugger )
            BUG();
          interr(30478);
        }
        return sub_20160(a2, (__int64)"$<%llu,%d>", v7, v6 >> 63);
      }
      else
      {
        return v5(a1, a2, a3);
      }
    }
  }
  return result;
}
