__int64 __fastcall sub_4700(__int64 a1, __int64 a2)
{
  __int64 (**v2)[14]; // r12
  int v3; // r13d
  unsigned __int8 next_byte; // al
  int v5; // ecx
  int v6; // edx
  __int64 result; // rax
  int v8; // ecx
  unsigned __int64 v9; // rdx

  v2 = (__int64 (**)[14])&off_AA80;
  if ( *(_DWORD *)(a1 + 224) != 1 )
    v2 = &off_AAC0;
  v3 = 0;
  while ( 2 )
  {
    next_byte = insn_get_next_byte();
    v5 = *((unsigned __int16 *)*v2 + (next_byte >> 4));
    v6 = v3 | next_byte & 0xF;
    *(_WORD *)(a2 + 24) = v5;
    if ( (unsigned __int16)v5 <= 0x1Au )
    {
      if ( (_WORD)v5 )
      {
        if ( ((1LL << v5) & 0x80012) != 0 )
        {
LABEL_16:
          *(_BYTE *)(a2 + 41) = 5;
          result = *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = v6;
          return result;
        }
        if ( ((1LL << v5) & 0x4202000) != 0 )
        {
LABEL_9:
          result = *(unsigned __int16 *)(a2 + 26);
          v8 = *(_DWORD *)(a2 + 8);
          *(_BYTE *)(a2 + 41) = 7;
          *(_BYTE *)(a2 + 45) = 9;
          *(_QWORD *)(a2 + 56) = (unsigned int)(v6 + result + v8);
          return result;
        }
      }
    }
    else
    {
      switch ( v5 )
      {
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 66:
        case 67:
          goto LABEL_16;
        case 42:
          v6 = ~v6;
          goto LABEL_18;
        case 45:
          if ( *(_DWORD *)(a1 + 224) == 1 && v6 == 380 )
          {
            *(_WORD *)(a2 + 24) = 137;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( v6 < 0 )
          {
            result = 0;
            v9 = (int)(v6 ^ 0xFFFFFFF0);
            if ( v9 < (unsigned __int64)v2[4] )
            {
              *(_WORD *)(a2 + 24) = *((_WORD *)v2[3] + v9);
              return *(unsigned __int16 *)(a2 + 26);
            }
            return result;
          }
          result = 0;
          if ( v6 >= (unsigned __int64)v2[2] )
            return result;
          *(_WORD *)(a2 + 24) = *((_WORD *)v2[1] + v6);
          break;
        case 49:
LABEL_18:
          v3 = 16 * v6;
          continue;
        case 89:
          goto LABEL_9;
        default:
          return *(unsigned __int16 *)(a2 + 26);
      }
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
}

