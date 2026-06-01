__int64 __fastcall sub_1C9C0(char **a1, signed int a2, int a3, __int64 a4)
{
  int v6; // esi
  char *v7; // rax
  __int16 v10; // ax
  int v11; // edi
  unsigned __int8 v12; // dl
  __int64 v13; // rcx
  int v14; // edx
  unsigned __int8 v15; // dl
  char v16; // r15
  __int64 i; // rbx
  unsigned __int8 v18; // dl
  int v19; // eax
  char v20; // dl
  char v21; // al
  char *v22; // rcx
  char v23; // al
  char v24; // al
  bool v25; // dl
  int v26; // esi
  char *v27; // rdx
  int v28; // esi
  _BYTE *v29; // rcx
  char *v30; // rax
  _QWORD v31[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3;
  v7 = *a1;
  v31[1] = __readfsqword(0x28u);
  v31[0] = v7;
  if ( (*(_BYTE *)(a4 + 45) & 2) != 0 )
  {
    if ( a3 )
    {
      if ( (*v7 & 0xDF) != 0x50 )
        return 0;
      v31[0] = v7 + 1;
      v10 = word_92CA0[a2];
    }
    else
    {
      v6 = 5;
      v10 = word_92CA0[a2];
    }
    goto LABEL_7;
  }
  if ( a2 > 31 )
  {
    if ( !a3 )
    {
      if ( (*v7 & 0xDF) != 0x49 )
        return 0;
      v6 = 4;
      v31[0] = v7 + 1;
      v10 = word_92CA0[a2];
      goto LABEL_7;
    }
    if ( a3 == 7 )
    {
      if ( *(_BYTE *)(a4 + 17) <= 0xDFu )
      {
        if ( a2 != 70 )
        {
          if ( !(unsigned int)sub_1C9C0(a1, (unsigned int)(a2 + 2), 4, a4) )
          {
            v6 = 6;
            *(_BYTE *)(a4 + 21) &= ~2u;
            v10 = word_92CA0[a2];
            goto LABEL_7;
          }
          v20 = 2;
LABEL_52:
          *(_BYTE *)(a4 + 21) |= v20;
          return 1;
        }
      }
      else if ( a2 != 70 )
      {
        v6 = 4;
        v10 = word_92CA0[a2];
        goto LABEL_7;
      }
      v19 = sub_1C9C0(a1, 72, 4, a4);
      v20 = 1;
      if ( !v19 )
      {
        *(_BYTE *)(a4 + 21) &= ~1u;
        v10 = 24682;
        a2 = 70;
        v6 = 4;
        goto LABEL_7;
      }
      goto LABEL_52;
    }
  }
  v10 = word_92CA0[a2];
LABEL_7:
  while ( 2 )
  {
    v11 = 3;
    do
    {
      v12 = v10 & 0x1F;
      if ( (v10 & 0x1F) == 0x1C )
      {
        v13 = v31[0];
        if ( *(_BYTE *)v31[0] != 50 )
          return 0;
      }
      else if ( v12 > 0x1Cu )
      {
        if ( v12 != 29 )
          goto LABEL_32;
        v13 = v31[0];
        if ( *(_BYTE *)v31[0] != 56 )
          return 0;
      }
      else
      {
        if ( !v12 )
          goto LABEL_14;
        if ( v12 != 27 )
        {
LABEL_32:
          v13 = v31[0];
          v18 = v12 + 64;
          if ( v18 != *(_BYTE *)v31[0] && *(_BYTE *)v31[0] != (v18 | 0x20) )
            return 0;
          goto LABEL_13;
        }
        v13 = v31[0];
        if ( *(_BYTE *)v31[0] != 49 )
          return 0;
      }
LABEL_13:
      v31[0] = v13 + 1;
LABEL_14:
      v10 >>= 5;
      --v11;
    }
    while ( v11 );
    v14 = a2 + 1;
    if ( (v6 & 0xA) == 0 )
    {
      v10 = word_92CA0[v14];
      if ( v10 < 0 )
      {
LABEL_44:
        ++a2;
        continue;
      }
      if ( (unsigned int)(v6 - 3) > 1 )
      {
        if ( (*(_BYTE *)(a4 + 45) & 2) == 0 )
        {
          v6 |= 8u;
          a2 = (a2 - 1) & 0xFFFFFFF0;
          v10 = word_92CA0[a2];
          continue;
        }
        v21 = aBwdq[*(_BYTE *)(a4 + 16) & 3];
        v14 = *(_BYTE *)(a4 + 16) & 3;
        if ( v21 != *(_BYTE *)v31[0] && *(_BYTE *)v31[0] != ((unsigned __int8)v21 | 0x20) )
          return 0;
        v22 = (char *)++v31[0];
        if ( v6 != 1 )
          goto LABEL_59;
        goto LABEL_56;
      }
LABEL_73:
      v22 = (char *)v31[0];
      goto LABEL_59;
    }
    break;
  }
  if ( v6 != 3 )
  {
    v28 = v6 & 7;
    switch ( v28 )
    {
      case 2:
        v29 = (_BYTE *)v31[0];
        *(_WORD *)(a4 + 44) |= 0x40u;
        if ( (*v29 & 0xDF) != 0x53 )
          return 0;
        v31[0] = v29 + 1;
        if ( (v29[1] & 0xDF) == 0x42 )
        {
          v22 = v29 + 2;
          v31[0] = v22;
        }
        else
        {
          ++*(_BYTE *)(a4 + 17);
          if ( (v29[1] & 0xDF) == 0x57 )
          {
            v22 = v29 + 2;
            *(_BYTE *)(a4 + 21) &= ~2u;
            v31[0] = v22;
          }
          else
          {
            if ( (v29[1] & 0xDF) != 0x44 )
              return 0;
            v22 = v29 + 2;
            *(_BYTE *)(a4 + 21) |= 2u;
            v31[0] = v22;
          }
        }
LABEL_59:
        v24 = *v22;
        if ( *v22 == 32 || (v25 = 1, v24 == 9) )
        {
          v26 = (_DWORD)v22 + 1;
          v27 = v22 + 1;
          do
          {
            do
            {
              v31[0] = v27;
              v24 = *v27;
              v22 = v27++;
            }
            while ( v24 == 9 );
          }
          while ( v24 == 32 );
          v25 = (_DWORD)v22 - v26 == -1;
        }
        if ( !v24 || !v25 )
        {
          *a1 = v22;
          return 1;
        }
        return 0;
      case 3:
        goto LABEL_18;
      case 1:
        v22 = (char *)v31[0];
        if ( (*(_BYTE *)(a4 + 45) & 2) == 0 )
        {
          if ( (*(_BYTE *)v31[0] & 0xDF) == 0x44 )
          {
            v22 = (char *)(v31[0] + 1LL);
            *(_BYTE *)(a4 + 21) |= 2u;
            v31[0] = v22;
          }
          else if ( (*(_BYTE *)v31[0] & 0xDF) == 0x57 )
          {
            v22 = (char *)(v31[0] + 1LL);
            *(_BYTE *)(a4 + 21) &= ~2u;
            v31[0] = v22;
          }
          goto LABEL_59;
        }
LABEL_56:
        v23 = aBwdq[v14 + 1];
        if ( v23 != *v22 && *v22 != ((unsigned __int8)v23 | 0x20) )
          return 0;
        v31[0] = ++v22;
        goto LABEL_59;
    }
    goto LABEL_73;
  }
  v10 = word_92CA0[v14];
  if ( v10 < 0 )
    goto LABEL_44;
LABEL_18:
  v15 = *(_BYTE *)(a4 + 17);
  v16 = *(_BYTE *)(a4 + 19) & 0x10;
  if ( v16 )
  {
    if ( (unsigned int)sub_1C9C0(v31, byte_922C8[(v15 >> 3) & 3 | (4 * *(_BYTE *)(a4 + 16)) & 4], 6, a4) )
    {
      *a1 = (char *)v31[0];
      return 1;
    }
    return 0;
  }
  for ( i = (2 * v15) & 0x10; !(unsigned int)sub_1C9C0(v31, (unsigned int)i, 6, a4); i = (int)i + 1 )
  {
    v16 -= (word_92CA0[i] < 0x8000u) - 1;
    if ( (v16 & 7) == 0 )
      return 0;
  }
  v30 = (char *)v31[0];
  *(_BYTE *)(a4 + 17) += v16;
  *a1 = v30;
  return 1;
}
