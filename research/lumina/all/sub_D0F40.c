__int64 __fastcall sub_D0F40(unsigned __int8 *a1, int a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  char *v6; // rdx
  __int64 v7; // r12
  unsigned __int8 v8; // r13

  v4 = (a2 ^ (4 * byte_1BF000[*a1]) ^ (3 * byte_1BF000[a1[a2 - 1]])) % 127;
  result = (unsigned int)byte_1BB240[v4] - 1;
  if ( byte_1BB240[v4] )
  {
    while ( 1 )
    {
      if ( a2 == byte_1BB100[(int)result] && (*a1 & 0xDF) == aReindexedescap[word_1BAFC0[(int)result]] )
      {
        v6 = &aReindexedescap[word_1BAFC0[(int)result]];
        if ( (a1[1] & 0xDF) == v6[1] )
        {
          if ( a2 <= 2 )
            goto LABEL_12;
          if ( (a1[2] & 0xDF) == v6[2] )
            break;
        }
      }
LABEL_3:
      result = (unsigned int)byte_1BB1A0[(int)result] - 1;
      if ( (_DWORD)result == -1 )
        return result;
    }
    v7 = 3;
    while ( (unsigned int)(a2 - 3) + 3LL != v7 )
    {
      v8 = a1[v7++];
      if ( (v8 & 0xDF) != v6[v7 - 1] )
        goto LABEL_3;
    }
LABEL_12:
    result = byte_1BAF20[(int)result];
    *a3 = result;
  }
  return result;
}
