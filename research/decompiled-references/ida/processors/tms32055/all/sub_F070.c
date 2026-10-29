unsigned __int64 __fastcall sub_F070(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ebp
  unsigned __int64 result; // rax
  __int64 v11; // rbp
  int v13; // ebp
  unsigned __int8 v14; // bp
  int v15; // edx
  unsigned __int8 v16; // r14
  unsigned __int8 v17; // al
  int v18; // edx
  int v19; // eax
  int v20; // ebp
  int v21; // ebp
  unsigned __int8 v22; // al
  int v23; // ebp
  unsigned __int8 v24; // al
  int v25; // ebp
  unsigned __int8 byte; // al

  *(_BYTE *)(a4 + 29) = *(_BYTE *)a2 + 1;
  if ( (a1 & 1) != 0 )
  {
    v7 = a1 >> 5;
    if ( (a1 & 0x1F) == 0x11 )
    {
      result = (unsigned int)v7;
      switch ( (int)v7 )
      {
        case 0:
          *(_BYTE *)(a2 + 1) = 2;
          *(_WORD *)(a2 + 8) = 137;
          v25 = (unsigned __int8)get_byte() << 8;
          byte = get_byte();
          *(_BYTE *)(a2 + 33) = 2;
          result = byte | (unsigned int)v25;
          *(_QWORD *)(a2 + 16) = result;
          *(_WORD *)(a4 + 26) += 2;
          break;
        case 1:
          *(_BYTE *)(a2 + 1) = 2;
          v20 = (unsigned __int8)get_byte() << 16;
          v21 = ((unsigned __int8)get_byte() << 8) | v20;
          v22 = get_byte();
          *(_BYTE *)(a2 + 33) = 3;
          result = v21 | v22;
          *(_QWORD *)(a2 + 16) = result;
          *(_WORD *)(a4 + 26) += 3;
          break;
        case 2:
          *(_BYTE *)(a2 + 1) = 11;
          v23 = (unsigned __int8)get_byte() << 8;
          v24 = get_byte();
          *(_BYTE *)(a2 + 33) = 5;
          result = v24 | (unsigned int)v23;
          *(_QWORD *)(a2 + 16) = result;
          *(_WORD *)(a4 + 26) += 2;
          break;
        case 3:
        case 4:
        case 5:
          *(_BYTE *)(a2 + 1) = 1;
          *(_WORD *)(a2 + 6) = 39;
          *(_BYTE *)(a2 + 33) = v7 - 2;
          break;
        case 6:
        case 7:
          *(_BYTE *)(a2 + 1) = 1;
          *(_BYTE *)(a2 + 5) = 1;
          *(_WORD *)(a2 + 6) = 39;
          v14 = get_byte();
          LOBYTE(result) = get_byte();
          v15 = v14 << 8;
          LODWORD(result) = v15 | (unsigned __int8)result;
          if ( (v15 & 0x8000) != 0 )
            LODWORD(result) = (unsigned __int16)result | 0xFFFF8000;
          *(_BYTE *)(a2 + 33) = v7 + 3;
          result = (int)result;
          *(_QWORD *)(a2 + 8) = (int)result;
          *(_WORD *)(a4 + 26) += 2;
          break;
        default:
          result = a1 & 0x1F;
          break;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 1) = 1;
      *(_BYTE *)(a2 + 5) = 1;
      v8 = a1 >> 1;
      *(_WORD *)(a2 + 6) = v7 + 8;
      if ( (a1 & 0x11) == 1 )
      {
        v9 = v8 & 0xF;
        result = (a1 >> 1) & 0xF;
        switch ( v9 )
        {
          case 0:
          case 1:
          case 2:
            result = (unsigned int)(v9 + 1);
            *(_BYTE *)(a2 + 33) = v9 + 1;
            break;
          case 3:
            *(_BYTE *)(a2 + 33) = 4;
            break;
          case 4:
            *(_BYTE *)(a2 + 33) = 6;
            break;
          case 5:
            *(_BYTE *)(a2 + 33) = 8;
            break;
          case 6:
          case 7:
            v16 = get_byte();
            v17 = get_byte();
            v18 = v16 << 8;
            v19 = v18 | v17;
            if ( (v18 & 0x8000) != 0 )
              v19 |= 0xFFFF8000;
            *(_QWORD *)(a2 + 8) = v19;
            result = (unsigned int)(v9 + 3);
            *(_BYTE *)(a2 + 33) = v9 + 3;
            *(_WORD *)(a4 + 26) += 2;
            break;
          default:
            result = a1 >> 1;
            break;
        }
      }
      else
      {
        v13 = v8 & 7;
        result = get_sreg() - 1;
        if ( result > 0xFFFFFFFFFFFFFFFDLL || a5 )
        {
          if ( v13 == 2 )
          {
            *(_BYTE *)(a2 + 33) = 7;
          }
          else if ( v13 > 2 )
          {
            result = (unsigned int)(v13 + 9);
            *(_BYTE *)(a2 + 33) = v13 + 9;
          }
          else if ( v13 == 1 )
          {
            *(_BYTE *)(a2 + 33) = 5;
          }
        }
        else
        {
          result = v13;
          *(_BYTE *)(a2 + 33) = 11;
          *(_QWORD *)(a2 + 8) = v13;
        }
      }
    }
  }
  else
  {
    v11 = a1 >> 1;
    result = get_sreg() - 1;
    if ( result <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *(_BYTE *)(a2 + 1) = 1;
      *(_WORD *)(a2 + 6) = 67;
      *(_QWORD *)(a2 + 8) = v11;
      *(_BYTE *)(a2 + 33) = 9;
    }
    else
    {
      *(_BYTE *)(a2 + 1) = 2;
      *(_DWORD *)(a2 + 8) = 8913033;
      *(_QWORD *)(a2 + 16) = v11;
      *(_BYTE *)(a2 + 33) = 1;
    }
  }
  *(_BYTE *)(a2 + 5) = a3;
  return result;
}

