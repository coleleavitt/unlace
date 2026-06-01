__int64 __fastcall sub_2730(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  __int64 result; // rax
  __int16 v4; // dx
  int v5; // r12d
  int v6; // eax
  char v7; // dl
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx

  si128 = _mm_load_si128((const __m128i *)&xmmword_54F0);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(__m128i *)(a1 + 12) = si128;
  *(_OWORD *)(a1 + 32) = 0;
  result = qlsize(a2);
  if ( (int)result >= 0 )
  {
    v4 = result;
    v5 = result;
    result = (unsigned int)(result - 512);
    *(_BYTE *)(a1 + 8) = 0;
    if ( (v4 & 0x7FFF) == 0x200 )
      v5 = result;
    if ( v5 > 0x7FFF )
    {
      sub_1E50(a1, a2);
      result = *(unsigned int *)(a1 + 16);
      if ( (((_DWORD)result - 3) & 0xFFFFFFFD) != 0 && (_DWORD)result != 8 )
      {
        if ( (unsigned int)(result - 6) <= 1 )
        {
          v10 = *(_DWORD *)a1;
          if ( (*(_DWORD *)a1 & 0x7FFF) == 0x100 )
          {
            *(_BYTE *)(a1 + 8) = 1;
            *(_DWORD *)a1 = v10 - 256;
          }
        }
        else if ( *(_BYTE *)(a1 + 39) )
        {
          v6 = *(_DWORD *)a1;
          if ( (*(_DWORD *)a1 & 0x7FFF) == 0xC00 )
          {
            *(_BYTE *)(a1 + 8) = 1;
            *(_DWORD *)a1 = v6 - 3072;
          }
        }
        v7 = *(_BYTE *)(a1 + 41);
        if ( *(_BYTE *)(a1 + 40) && (v5 & 0x7FFF) == 0x2000 )
        {
          v13 = *(_DWORD *)a1;
          *(_BYTE *)(a1 + 8) = 1;
          v14 = v13 - 0x2000;
          *(_DWORD *)a1 = v14;
          if ( v7 )
          {
LABEL_43:
            v11 = v14 - 0x2000;
            v12 = *(_BYTE *)(a1 + 42) == 0;
            *(_BYTE *)(a1 + 8) = 1;
            *(_DWORD *)a1 = v11;
            if ( v12 )
              goto LABEL_23;
LABEL_35:
            v8 = v11 - 0x2000;
            v12 = *(_BYTE *)(a1 + 43) == 0;
            *(_BYTE *)(a1 + 8) = 1;
            *(_DWORD *)a1 = v8;
            if ( !v12 )
              goto LABEL_26;
            goto LABEL_17;
          }
          if ( !*(_BYTE *)(a1 + 42) )
            goto LABEL_23;
        }
        else
        {
          if ( v7 )
          {
            if ( (v5 & 0x7FFF) != 0x2000 )
            {
              if ( *(_BYTE *)(a1 + 42) )
                goto LABEL_17;
LABEL_23:
              if ( *(_BYTE *)(a1 + 43) && (v5 & 0x7FFF) == 0x2000 )
              {
                v8 = *(_DWORD *)a1;
LABEL_26:
                *(_BYTE *)(a1 + 8) = 1;
                *(_DWORD *)a1 = v8 - 0x2000;
              }
LABEL_17:
              result = *(unsigned __int8 *)(a1 + 46);
              if ( *(_BYTE *)(a1 + 45) )
              {
                if ( (_WORD)v5 != 0xD000 )
                  goto LABEL_19;
                v15 = *(_DWORD *)a1;
                *(_BYTE *)(a1 + 8) = 1;
                v9 = v15 - 53248;
                *(_DWORD *)a1 = v15 - 53248;
                if ( !(_BYTE)result )
                  goto LABEL_19;
              }
              else
              {
                if ( !(_BYTE)result || (_WORD)v5 != 0xD000 )
                {
LABEL_19:
                  if ( *(_BYTE *)(a1 + 47) )
                  {
                    if ( (v5 & 0x3FFFF) == 0x28000 )
                    {
                      *(_DWORD *)a1 -= 163840;
                      *(_BYTE *)(a1 + 8) = 1;
                    }
                  }
                  return result;
                }
                v9 = *(_DWORD *)a1;
              }
              *(_BYTE *)(a1 + 8) = 1;
              *(_DWORD *)a1 = v9 - 53248;
              goto LABEL_19;
            }
            v14 = *(_DWORD *)a1;
            goto LABEL_43;
          }
          if ( !*(_BYTE *)(a1 + 42) )
            goto LABEL_23;
          if ( (v5 & 0x7FFF) != 0x2000 )
            goto LABEL_17;
        }
        v11 = *(_DWORD *)a1;
        goto LABEL_35;
      }
    }
  }
  return result;
}

