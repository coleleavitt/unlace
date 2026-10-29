__int16 __fastcall sub_1ED90(__int64 a1, int a2)
{
  __int16 result; // ax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx

  result = *(_WORD *)(*(_QWORD *)(a1 + 192) + 2LL * (a2 >> 11));
  if ( (unsigned __int16)result >= 0xFFF3u )
  {
    switch ( result )
    {
      case -13:
        result = 31;
        break;
      case -12:
        result = (a2 & 0x80) == 0 ? 134 : 149;
        break;
      case -11:
      case -10:
        result = (a2 & 0x80) == 0 ? 121 : 138;
        break;
      case -9:
      case -8:
      case -7:
        return result;
      case -6:
        v4 = (a2 >> 8) & 7;
        if ( (unsigned int)(*(_DWORD *)(a1 + 184) - 9) <= 1 )
          result = word_53950[v4];
        else
          result = word_53940[v4];
        break;
      case -5:
        result = *(_WORD *)(*(_QWORD *)(a1 + 200) + 2LL * (a2 & 0x1F));
        if ( result == -9 )
        {
          result = word_53910[(a2 >> 6) & 3];
        }
        else if ( result == -8 )
        {
          result = word_53900[(a2 >> 5) & 7];
        }
        break;
      case -4:
        v5 = a2 & 3;
        if ( (unsigned int)(*(_DWORD *)(a1 + 184) - 9) <= 1 )
        {
          if ( (a2 & 0x80u) == 0 )
            result = word_538F0[v5];
          else
            result = word_538E8[v5];
          if ( (a2 & 0x7C) != 0 )
          {
            if ( (unsigned __int16)result >= 0xFFFDu )
              result = word_5381C[(unsigned __int16)(result + 3)];
          }
          else
          {
            switch ( result )
            {
              case -1:
                result = 73;
                break;
              case -2:
                result = 74;
                break;
              case -3:
                result = 509;
                v6 = (a2 >> 8) & 7;
                if ( v6 )
                {
                  result = 0;
                  if ( v6 == 1 )
                    result = 511;
                }
                break;
            }
          }
        }
        else
        {
          result = word_538E0[v5];
        }
        break;
      case -3:
        v3 = (a2 >> 8) & 7;
        if ( (unsigned int)(*(_DWORD *)(a1 + 184) - 9) <= 1 )
          result = word_53930[v3];
        else
          result = word_53920[v3];
        if ( result == -7 )
          result = ((a2 & 0x80) == 0) + 544;
        break;
      case -2:
        result = 31;
        if ( (a2 & 0x10) != 0 )
          result = (unsigned int)(*(_DWORD *)(a1 + 184) - 9) >= 2 ? 0x21 : 0;
        break;
      case -1:
        if ( (unsigned int)(*(_DWORD *)(a1 + 184) - 9) <= 1 )
          result = word_538D0[a2 & 7];
        else
          result = word_538C0[a2 & 3];
        break;
    }
  }
  return result;
}
