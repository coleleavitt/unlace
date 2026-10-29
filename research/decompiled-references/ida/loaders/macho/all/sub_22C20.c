__int64 __fastcall sub_22C20(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  unsigned int v5; // edx
  __int64 result; // rax

  v2 = *(_DWORD **)a2;
  v3 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 == v3 )
    return 0;
  while ( 1 )
  {
    if ( *v2 == 1 )
    {
      v4 = v2[1];
      if ( v4 )
        break;
    }
    v2 += 4;
    if ( (_DWORD *)v3 == v2 )
      return 0;
  }
  if ( v4 == 10 )
  {
    switch ( v2[2] )
    {
      case 0:
        v5 = 124;
        goto LABEL_9;
      case 1:
        v5 = 201;
        goto LABEL_9;
      case 2:
        v5 = 344;
        goto LABEL_9;
      case 3:
        v5 = 517;
        goto LABEL_9;
      case 4:
        v5 = 792;
        goto LABEL_9;
      case 5:
        v5 = 1228;
        goto LABEL_9;
      case 6:
        v5 = 1504;
        goto LABEL_9;
      case 7:
        v5 = 1699;
        goto LABEL_9;
      case 8:
        v5 = 2050;
        goto LABEL_9;
      case 9:
        v5 = 2422;
        goto LABEL_9;
      case 0xA:
        v5 = 2782;
        goto LABEL_9;
      case 0xB:
        v5 = 3248;
        goto LABEL_9;
      case 0xC:
        v5 = 3789;
        goto LABEL_9;
      case 0xD:
        v5 = 4570;
        goto LABEL_9;
      case 0xE:
        v5 = 4903;
        goto LABEL_9;
      case 0xF:
        v5 = 6153;
        goto LABEL_9;
      case 0x10:
        goto LABEL_8;
      default:
        result = 7195;
        break;
    }
  }
  else
  {
    if ( v4 != 11 )
      return 0;
LABEL_8:
    v5 = 7195;
LABEL_9:
    result = 4903;
    if ( *(_BYTE *)(a1 + 13692) )
    {
      if ( v5 >= 0x1327 )
        return v5;
    }
  }
  return result;
}

