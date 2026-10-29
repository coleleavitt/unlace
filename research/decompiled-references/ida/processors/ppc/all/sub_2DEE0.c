__int64 __fastcall sub_2DEE0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)(v2 - 594) <= 0x3Au )
  {
    v3 = 0x408000810000201LL;
    if ( _bittest64(&v3, (unsigned int)(v2 - 594)) )
    {
      v4 = *(_QWORD *)(a2 + 128);
      if ( (_DWORD)v4 == 4 )
      {
        if ( (_WORD)v2 == 629 )
        {
          *(_WORD *)(a2 + 24) = 1297;
        }
        else if ( (unsigned __int16)v2 > 0x275u )
        {
          if ( (_WORD)v2 == 645 )
          {
            *(_WORD *)(a2 + 24) = 1287;
          }
          else if ( (_WORD)v2 == 652 )
          {
            *(_WORD *)(a2 + 24) = 1288;
          }
        }
        else
        {
          switch ( (_WORD)v2 )
          {
            case 0x25B:
              *(_WORD *)(a2 + 24) = 2501;
              break;
            case 0x26E:
              *(_WORD *)(a2 + 24) = 1296;
              break;
            case 0x252:
              *(_WORD *)(a2 + 24) = 2500;
              break;
          }
        }
      }
      else
      {
        result = 0;
        if ( (_DWORD)v4 )
          return result;
      }
      *(_BYTE *)(a2 + 121) = 0;
    }
  }
  return *(unsigned __int16 *)(a2 + 26);
}

