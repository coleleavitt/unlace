__int64 __fastcall sub_4960(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 result; // rax
  int v6; // r9d
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r11
  int v10; // r10d
  char v11; // r8
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edi
  int v15; // r9d
  char v16; // di
  __int16 v17; // cx
  __int64 v18; // r8
  __int64 v19; // rdi
  char v20; // r8
  __int64 v21; // r8
  char v22; // r10
  __int64 v23; // r9

  LOBYTE(result) = a3;
  v6 = a2 >> 6;
  v7 = (a2 >> 6) & 0xF;
  v8 = a1 + 40LL * (unsigned __int8)(a3 + 1);
  if ( v7 != 4 )
  {
    if ( v7 == 12 )
    {
      v18 = a1 + 40LL * a3;
      *(_BYTE *)(v18 + 41) = 3;
      *(_WORD *)(v18 + 46) = 9;
      *(_BYTE *)(v18 + 73) = 12;
      v11 = 6;
    }
    else
    {
      v9 = a1 + 40LL * a3;
      *(_WORD *)(v9 + 46) = ((v6 & 8) != 0) + 8;
      v10 = (a2 >> 6) & 3;
      if ( (v6 & 3) != 0 )
      {
        if ( (v6 & 4) != 0 )
        {
          v21 = 4;
          if ( v10 != 2 )
            v21 = 4LL * (v10 != 3) + 2;
          v22 = 2;
        }
        else
        {
          v22 = 1;
          v21 = (2 * (_BYTE)v7) & 6;
        }
        v23 = a1 + 40LL * a3;
        *(_QWORD *)(v23 + 48) = v21;
        v11 = 7;
        *(_BYTE *)(v23 + 73) = v22;
        *(_BYTE *)(v23 + 41) = 3;
      }
      else
      {
        *(_BYTE *)(v9 + 41) = 3;
        v11 = 1;
      }
    }
    v12 = a1 + 40LL * a3;
    *(_BYTE *)(v12 + 72) = v11;
    *(_BYTE *)(v12 + 45) = 0;
    if ( (unsigned __int16)(*(_WORD *)(a1 + 24) - 85) <= 1u )
    {
      LOBYTE(result) = a3 + 1;
      v8 += 40;
    }
    else
    {
      *(_BYTE *)(v8 + 41) = 1;
      v8 += 80;
      *(_BYTE *)(v8 - 35) = 1;
      *(_WORD *)(v8 - 34) = ((a2 >> 12) & 3) + 4;
      LOBYTE(result) = a3 + 2;
    }
  }
  v13 = a2 >> 2;
  v14 = (a2 >> 2) & 0xF;
  if ( v14 != 4 )
  {
    if ( v14 == 12 )
    {
      *(_BYTE *)(v8 + 1) = 3;
      *(_WORD *)(v8 + 6) = 11;
      v16 = 6;
      *(_BYTE *)(v8 + 33) = 12;
    }
    else
    {
      *(_WORD *)(v8 + 6) = ((v13 & 8) != 0) + 10;
      v15 = (a2 >> 2) & 3;
      if ( (v13 & 3) != 0 )
      {
        if ( (v13 & 4) != 0 )
        {
          v19 = 4;
          if ( v15 != 2 )
            v19 = 4LL * (v15 != 3) + 2;
          v20 = 2;
        }
        else
        {
          v20 = 1;
          v19 = (2 * (_BYTE)v14) & 6;
        }
        *(_QWORD *)(v8 + 8) = v19;
        v16 = 7;
        *(_BYTE *)(v8 + 33) = v20;
        *(_BYTE *)(v8 + 1) = 3;
      }
      else
      {
        *(_BYTE *)(v8 + 1) = 3;
        v16 = 1;
      }
    }
    *(_BYTE *)(v8 + 32) = v16;
    *(_BYTE *)(v8 + 5) = 0;
    *(_BYTE *)(v8 + 41) = 1;
    v17 = *(_WORD *)(a1 + 24);
    *(_BYTE *)(v8 + 45) = 1;
    LOBYTE(result) = result + 2;
    *(_WORD *)(v8 + 46) = ((a2 >> ((unsigned __int16)(v17 - 85) < 2u ? 12 : 10)) & 3) + 4;
  }
  return (unsigned __int8)result;
}

