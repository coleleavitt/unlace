__int64 __fastcall sub_20CC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 216LL))(
             a1,
             *(unsigned int *)(a2 + 4),
             1);
  if ( (int)result > 0 )
    return sub_20C30(a1, a2);
  return result;
}

