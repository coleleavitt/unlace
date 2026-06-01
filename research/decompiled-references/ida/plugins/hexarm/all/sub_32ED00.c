__int64 __fastcall sub_32ED00(int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = (unsigned int)(a1 - 32);
  result = 0;
  if ( (unsigned int)v1 <= 0x14 )
    return dword_429DC0[v1];
  return result;
}

