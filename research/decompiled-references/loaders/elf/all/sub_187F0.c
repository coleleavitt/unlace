__int64 __fastcall sub_187F0(int a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rdx

  v5 = *a2;
  v6 = *(_QWORD *)(a2 + 4);
  v7 = *(_QWORD *)(a2 + 12);
  v8 = *(_QWORD *)(a4 + 16);
  switch ( *a2 )
  {
    case 0u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Cu:
    case 0x27u:
      return 0;
    case 1u:
    case 2u:
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
    case 0x15u:
    case 0x1Bu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
      return 2;
    case 0x14u:
      goto LABEL_3;
    case 0x28u:
    case 0x29u:
      sub_424F0(a1, v6, v7, 0, 4, 0, 0, 0);
      return 0;
    case 0x2Au:
      v7 = *(_QWORD *)(a5 + 136);
      goto LABEL_3;
    default:
      if ( v5 > 0x6B )
      {
        v11 = v5 - 192;
        if ( (unsigned int)v11 > 0x1B )
          return 2;
        v12 = 137365153;
        if ( !_bittest64(&v12, v11) )
          return 2;
        return 0;
      }
      if ( v5 > 0x32 )
      {
        v10 = 0x101800000200007LL;
        if ( !_bittest64(&v10, v5 - 51) )
        {
          if ( v5 != 102 )
            return 2;
LABEL_3:
          sub_424F0(a1, v6, v7, v8, 4, 0, 0, 0);
        }
        return 0;
      }
      return 2;
  }
}
