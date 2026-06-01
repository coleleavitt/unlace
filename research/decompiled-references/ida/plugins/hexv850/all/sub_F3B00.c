__int64 __fastcall sub_F3B00(__int64 a1)
{
  __int64 result; // rax

  result = ((int)*(unsigned __int8 *)(a1 + 756) >> 6) & 1;
  if ( (((int)*(unsigned __int8 *)(a1 + 756) >> 6) & 1) == 0 )
    return ((int)*(unsigned __int8 *)(a1 + 758) >> 7) & 1;
  return result;
}

