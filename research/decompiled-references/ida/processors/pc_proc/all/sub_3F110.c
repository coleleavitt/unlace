__int64 __fastcall sub_3F110(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 104) )
  {
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      return qfree();
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 8);
    if ( result )
    {
      *(_QWORD *)(a1 + 16) = 0;
      return qfree();
    }
  }
  return result;
}

