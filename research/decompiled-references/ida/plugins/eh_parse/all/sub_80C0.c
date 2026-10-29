__int64 __fastcall sub_80C0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 568);
  if ( (int)result < 0 )
  {
    result = add_encoding("windows-1252");
    *(_DWORD *)(a1 + 568) = result;
  }
  return result;
}

