unsigned __int64 __fastcall sub_E43A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 result; // rax

  result = sub_DBD10(a1, "%r %s BY term out of range - should be between 1 and %d", a3, a2, a4);
  if ( a5 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(a5 + 4) & 1) == 0 )
      {
        result = *(unsigned int *)(a5 + 52);
        if ( (int)result > 0 )
          break;
      }
      a5 = *(_QWORD *)(a5 + 16);
      if ( !a5 )
        return result;
    }
    *(_DWORD *)(*(_QWORD *)a1 + 84LL) = result;
  }
  return result;
}
