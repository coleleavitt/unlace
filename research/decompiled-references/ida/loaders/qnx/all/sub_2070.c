__int64 __fastcall sub_2070(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-A0h]
  __int16 v10; // [rsp+1Ah] [rbp-8Eh] BYREF
  unsigned int v11; // [rsp+1Ch] [rbp-8Ch]
  __int16 v12; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v13; // [rsp+22h] [rbp-86h]
  __int16 v14; // [rsp+24h] [rbp-84h]
  __int16 v15; // [rsp+28h] [rbp-80h]
  __int16 v16; // [rsp+2Ah] [rbp-7Eh]
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( qlread(a3, &v12, 70) == 70
    && !v12
    && !v14
    && (v16 == 286 || v16 == 386)
    && (unsigned int)(((unsigned __int64)v13 - 48) >> 2) - 1 <= 3 )
  {
    v10 = -1;
    v9 = qlsize(a3);
    v6 = v13 + 6;
    while ( 2 )
    {
      qlseek(a3, v6, 0);
      if ( qlread(a3, &v10, 6) == 6 )
      {
        switch ( v10 )
        {
          case 1:
          case 2:
          case 3:
          case 4:
          case 6:
          case 8:
            if ( v9 < (unsigned __int64)v11 + 6 )
              return 0;
            v6 += v11 + 6;
            continue;
          case 5:
            if ( v11 != 6 || v9 <= 0xB )
              return 0;
            sub_1FB0(a1, (__int64)"QNX %d-executable", (v15 & 2) == 0 ? 16 : 32);
            v7 = *a2;
            if ( (unsigned __int64)a2[2] <= 6 )
            {
              v8 = qvector_reserve(a2, v7, 7, 1);
              *a2 = v8;
              v7 = v8;
            }
            a2[1] = 7;
            *(_DWORD *)v7 = 1635018093;
            *(_WORD *)(v7 + 4) = 25456;
            *(_BYTE *)(*a2 + 6) = 0;
            return 17;
          case 7:
            if ( v11 != 6 || v9 <= 0xB )
              return 0;
            v6 += 12;
            continue;
          default:
            return 0;
        }
      }
      break;
    }
  }
  return 0;
}

