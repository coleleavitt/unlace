__int64 __fastcall sub_B290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r8
  unsigned __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int64 v10; // rax
  char v11; // al
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  int v17; // eax
  __m128i v18; // xmm0
  int v19; // eax
  __m128i v20; // xmm0
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx

  v5 = *(unsigned int *)(a1 + 5272);
  if ( (_DWORD)v5 )
  {
    if ( !(unsigned int)sub_B160(a1, a2, a3, a4, v5, a5) )
      return *(unsigned __int16 *)(a2 + 26);
  }
  else if ( !(unsigned int)sub_9DB0(a1, a2) )
  {
    return *(unsigned __int16 *)(a2 + 26);
  }
  v7 = *(_WORD *)(a2 + 24);
  if ( (v7 & 0xFFFD) == 1 )
  {
    v8 = *(_DWORD *)(a2 + 28) & 6;
    if ( v8 == 2 )
    {
      *(_BYTE *)(a2 + 85) = 0;
    }
    else if ( v8 == 4 )
    {
      *(_BYTE *)(a2 + 85) = 1;
    }
  }
  v9 = *(_WORD *)(a1 + 5288);
  if ( (v9 & 1) != 0 )
  {
    v10 = a2 + 41;
    do
    {
      if ( *(_BYTE *)v10 == 2 )
        *(_QWORD *)(v10 + 23) = 0;
      v10 += 40;
    }
    while ( a2 + 201 != v10 );
    if ( v7 == 21 )
    {
      if ( *(_BYTE *)(a2 + 41) == 5 && !*(_QWORD *)(a2 + 48) )
      {
        v14 = *(_DWORD *)(a2 + 28);
        if ( (v14 & 0x100) != 0 )
        {
          v15 = _mm_loadu_si128((const __m128i *)(a2 + 80));
          BYTE1(v14) &= ~1u;
          *(_DWORD *)(a2 + 28) = v14;
          *(__m128i *)(a2 + 40) = v15;
          v16 = _mm_loadu_si128((const __m128i *)(a2 + 96));
          *(_WORD *)(a2 + 24) = 55;
          v17 = *(_DWORD *)(a2 + 112);
          *(__m128i *)(a2 + 56) = v16;
          v18 = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(_DWORD *)(a2 + 72) = v17;
          v19 = *(_DWORD *)(a2 + 152);
          *(__m128i *)(a2 + 80) = v18;
          v20 = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(_DWORD *)(a2 + 112) = v19;
          *(_BYTE *)(a2 + 121) = 0;
          *(__m128i *)(a2 + 96) = v20;
          v9 = *(_WORD *)(a1 + 5288);
          goto LABEL_10;
        }
      }
      goto LABEL_22;
    }
    if ( v7 > 0x15u )
    {
      if ( v7 > 0x31u )
      {
        if ( (unsigned __int16)(v7 - 66) > 2u )
          goto LABEL_22;
      }
      else if ( v7 <= 0x2Eu )
      {
        if ( v7 == 27
          && *(_BYTE *)(a2 + 41) == 5
          && !*(_QWORD *)(a2 + 48)
          && *(_BYTE *)(a2 + 81) == 5
          && !*(_QWORD *)(a2 + 88) )
        {
          *(_WORD *)(a2 + 24) = 28;
          *(_BYTE *)(a2 + 41) = 0;
          *(_BYTE *)(a2 + 81) = 0;
        }
        goto LABEL_22;
      }
      if ( *(_BYTE *)(a2 + 121) == 5 )
      {
        v13 = 1LL << ((unsigned __int8)v7 - 47);
        if ( (v13 & 0x200004) != 0 )
        {
          *(_QWORD *)(a2 + 128) *= 8LL;
        }
        else if ( (v13 & 0x100002) != 0 )
        {
          *(_QWORD *)(a2 + 128) *= 4LL;
        }
        else if ( (v13 & 0x80001) != 0 )
        {
          *(_QWORD *)(a2 + 128) *= 2LL;
        }
        if ( v7 > 0x31u )
          *(_WORD *)(a2 + 24) = 21;
        else
          *(_WORD *)(a2 + 24) = 19;
        v9 = *(_WORD *)(a1 + 5288);
        goto LABEL_10;
      }
LABEL_22:
      v9 = *(_WORD *)(a1 + 5288);
      goto LABEL_10;
    }
    if ( v7 == 1 )
      goto LABEL_51;
    if ( v7 != 3 )
      goto LABEL_22;
    if ( *(_DWORD *)(a2 + 28) == 8 )
    {
      if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1C000000000400LL )
      {
        if ( *(_BYTE *)(a2 + 112) )
        {
          if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFF0000FFFFLL) == 0x1000000001LL )
            goto LABEL_67;
        }
        else
        {
          if ( *(_QWORD *)(a2 + 96) == -4 )
          {
            *(_WORD *)(a2 + 24) = 45;
            *(_DWORD *)(a2 + 28) = 0;
            *(_BYTE *)(a2 + 81) = 0;
            v9 = *(_WORD *)(a1 + 5288);
            goto LABEL_10;
          }
          if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFF0000FFFFLL) == 0x1000000001LL )
          {
LABEL_53:
            if ( *(_QWORD *)(a2 + 96) == 4 )
            {
              *(_WORD *)(a2 + 24) = 44;
              *(_DWORD *)(a2 + 28) = 0;
              *(_BYTE *)(a2 + 81) = 0;
              v9 = *(_WORD *)(a1 + 5288);
              goto LABEL_10;
            }
            v11 = *(_BYTE *)(a2 + 81);
            if ( v11 == 4 )
            {
LABEL_46:
              v21 = *(_DWORD *)(a2 + 28);
              if ( (~(_BYTE)v21 & 0x18) == 0 )
              {
                if ( (v21 & 6) == 4 )
                {
                  v22 = 2;
                }
                else if ( (v21 & 6) != 0 )
                {
                  v22 = 1;
                }
                else
                {
                  v22 = 4;
                }
                v23 = *(_QWORD *)(a2 + 96) * v22;
                *(_DWORD *)(a2 + 28) = v21 & 0xFFFFFFE7;
                *(_QWORD *)(a2 + 96) = v23;
                v9 = *(_WORD *)(a1 + 5288);
                goto LABEL_10;
              }
              goto LABEL_22;
            }
            goto LABEL_29;
          }
        }
      }
    }
    else
    {
LABEL_51:
      if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFF0000FFFFLL) == 0x1000000001LL
        && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1C000000000400LL )
      {
        if ( !*(_BYTE *)(a2 + 112) )
          goto LABEL_53;
LABEL_67:
        v11 = *(_BYTE *)(a2 + 81);
        if ( v11 == 4 )
          goto LABEL_22;
        goto LABEL_29;
      }
    }
    v11 = *(_BYTE *)(a2 + 81);
    if ( v11 == 4 )
    {
      if ( *(_BYTE *)(a2 + 112) )
        goto LABEL_22;
      goto LABEL_46;
    }
LABEL_29:
    if ( v11 == 2 )
    {
      v12 = *(_DWORD *)(a2 + 28);
      if ( (~(_BYTE)v12 & 0x18) == 0 )
      {
        *(_QWORD *)(a2 + 104) = 0;
        *(_DWORD *)(a2 + 28) = v12 & 0xFFFFFFE7;
        v9 = *(_WORD *)(a1 + 5288);
        goto LABEL_10;
      }
    }
    goto LABEL_22;
  }
LABEL_10:
  if ( (v9 & 2) == 0 )
    return *(unsigned __int16 *)(a2 + 26);
  sub_B200(a1, a2);
  return *(unsigned __int16 *)(a2 + 26);
}

