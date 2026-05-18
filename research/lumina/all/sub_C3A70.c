__int64 __fastcall sub_C3A70(__int64 a1, char *a2)
{
  unsigned int v2; // eax
  char *v3; // rcx
  int v4; // ecx
  unsigned int v5; // r8d
  int v6; // ecx
  __int64 result; // rax
  int v8; // esi
  unsigned int v9; // eax

  v2 = (unsigned __int8)*a2;
  v3 = a2;
  if ( v2 > 0x7F )
  {
    v2 &= 0x7Fu;
    do
      v2 = *++v3 & 0x7F | (v2 << 7);
    while ( a2 + 8 > v3 && *v3 < 0 );
  }
  if ( v3[1] < 0 )
  {
    if ( v3[2] < 0 )
    {
      if ( v3[3] < 0 )
      {
        if ( v3[4] < 0 )
        {
          if ( v3[5] < 0 )
          {
            if ( v3[6] < 0 )
            {
              if ( v3[7] < 0 )
              {
                if ( v3[8] < 0 )
                  v4 = (_DWORD)v3 + 10;
                else
                  v4 = (_DWORD)v3 + 9;
              }
              else
              {
                v4 = (_DWORD)v3 + 8;
              }
            }
            else
            {
              v4 = (_DWORD)v3 + 7;
            }
          }
          else
          {
            v4 = (_DWORD)v3 + 6;
          }
        }
        else
        {
          v4 = (_DWORD)v3 + 5;
        }
      }
      else
      {
        v4 = (_DWORD)v3 + 4;
      }
    }
    else
    {
      v4 = (_DWORD)v3 + 3;
    }
  }
  else
  {
    v4 = (_DWORD)v3 + 2;
  }
  v5 = *(unsigned __int16 *)(a1 + 14);
  v6 = v4 - (_DWORD)a2;
  if ( v5 < v2 )
  {
    v8 = *(unsigned __int16 *)(a1 + 16);
    v9 = v8 + (v2 - v8) % (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) - 4);
    if ( v5 >= v9 )
      v8 = v9;
    return v8 + (unsigned int)(unsigned __int16)v6 + 4;
  }
  else
  {
    result = v6 + v2;
    if ( (unsigned int)result < 4 )
      return 4;
  }
  return result;
}
