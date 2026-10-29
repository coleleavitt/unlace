unsigned __int64 __fastcall sub_2BD020(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rsi

  result = a1;
  v4 = *(_QWORD *)(result + 32);
  if ( v4 )
    return sub_2BCC40(a2, v4, nullptr);
  return result;
}

