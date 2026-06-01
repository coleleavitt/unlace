__int64 __fastcall sub_10060(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = getinf_flag();
  if ( (_BYTE)result )
  {
    result = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 13 )
      {
        *a2 &= 0xFFFFFFFF8uLL;
        return 0xFFFFFFFF8LL;
      }
    }
    else
    {
      *a2 &= 0x7FFFFFFFFFF8uLL;
      return 0x7FFFFFFFFFF8LL;
    }
  }
  return result;
}
