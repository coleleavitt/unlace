__int64 __fastcall sub_119020(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+0h] [rbp-1Ch]

  result = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)result )
    return 0;
  if ( !*(_BYTE *)(a1 + 25) || (*(_BYTE *)(a1 + 25) & 3) == 0 && (*(_BYTE *)(a2 + 52) & 8) == 0 )
  {
    ++*(_DWORD *)(a1 + 260);
    *(_QWORD *)(a2 + 32) = 0;
    if ( *(_QWORD *)(a1 + 296) )
    {
      result = sub_D7190(a2);
      if ( (_DWORD)result )
      {
LABEL_7:
        if ( (unsigned __int8)result == 13 || (unsigned __int8)result == 10 )
        {
          v3 = result;
          sub_CC130(a1, result);
          return v3;
        }
        return result;
      }
      result = sub_10D580(a1, a2, 0, 0);
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 52) & 8) != 0 || *(_BYTE *)(a1 + 21) == 3 )
      {
        result = sub_118D50(a1, 1);
        if ( (_DWORD)result )
          goto LABEL_7;
      }
      result = sub_10DF70((_QWORD *)a1, a2);
    }
    if ( !(_DWORD)result )
    {
      sub_CBAD0(a2);
      return 0;
    }
    goto LABEL_7;
  }
  return result;
}
