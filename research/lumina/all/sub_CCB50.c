__int64 __fastcall sub_CCB50(__int64 a1, char *a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  char *v5; // r9
  unsigned __int64 v6; // r11
  _BYTE *v7; // r10
  __int16 v8; // r9
  __int16 v9; // cx
  unsigned __int16 v10; // si

  result = (unsigned __int8)*a2;
  v5 = a2;
  if ( (unsigned int)result > 0x7F )
  {
    LODWORD(result) = result & 0x7F;
    do
      result = *++v5 & 0x7Fu | ((_DWORD)result << 7);
    while ( *v5 < 0 && a2 + 8 > v5 );
  }
  v6 = (unsigned __int8)v5[1];
  v7 = v5 + 1;
  if ( v6 > 0x7F )
  {
    v7 = v5 + 2;
    v6 = v5[2] & 0x7F | (unsigned __int64)(((_WORD)v6 << 7) & 0x3F80);
    if ( v5[2] < 0 )
    {
      v7 = v5 + 3;
      v6 = v5[3] & 0x7F | (v6 << 7);
      if ( v5[3] < 0 )
      {
        v7 = v5 + 4;
        v6 = v5[4] & 0x7F | (v6 << 7);
        if ( v5[4] < 0 )
        {
          v7 = v5 + 5;
          v6 = v5[5] & 0x7F | (v6 << 7);
          if ( v5[5] < 0 )
          {
            v7 = v5 + 6;
            v6 = v5[6] & 0x7F | (v6 << 7);
            if ( v5[6] < 0 )
            {
              v7 = v5 + 7;
              v6 = v5[7] & 0x7F | (v6 << 7);
              if ( v5[7] < 0 )
              {
                v7 = v5 + 8;
                v6 = v5[8] & 0x7F | (v6 << 7);
                if ( v5[8] < 0 )
                {
                  v7 = v5 + 9;
                  v6 = (unsigned __int8)v5[9] | (v6 << 8);
                }
              }
            }
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v6;
  *(_DWORD *)(a3 + 16) = result;
  *(_QWORD *)(a3 + 8) = v7 + 1;
  if ( *(unsigned __int16 *)(a1 + 14) < (unsigned int)result )
  {
    v9 = (__int16)a2;
    v10 = *(_WORD *)(a1 + 16);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) - 4;
    result = (*(_DWORD *)(a3 + 16) - (unsigned int)*(unsigned __int16 *)(a1 + 16)) / v3;
    if ( *(unsigned __int16 *)(a1 + 14) >= (int)(v10 + (*(_DWORD *)(a3 + 16) - (unsigned int)v10) % v3) )
      JUMPOUT(0xCCB40);
    *(_WORD *)(a3 + 20) = v10;
    *(_WORD *)(a3 + 22) = *(_WORD *)(a3 + 8) + v10 - v9 + 4;
  }
  else
  {
    *(_WORD *)(a3 + 20) = result;
    v8 = result + (_WORD)v7 + 1 - (_WORD)a2;
    if ( (unsigned __int16)v8 < 4u )
      v8 = 4;
    *(_WORD *)(a3 + 22) = v8;
  }
  return result;
}
