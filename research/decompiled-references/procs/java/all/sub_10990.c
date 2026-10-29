__int64 __fastcall sub_10990(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  int v4; // r8d
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  _BYTE *v7; // r8
  _BYTE *v8; // rsi
  unsigned __int64 v9; // rdi
  int v10; // edx

  if ( a3 <= 9 || (*a2 & 0xFFFFFF) != 0x74656D )
    return -1;
  v4 = *(_DWORD *)((char *)a2 + a3 - 4);
  v5 = a3 - 4;
  if ( v4 == 1684956511
    || (result = -1, v4 == 1852401509) && v5 > 7 && (v5 = a3 - 6, *(_WORD *)((char *)a2 + a3 - 6) == 25183) )
  {
    if ( v5 <= 8 )
    {
      result = 0;
      if ( *((_BYTE *)a2 + v5 + 1) != 98 )
        result = *(unsigned int *)(a1 + 33153);
      v7 = (char *)a2 + 3;
      v8 = (char *)a2 + v5;
      v9 = 0;
      while ( 1 )
      {
        v10 = (char)*v7;
        if ( (unsigned __int8)(*v7 - 48) > 9u )
          break;
        ++v7;
        v9 = v10 - 48 + 10 * v9;
        if ( v7 == v8 )
        {
          if ( v9 <= 0xFFFF && *(_WORD *)(a1 + 33147) == (_WORD)v9 )
            return result;
          return -1;
        }
      }
    }
    return -1;
  }
  return result;
}
