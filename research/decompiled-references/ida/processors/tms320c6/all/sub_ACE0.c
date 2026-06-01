__int64 __fastcall sub_ACE0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 42);
  if ( a2 <= 0xD )
  {
    result = 1LL << a2;
    if ( ((1LL << a2) & 0x2200) != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
    }
    else
    {
      if ( (result & 0x11) == 0 )
      {
        if ( (result & 0x1100) == 0 )
          return result;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
      }
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
    }
  }
  return result;
}

