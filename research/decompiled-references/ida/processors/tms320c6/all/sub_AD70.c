__int64 __fastcall sub_AD70(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 14 )
    goto LABEL_8;
  if ( a2 <= 14 )
  {
    if ( a2 != 10 )
    {
      if ( a2 != 11 )
        return result;
LABEL_7:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
    }
LABEL_8:
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
  }
  if ( a2 == 15 )
    goto LABEL_7;
  return result;
}

