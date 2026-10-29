__int64 *__fastcall sub_DBF10(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(unsigned __int16 *)(a1 + 412) >= (unsigned __int64)a2 )
  {
    if ( (unsigned __int64)a2 > 0x80 )
      goto LABEL_8;
    result = *(__int64 **)(a1 + 464);
    if ( result )
    {
      v3 = *result;
      ++*(_DWORD *)(a1 + 424);
      *(_QWORD *)(a1 + 464) = v3;
      return result;
    }
    result = *(__int64 **)(a1 + 456);
    if ( result )
    {
      v6 = *result;
      ++*(_DWORD *)(a1 + 424);
      *(_QWORD *)(a1 + 456) = v6;
    }
    else
    {
LABEL_8:
      result = *(__int64 **)(a1 + 448);
      if ( result )
      {
        v4 = *result;
        ++*(_DWORD *)(a1 + 424);
        *(_QWORD *)(a1 + 448) = v4;
      }
      else
      {
        result = *(__int64 **)(a1 + 440);
        if ( !result )
        {
          ++*(_DWORD *)(a1 + 432);
          return (__int64 *)sub_DBED0(a1, a2);
        }
        v5 = *result;
        ++*(_DWORD *)(a1 + 424);
        *(_QWORD *)(a1 + 440) = v5;
      }
    }
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 408) )
    {
      ++*(_DWORD *)(a1 + 428);
      return (__int64 *)sub_DBED0(a1, a2);
    }
    if ( !*(_BYTE *)(a1 + 103) )
      return (__int64 *)sub_DBED0(a1, a2);
    return nullptr;
  }
  return result;
}
