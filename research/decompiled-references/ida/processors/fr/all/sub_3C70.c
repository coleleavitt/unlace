char *__fastcall sub_3C70(__int64 a1, int *a2)
{
  int v3; // r12d
  int v5; // esi
  int *v6; // rdi
  int v7; // eax
  char v8; // cl
  int v9; // edx

  if ( a2 )
  {
    v3 = *a2;
    v5 = 0;
    v6 = &dword_90A4;
    v7 = (v3 << 8) | (unsigned __int8)get_byte();
    while ( 1 )
    {
      switch ( v6[1] )
      {
        case 1:
          v8 = 12;
          v9 = 61440;
          goto LABEL_5;
        case 2:
          v8 = 11;
          v9 = 61696;
          goto LABEL_5;
        case 3:
          v8 = 8;
          v9 = 65280;
          goto LABEL_5;
        case 5:
          if ( (v7 & 0xFFF0) >> 4 == *v6 )
            goto LABEL_9;
          goto LABEL_6;
        case 6:
          v8 = 0;
          v9 = 0xFFFF;
LABEL_5:
          if ( (v7 & v9) >> v8 == *v6 )
          {
LABEL_9:
            ++*(_WORD *)(a1 + 26);
            *a2 = (16 * ((16 * ((unsigned __int8)(16 * v7) | (v7 >> 4) & 0xF)) | (v7 >> 8) & 0xF)) | (v7 >> 12) & 0xF;
            return &byte_90A0[32 * v5];
          }
LABEL_6:
          ++v5;
          v6 += 8;
          if ( v5 == 157 )
            return nullptr;
          break;
        default:
          if ( under_debugger )
            goto LABEL_17;
          interr();
          goto LABEL_15;
      }
    }
  }
LABEL_15:
  if ( under_debugger )
LABEL_17:
    BUG();
  interr();
  return (char *)sub_3DD0(10002);
}

