__int64 __fastcall sub_104C0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 40) )
  {
    if ( result )
    {
      *(_QWORD *)(a1 + 8) = 0;
      return qfree(result);
    }
  }
  else if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree(result);
  }
  return result;
}

