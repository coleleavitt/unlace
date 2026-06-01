unsigned __int64 __fastcall sub_452D0(__int64 *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  __int128 v5; // [rsp+8h] [rbp-60h]
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+28h] [rbp-40h]
  unsigned __int64 v8; // [rsp+38h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( a2 <= 0x40u )
  {
    if ( a2 )
    {
      switch ( a2 )
      {
        case 1u:
          switch ( a3 )
          {
            case 1u:
            case 3u:
            case 4u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 9u:
            case 0xAu:
            case 0xBu:
            case 0xCu:
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
              goto LABEL_44;
            case 2u:
              v4 = 0;
              v6 = 0;
              v5 = 0;
              v7 = 0;
              break;
            default:
              v4 = 0;
              v5 = 0;
              goto LABEL_18;
          }
          goto LABEL_6;
        case 2u:
          switch ( a3 )
          {
            case 1u:
            case 3u:
            case 4u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 9u:
            case 0xAu:
            case 0xBu:
            case 0xCu:
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
              goto LABEL_44;
            case 2u:
              v4 = 0;
              v6 = 0;
              v5 = 0;
              v7 = 0;
              break;
            default:
              v4 = 0;
              v5 = 0;
              goto LABEL_18;
          }
          goto LABEL_6;
        case 3u:
          if ( a3 == 3 )
            goto LABEL_44;
          if ( a3 > 3u )
          {
            if ( a3 != 4 )
            {
LABEL_17:
              v4 = 0;
              v5 = 0;
              goto LABEL_18;
            }
          }
          else if ( a3 != 1 && a3 != 2 )
          {
            goto LABEL_17;
          }
          break;
        case 4u:
          if ( a3 != 1 )
            goto LABEL_20;
          goto LABEL_44;
        case 6u:
          switch ( a3 )
          {
            case 1u:
            case 3u:
            case 4u:
            case 5u:
              goto LABEL_44;
            case 2u:
              v4 = 0;
              v6 = 0;
              v5 = 0;
              v7 = 0;
              break;
            default:
              v4 = 0;
              v5 = 0;
              goto LABEL_18;
          }
          goto LABEL_6;
        case 9u:
          switch ( a3 )
          {
            case 1u:
            case 3u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 9u:
            case 0xAu:
              goto LABEL_44;
            case 2u:
              v4 = 0;
              v6 = 0;
              v5 = 0;
              v7 = 0;
              break;
            default:
              v4 = 0;
              v5 = 0;
              goto LABEL_18;
          }
          goto LABEL_6;
        case 0xAu:
          if ( a3 == 1 )
            goto LABEL_44;
          goto LABEL_20;
        case 0xBu:
          switch ( a3 )
          {
            case 1u:
            case 3u:
            case 4u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 9u:
            case 0xAu:
            case 0xBu:
            case 0xCu:
            case 0xDu:
            case 0xEu:
              goto LABEL_44;
            case 2u:
              v4 = 0;
              v6 = 0;
              v5 = 0;
              v7 = 0;
              break;
            default:
              v4 = 0;
              v5 = 0;
              goto LABEL_18;
          }
          goto LABEL_6;
        case 0xCu:
          if ( a3 == 2 || a3 == 3 || a3 == 1 )
            goto LABEL_44;
          v4 = 0;
          v5 = 0;
          goto LABEL_18;
        case 0xDu:
          if ( a3 == 2 || a3 == 3 || a3 == 1 )
            goto LABEL_44;
          v4 = 0;
          v5 = 0;
          goto LABEL_18;
        case 0xEu:
          if ( a3 == 1 )
            goto LABEL_44;
          goto LABEL_20;
        case 0xFu:
          if ( a3 == 2 || a3 == 3 || a3 == 1 )
            goto LABEL_44;
          v4 = 0;
          v5 = 0;
          goto LABEL_18;
        case 0x10u:
          if ( a3 == 3 )
            goto LABEL_44;
          if ( a3 > 3u )
          {
            if ( a3 == 4 )
              goto LABEL_44;
          }
          else if ( a3 == 1 || a3 == 2 )
          {
            goto LABEL_44;
          }
          v4 = 0;
          v5 = 0;
LABEL_18:
          v6 = 0;
          v7 = 0;
          goto LABEL_5;
        case 0x11u:
          if ( a3 == 1 )
            goto LABEL_44;
          goto LABEL_20;
        case 0x40u:
          if ( a3 == 100 )
            goto LABEL_44;
          goto LABEL_20;
        default:
          goto LABEL_4;
      }
      goto LABEL_44;
    }
    goto LABEL_4;
  }
  if ( a2 != 0xC7 )
  {
LABEL_4:
    v5 = 0;
    v4 = 0;
    sub_13B20(&v4);
    v6 = 0;
    v7 = 0;
LABEL_5:
    sub_13B20(&v6);
    goto LABEL_6;
  }
  if ( a3 != 1 )
  {
LABEL_20:
    v4 = 0;
    v6 = 0;
    v5 = 0;
    v7 = 0;
    goto LABEL_5;
  }
LABEL_44:
  v4 = 0;
  v6 = 0;
  v5 = 0;
  v7 = 0;
LABEL_6:
  sub_13B20(a1);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

