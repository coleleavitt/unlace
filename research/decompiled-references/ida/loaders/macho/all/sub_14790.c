const char *__fastcall sub_14790(int a1, int a2, _DWORD *a3, char a4)
{
  const char *v6; // rdx

  if ( a1 <= 18 )
  {
    if ( a1 > 5 )
    {
      switch ( a1 )
      {
        case 6:
          if ( a2 == 2 )
          {
            v6 = "68040";
            if ( a3 )
              *a3 = 7;
          }
          else if ( a2 == 3 )
          {
            v6 = "68030";
            if ( a3 )
              *a3 = 7;
          }
          else
          {
            v6 = "68K";
            if ( a3 )
              *a3 = 7;
          }
          return v6;
        case 7:
          LOBYTE(a2) = a2 & 0x7F;
          if ( a2 != 4 )
            goto LABEL_26;
          v6 = "80486p";
          if ( a3 )
            *a3 = 0;
          return v6;
        case 8:
          if ( a4 )
          {
            v6 = "mipsb";
            if ( a3 )
              *a3 = 12;
          }
          else
          {
            v6 = "mipsl";
            if ( a3 )
              *a3 = 12;
          }
          return v6;
        case 11:
          v6 = "hppa";
          if ( a3 )
            *a3 = 25;
          return v6;
        case 12:
          if ( !a4 )
            goto LABEL_34;
          v6 = "armb";
          if ( a3 )
            *a3 = 13;
          return v6;
        case 14:
          if ( a4 )
          {
            v6 = "sparcb";
            if ( a3 )
              *a3 = 23;
          }
          else
          {
            v6 = "sparcl";
            if ( a3 )
              *a3 = 23;
          }
          return v6;
        case 15:
          if ( a2 == 1 )
          {
            v6 = "860xr";
            if ( a3 )
              *a3 = 2;
          }
          else
          {
            v6 = "860xp";
            if ( a3 )
              *a3 = 2;
          }
          return v6;
        case 18:
          goto LABEL_32;
        default:
          v6 = nullptr;
          if ( !a3 )
            return v6;
          if ( a1 <= 10 )
            goto LABEL_9;
          v6 = nullptr;
          switch ( a1 )
          {
            case 14:
              *a3 = 23;
              break;
            case 15:
              *a3 = 2;
              break;
            default:
              v6 = nullptr;
              goto LABEL_9;
          }
          break;
      }
      return v6;
    }
    goto LABEL_8;
  }
  if ( a1 > 16777239 )
  {
    if ( a1 == 33554444 )
    {
LABEL_34:
      v6 = "arm";
      if ( a3 )
        *a3 = 13;
      return v6;
    }
    goto LABEL_8;
  }
  if ( a1 <= 16777222 )
  {
LABEL_8:
    v6 = nullptr;
    if ( a3 )
LABEL_9:
      *a3 = -1;
    return v6;
  }
  switch ( a1 )
  {
    case 16777223:
LABEL_26:
      v6 = "metapc";
      if ( a3 )
        *a3 = 0;
      break;
    case 16777228:
      goto LABEL_34;
    case 16777234:
LABEL_32:
      v6 = "ppc";
      if ( a3 )
        *a3 = 15;
      break;
    case 16777235:
      v6 = "applegpu";
      if ( a3 )
        *a3 = -1;
      break;
    case 16777236:
      v6 = "amdgpu";
      if ( a3 )
        *a3 = -1;
      break;
    case 16777237:
      v6 = "intelgpu";
      if ( a3 )
        *a3 = -1;
      break;
    case 16777239:
      v6 = "AIR64";
      if ( a3 )
        *a3 = -1;
      break;
    default:
      goto LABEL_8;
  }
  return v6;
}

