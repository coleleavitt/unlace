__int64 __fastcall sub_24330(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = 0;
  if ( a2 )
  {
    v3 = *(__int64 **)(a2 + 24);
    if ( v3 )
    {
      v4 = **(_QWORD **)(a1 + 24);
      if ( v4 != -1 )
      {
        v5 = *v3;
        LOBYTE(result) = v4 == v5;
        LOBYTE(v5) = v5 != -1;
        return (unsigned int)v5 & (unsigned int)result;
      }
    }
  }
  return result;
}

