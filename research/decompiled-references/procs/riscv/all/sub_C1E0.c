__int64 __fastcall sub_C1E0(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int16 v7; // si
  __int16 v8; // cx
  __int16 v9; // cx
  bool v10; // cf
  unsigned __int16 v11; // cx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 **v14; // rdi
  __int64 v15; // rax
  __int64 **v16; // rdi
  unsigned int v17; // ecx
  __int16 v19; // si
  char v20; // si
  __int16 v21; // ax
  __int16 v22; // si
  __int16 v23; // cx
  char v24; // al
  __int16 v25; // ax
  __int16 v26; // dx
  __int16 v27; // si

  switch ( a4 )
  {
    case 0:
      v17 = 0;
      if ( !a3 )
        return v17;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 2;
      *(_WORD *)(a2 + 46) = ((a3 >> 2) & 7) + 8;
      v25 = ((a3 >> 2) & 8 | (a3 >> 4) & 4) + ((a3 >> 7) & 0x30 | (a3 >> 1) & 0x3C0);
      *(_WORD *)(a2 + 86) = 2;
      *(_WORD *)(a2 + 24) = 19;
      v26 = *(_WORD *)(a2 + 34);
      *(_QWORD *)(a2 + 128) = v25;
      LOBYTE(v26) = (v26 & 4) == 0 ? 2 : 7;
      *(_BYTE *)(a2 + 45) = v26;
      *(_BYTE *)(a2 + 85) = v26;
      return *(unsigned __int16 *)(a2 + 26);
    case 1:
    case 5:
      v17 = 0;
      if ( (*(_BYTE *)(a1 + 468) & 8) != 0 )
        return v17;
      v22 = 118;
      v23 = 118;
      if ( a4 == 1 )
      {
        v22 = 117;
        v23 = 117;
      }
      *(_WORD *)(a2 + 24) = v23;
      v24 = *(_BYTE *)(a1 + 468);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 4;
      v11 = v22;
      *(_WORD *)(a2 + 46) = (char)(32 * ((v24 & 8) == 0) + ((a3 >> 2) & 7) + 8);
      v12 = a2 + 80;
      goto LABEL_5;
    case 2:
    case 6:
      v7 = 18;
      v8 = 18;
      if ( a4 == 2 )
      {
        v7 = 13;
        v8 = 13;
      }
      *(_WORD *)(a2 + 24) = v8;
      v9 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 41) = 1;
      v10 = (v9 & 4) == 0;
      v11 = v7;
      *(_WORD *)(a2 + 46) = ((a3 >> 2) & 7) + 8;
      *(_BYTE *)(a2 + 45) = v10 ? 2 : 7;
      v12 = a2 + 80;
      goto LABEL_5;
    case 3:
    case 7:
      if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
      {
        v11 = 50;
        v19 = 50;
        if ( a4 == 3 )
        {
          v11 = 49;
          v19 = 49;
        }
        *(_WORD *)(a2 + 24) = v19;
        v20 = 7;
        v21 = ((a3 >> 2) & 7) + 8;
      }
      else
      {
        v17 = 0;
        if ( (*(_BYTE *)(a1 + 468) & 8) != 0 )
          return v17;
        v11 = 94;
        v27 = 94;
        if ( a4 == 3 )
        {
          v11 = 93;
          v27 = 93;
        }
        *(_WORD *)(a2 + 24) = v27;
        v20 = 3;
        v21 = (char)(32 * ((*(_BYTE *)(a1 + 468) & 8) == 0) + ((a3 >> 2) & 7) + 8);
      }
      *(_BYTE *)(a2 + 45) = v20;
      v12 = a2 + 80;
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = v21;
LABEL_5:
      sub_BE50(a1, v12, a3, v11);
      v13 = *(_QWORD *)(a1 + 504);
      if ( v13 )
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
        v14 = *(__int64 ***)(a1 + 504);
        if ( v14 )
        {
          sub_BAE0(v14, 7, 7, 5);
          v15 = *(_QWORD *)(a1 + 504);
          if ( v15 )
          {
            *(_BYTE *)(v15 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
            v16 = *(__int64 ***)(a1 + 504);
            if ( v16 )
              sub_BAE0(v16, 13, 13, 10);
          }
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 4:
      return 0;
    default:
      return *(unsigned __int16 *)(a2 + 26);
  }
}
