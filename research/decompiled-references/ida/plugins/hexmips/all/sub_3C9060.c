__int64 __fastcall sub_3C9060(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int *a7,
        __int64 a8)
{
  unsigned int v9; // edx

  if ( a3 == -1 )
  {
LABEL_5:
    netnode_supset();
  }
  else
  {
    switch ( a5 )
    {
      case 'A':
      case 'F':
      case 'a':
      case 't':
        return 1;
      case 'c':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BDDB0(a1, a3);
        break;
      case 'd':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2D0D70(a1, a3);
        break;
      case 'f':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BDE60(a1, a3);
        break;
      case 'g':
        sub_2C02D0(a1, a3, a6, a7, a8);
        return 1;
      case 'i':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BE090(a1, a3);
        break;
      case 'l':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2CC1B0(a1, a3);
        break;
      case 'm':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BE390(a1, a3);
        break;
      case 'n':
        v9 = 0;
        if ( a8 == 4 )
          goto LABEL_5;
        return v9;
      case 'u':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2BE2E0(a1, a3);
        break;
      case 'v':
        v9 = 0;
        if ( a6 )
          return v9;
        sub_2D36E0(a1, a3);
        break;
      default:
        return 0;
    }
  }
  return 1;
}

