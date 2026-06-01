__int64 __fastcall sub_54C0(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
    return (*(_QWORD *)(a1 + 16) & 2LL) == 0 ? 2 : 4;
  return result;
}

