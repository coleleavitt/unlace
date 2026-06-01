__int64 (*__fastcall sub_25D60(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(**(_QWORD **)(a1 + 8) + 32LL);
  if ( (char *)result != (char *)nullsub_15 )
    return (__int64 (*)(void))result();
  return result;
}

