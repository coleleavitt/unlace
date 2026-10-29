__int64 __fastcall sub_294400(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  int v5; // eax
  char tinfo_property; // r13
  unsigned __int8 v8; // r13
  int v9; // r14d
  int v10; // r15d
  int v11; // eax
  int v12; // r8d
  int tinfo_size; // eax
  int v14; // [rsp+8h] [rbp-40h]
  int v15; // [rsp+8h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 8) & 8;
  if ( v3 )
    goto LABEL_33;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a2 + 8);
    if ( v4 > 0x3D )
      goto LABEL_6;
    if ( v4 > 0x1F )
    {
      switch ( v4 )
      {
        case ' ':
        case '!':
        case '"':
          if ( !(unsigned __int8)sub_291ED0(a2, *(double *)a3.m128_u64) )
            goto LABEL_30;
          goto LABEL_31;
        case '#':
        case '$':
          if ( (unsigned __int8)sub_28F940(a1, a2, a3) )
            goto LABEL_31;
          goto LABEL_6;
        case '%':
          if ( sub_28C830(a1, a2, a3) )
            goto LABEL_31;
          goto LABEL_6;
        case '&':
        case '\'':
LABEL_30:
          if ( sub_28AAF0(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '0':
          if ( (unsigned __int8)sub_2928C0(a1, a2, a3) || (unsigned __int8)sub_2902B0(a1, a2, a3) )
            goto LABEL_31;
          tinfo_property = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
            goto LABEL_6;
          if ( (unsigned __int8)sub_2915A0(a1, a2, a3) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_2903F0(a1, a2, a3) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_290920(a1, (__int64 *)a2, a3) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_292DD0(a1, a2, a3) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_2933E0(a1, a2, a3) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_293610(a1, a2, *(double *)a3.m128_u64) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_2939B0(a1, a2, *(double *)a3.m128_u64) )
            goto LABEL_31;
          v8 = sub_292A50(a1, a2, *(double *)a3.m128_u64);
          if ( v8 )
            goto LABEL_31;
          v9 = get_tinfo_property();
          v14 = get_tinfo_property();
          v10 = 8 * get_tinfo_size();
          v11 = sub_285970(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(double *)a3.m128_u64);
          v12 = v14;
          if ( (__int16)v11 <= v10 )
          {
            v15 = (__int16)v11;
            if ( v9 != v12 )
            {
              tinfo_size = get_tinfo_size();
              if ( v15 == v10 )
              {
                v8 = 1;
              }
              else if ( v9 == 1 )
              {
                v8 = 8 * tinfo_size == v15;
              }
              if ( (unsigned int)sub_2862C0(a1, a2, tinfo_size, v8, 0, *(double *)a3.m128_u64) )
                goto LABEL_6;
            }
          }
          else if ( v9 != 1 || v14 != 1 || (__int16)v11 - (v11 >> 16) > v10 )
          {
            goto LABEL_6;
          }
          if ( !(unsigned __int8)sub_291680(a1, (__int64 *)a2, a3)
            && !(unsigned __int8)sub_2922E0(a1, (__int64 *)a2, a3)
            && !sub_291320(a1, a2, *(double *)a3.m128_u64) )
          {
            goto LABEL_6;
          }
          break;
        case '1':
          if ( (unsigned __int8)sub_28D600(a1, (__int64 *)a2, a3)
            || (unsigned __int8)sub_28D6B0(a1, a2)
            || (unsigned __int8)sub_28D9E0(a1, a2, a3)
            || (unsigned __int8)sub_28DAE0(a1, a2, *(double *)a3.m128_u64) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '3':
          if ( (unsigned __int8)sub_28CA40((__int64 *)a2, *(double *)a3.m128_u64)
            || (unsigned __int8)sub_291F50(a1, (__int64 *)a2, a3)
            || (unsigned __int8)sub_28A2A0((_QWORD *)a1, a2, a3) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '4':
          if ( (unsigned __int8)sub_28F1A0((_QWORD *)a1, a2, *(double *)a3.m128_u64) )
            goto LABEL_31;
          goto LABEL_6;
        case '9':
          if ( (unsigned __int8)sub_28CAA0(a1, a2, *(double *)a3.m128_u64) || (unsigned __int8)sub_28D140(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case ':':
          if ( (unsigned __int8)sub_2914E0(a1, a2, a3) )
            goto LABEL_31;
          goto LABEL_6;
        case ';':
          if ( (unsigned __int8)sub_294360(a2, *(double *)a3.m128_u64) )
            goto LABEL_31;
          goto LABEL_6;
        case '=':
          if ( (unsigned __int8)sub_28DBF0(a1, a2, a3)
            || (unsigned __int8)sub_294AF0(a1, a2)
            || (unsigned __int8)sub_294DE0(a1, a2)
            || (unsigned __int8)sub_292780((_QWORD *)a1, a2, *(double *)a3.m128_u64) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        default:
          goto LABEL_6;
      }
      goto LABEL_31;
    }
    if ( v4 <= 0x14 )
      break;
    if ( v4 == 31 )
      goto LABEL_6;
    if ( ((1LL << v4) & 0x55000000) != 0 )
    {
      if ( !(unsigned __int8)sub_28F2F0(a1, a2) )
        goto LABEL_6;
    }
    else if ( ((1LL << v4) & 0xC00000) != 0 )
    {
      if ( !(unsigned __int8)sub_28C620(a1, a2, *(double *)a3.m128_u64) && !(unsigned __int8)sub_28D8B0(a1, a2, a3) )
        goto LABEL_6;
    }
    else if ( v4 != 21
           || !(unsigned __int8)sub_2901F0(a1, a2, a3)
           && !(unsigned __int8)sub_28A710(a1, a2, a3)
           && !(unsigned __int8)sub_28D8B0(a1, a2, a3)
           && !(unsigned __int8)sub_28DA50(a1, a2, a3)
           && !(unsigned __int8)sub_28F690((_QWORD *)a1, a2, *(double *)a3.m128_u64) )
    {
      goto LABEL_6;
    }
LABEL_31:
    v5 = *(_DWORD *)(a1 + 8);
    ++v3;
    if ( (v5 & 8) != 0 )
    {
      if ( !v3 )
      {
LABEL_33:
        if ( !under_debugger )
          sub_383060(0xC5B4u, *(double *)a3.m128_u64);
        BUG();
      }
      goto LABEL_8;
    }
  }
  if ( v4 )
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 1:
        if ( (unsigned __int8)sub_28D3D0(a1, a2, a3) )
          goto LABEL_31;
        break;
      case 2:
        if ( !(unsigned __int8)sub_292B60(a1, a2, a3)
          && !(unsigned __int8)sub_2453C0(a2, *(_QWORD *)(a1 + 72), *(double *)a3.m128_u64)
          && !(unsigned __int8)sub_293BB0(a1, a2, a3) )
        {
          goto LABEL_26;
        }
        goto LABEL_31;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
LABEL_26:
        if ( (unsigned __int8)sub_290E30(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), a2, *(double *)a3.m128_u64)
          || (unsigned __int8)sub_28FC60(a1, a2) )
        {
          goto LABEL_31;
        }
        break;
      case 0x10:
        if ( !(unsigned __int8)sub_28FA70(a1, a2, a3) )
          break;
        goto LABEL_31;
      case 0x13:
        if ( (unsigned __int8)sub_292CF0(a1, a2, a3)
          || (unsigned __int8)sub_28DA50(a1, a2, a3)
          || (unsigned __int8)sub_28A710(a1, a2, a3) )
        {
          goto LABEL_31;
        }
        break;
      case 0x14:
        if ( (unsigned __int8)sub_28D8B0(a1, a2, a3) || (unsigned __int8)sub_28F8B0(a1, a2, a3) )
          goto LABEL_31;
        break;
      default:
        break;
    }
  }
LABEL_6:
  if ( v3 )
  {
    v5 = *(_DWORD *)(a1 + 8);
LABEL_8:
    *(_DWORD *)(a1 + 8) = v5 | 8;
  }
  return v3;
}

