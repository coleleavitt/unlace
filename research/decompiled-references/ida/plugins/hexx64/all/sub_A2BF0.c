__int64 __fastcall sub_A2BF0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8,
        int a9)
{
  __int64 v11; // rdx
  int v12; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  int v23; // ecx

  v11 = a5;
  switch ( a3 )
  {
    case 0u:
      goto LABEL_48;
    case 1u:
      *(_DWORD *)a2 = 1;
      *(_BYTE *)(a2 + 32) = 1;
      *(_DWORD *)(a2 + 40) = a5;
      *(_DWORD *)(a2 + 36) = a4;
      goto LABEL_51;
    case 2u:
      *(_DWORD *)a2 = 2;
      *(_BYTE *)(a2 + 32) = 1;
      *(_DWORD *)(a2 + 52) = a9;
      *(_DWORD *)(a2 + 40) = a5;
      *(_DWORD *)(a2 + 36) = 2;
      *(_BYTE *)(a2 + 48) = 1;
      *(_DWORD *)(a2 + 56) = a6;
      *(_BYTE *)(a2 + 64) = 1;
      *(_DWORD *)(a2 + 72) = a8;
      *(_DWORD *)(a2 + 68) = a4;
      if ( a5 != 0x3BEA45E214ADDC55LL && a6 != 0x3BEA45E214ADDC55LL && a8 != 0x3BEA45E214ADDC55LL && a9 > 0 )
        goto LABEL_7;
      if ( !under_debugger )
        sub_383060(0xC367u, a7);
      goto LABEL_77;
    case 3u:
      goto LABEL_4;
    case 4u:
    case 0x43u:
      if ( a5 != a8 )
        goto LABEL_26;
      goto LABEL_48;
    case 5u:
    case 6u:
    case 7u:
    case 0x3Fu:
    case 0x40u:
    case 0x41u:
    case 0x42u:
    case 0x44u:
LABEL_26:
      *(_DWORD *)a2 = a3;
      if ( a3 > 0x3E )
        *(_DWORD *)(a2 + 4) |= 0x10u;
      goto LABEL_28;
    case 0xCu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
      goto LABEL_33;
    case 0xDu:
    case 0x15u:
      *(_DWORD *)a2 = a3;
      if ( a5 != a6 )
        goto LABEL_34;
      v11 = 0;
LABEL_4:
      *(_DWORD *)a2 = 4;
      sub_120A10(
        a2 + 32,
        *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
        v11,
        a4,
        *(_QWORD *)(a2 + 24),
        (unsigned __int8)a9);
      goto LABEL_5;
    case 0x13u:
    case 0x14u:
      if ( a5 == a6 )
      {
        if ( a5 == a8 )
        {
LABEL_48:
          *(_DWORD *)a2 = 0;
          return 0;
        }
        *(_DWORD *)a2 = 4;
LABEL_28:
        v19 = a4;
LABEL_29:
        *(_DWORD *)(a2 + 68) = v19;
        *(_BYTE *)(a2 + 32) = 1;
        *(_DWORD *)(a2 + 40) = a5;
        *(_DWORD *)(a2 + 36) = a4;
        *(_BYTE *)(a2 + 64) = 1;
        *(_DWORD *)(a2 + 72) = a8;
        if ( a5 == 0x3BEA45E214ADDC55LL || a8 == 0x3BEA45E214ADDC55LL )
        {
          if ( !under_debugger )
            sub_383060(0xC365u, a7);
          goto LABEL_77;
        }
      }
      else
      {
LABEL_33:
        *(_DWORD *)a2 = a3;
LABEL_34:
        v14 = a4;
LABEL_16:
        *(_DWORD *)(a2 + 68) = v14;
        *(_DWORD *)(a2 + 52) = a4;
LABEL_17:
        *(_DWORD *)(a2 + 40) = a5;
        *(_BYTE *)(a2 + 32) = 1;
        *(_DWORD *)(a2 + 36) = a4;
        *(_BYTE *)(a2 + 48) = 1;
        *(_DWORD *)(a2 + 56) = a6;
        *(_BYTE *)(a2 + 64) = 1;
        *(_DWORD *)(a2 + 72) = a8;
        if ( a8 == 0x3BEA45E214ADDC55LL || a5 == 0x3BEA45E214ADDC55LL || a6 == 0x3BEA45E214ADDC55LL )
        {
          if ( !under_debugger )
            sub_383060(0xC366u, a7);
LABEL_77:
          BUG();
        }
      }
LABEL_7:
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 92LL);
      if ( a4 >= v12 )
      {
        if ( *(_DWORD *)(a2 + 36) >= v12 )
          *(_BYTE *)(a2 + 33) |= 2u;
        if ( *(_DWORD *)(a2 + 52) >= v12 )
          *(_BYTE *)(a2 + 49) |= 2u;
        if ( *(_DWORD *)(a2 + 68) >= v12 )
          *(_BYTE *)(a2 + 65) |= 2u;
      }
      return 1;
    case 0x16u:
    case 0x17u:
    case 0x18u:
      *(_DWORD *)a2 = a3;
      *(_DWORD *)(a2 + 68) = a4;
      *(_DWORD *)(a2 + 52) = 1;
      goto LABEL_17;
    case 0x19u:
    case 0x1Au:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x29u:
      *(_DWORD *)a2 = a3;
      v14 = 1;
      goto LABEL_16;
    case 0x1Bu:
    case 0x1Cu:
      *(_DWORD *)a2 = a3;
      *(_DWORD *)(a2 + 52) = 1;
      *(_DWORD *)(a2 + 68) = 1;
      goto LABEL_17;
    case 0x1Du:
      *(_DWORD *)a2 = 29;
      v19 = 1;
      goto LABEL_29;
    case 0x2Au:
      *(_DWORD *)a2 = 42;
      goto LABEL_22;
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
    case 0x2Eu:
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
      *(_DWORD *)a2 = a3;
      *(_BYTE *)(a2 + 48) = 1;
      *(_DWORD *)(a2 + 56) = a6;
      *(_DWORD *)(a2 + 52) = a4;
LABEL_22:
      *(_DWORD *)(a2 + 40) = a5;
      *(_BYTE *)(a2 + 32) = 1;
      *(_DWORD *)(a2 + 36) = a4;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      *(_BYTE *)(a2 + 64) = 6;
      v16 = *(_DWORD *)(v15 + 84);
      v17 = a8;
      v18 = 8 * v16;
      if ( (unsigned __int64)v18 <= 0x3F )
        v17 = a8 & ~(-1LL << v18);
      *(_QWORD *)(a2 + 72) = v17;
      goto LABEL_6;
    case 0x36u:
      *(_DWORD *)a2 = 54;
LABEL_51:
      *(_BYTE *)(a2 + 48) = 1;
      *(_DWORD *)(a2 + 56) = a6;
      *(_DWORD *)(a2 + 68) = a9;
      *(_DWORD *)(a2 + 52) = 2;
      *(_BYTE *)(a2 + 64) = 1;
      *(_DWORD *)(a2 + 72) = a8;
      if ( a9 > 0 && a8 != 0x3BEA45E214ADDC55LL && a6 != 0x3BEA45E214ADDC55LL )
        goto LABEL_7;
      if ( !under_debugger )
        sub_383060(0xC368u, a7);
      goto LABEL_77;
    case 0x37u:
    case 0x38u:
      *(_DWORD *)a2 = a3;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      *(_BYTE *)(a2 + 32) = 6;
      v21 = *(_DWORD *)(v20 + 84);
      v22 = a5;
      v23 = 8 * v21;
      if ( (unsigned __int64)v23 <= 0x3F )
        v22 = a5 & ~(-1LL << v23);
      *(_QWORD *)(a2 + 40) = v22;
      if ( a5 != 0x3BEA45E214ADDC55LL )
        goto LABEL_7;
      if ( !under_debugger )
        sub_383060(0xC36Au, a7);
      goto LABEL_77;
    case 0x39u:
      *(_DWORD *)a2 = 57;
      *(_BYTE *)(a2 + 32) = 1;
      *(_DWORD *)(a2 + 52) = a9;
      *(_DWORD *)(a2 + 40) = a5;
      *(_DWORD *)(a2 + 36) = 2;
      *(_BYTE *)(a2 + 48) = 1;
      *(_DWORD *)(a2 + 56) = a6;
      if ( a9 > 0 && a5 != 0x3BEA45E214ADDC55LL && a6 != 0x3BEA45E214ADDC55LL )
        goto LABEL_7;
      if ( !under_debugger )
        sub_383060(0xCC23u, a7);
      goto LABEL_77;
    case 0x3Au:
      *(_DWORD *)a2 = 58;
      goto LABEL_7;
    case 0x3Du:
      *(_DWORD *)a2 = 61;
LABEL_5:
      *(_BYTE *)(a2 + 64) = 1;
      *(_DWORD *)(a2 + 72) = a8;
      *(_DWORD *)(a2 + 68) = a4;
LABEL_6:
      if ( a8 != 0x3BEA45E214ADDC55LL )
        goto LABEL_7;
      if ( !under_debugger )
        sub_383060(0xC369u, a7);
      goto LABEL_77;
    case 0x3Eu:
      *(_DWORD *)a2 = 62;
      if ( a5 != -1 )
      {
        *(_BYTE *)(a2 + 32) = 1;
        *(_DWORD *)(a2 + 40) = a5;
        *(_DWORD *)(a2 + 36) = a4;
      }
      if ( a6 != -1 )
      {
        *(_BYTE *)(a2 + 48) = 1;
        *(_DWORD *)(a2 + 56) = a6;
        *(_DWORD *)(a2 + 52) = a4;
      }
      if ( a8 != -1 )
      {
        *(_BYTE *)(a2 + 64) = 1;
        *(_DWORD *)(a2 + 72) = a8;
        *(_DWORD *)(a2 + 68) = a4;
      }
      goto LABEL_7;
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
      *(_DWORD *)a2 = a3;
      v14 = a4;
      *(_DWORD *)(a2 + 4) |= 0x10u;
      goto LABEL_16;
    default:
      *(_DWORD *)a2 = a3;
      if ( !under_debugger )
        sub_383060(0xC36Bu, a7);
      goto LABEL_77;
  }
}

