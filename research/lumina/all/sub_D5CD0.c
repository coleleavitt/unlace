unsigned __int64 __fastcall sub_D5CD0(char *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  char *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int16 v11; // ax
  __int16 v12; // ax
  bool v13; // di
  char v14; // al
  __int16 i; // ax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  __int16 j; // ax
  int v21; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-30h]

  v4 = 1;
  v6 = a1;
  v22 = __readfsqword(0x28u);
  v7 = *a1;
  if ( *a1 )
  {
    do
    {
      v8 = 0;
      if ( (unsigned int)(v7 - 48) > 9 )
      {
        v12 = 0;
        goto LABEL_7;
      }
      do
      {
        ++v6;
        v8 = v7 + 10 * v8 - 48;
        v7 = *v6;
      }
      while ( (unsigned int)(v7 - 48) <= 9 );
      v9 = v8;
      if ( v8 <= 7 )
      {
        v12 = 0;
        if ( v8 <= 1uLL )
          goto LABEL_7;
        for ( i = 40; ; i -= 10 )
        {
          v9 *= 2LL;
          if ( v9 > 7 )
            break;
        }
        v11 = i - 20;
      }
      else
      {
        _BitScanReverse64(&v10, v8);
        v9 = (unsigned __int64)v8 >> (60 - ((unsigned __int8)v10 ^ 0x3Fu));
        v11 = 10 * (60 - (v10 ^ 0x3F)) + 30;
      }
      v12 = word_1BACD0[v9 & 7] + v11;
LABEL_7:
      *(_WORD *)(a3 + 2 * v4 - 2) = v12;
      v7 = *v6;
      if ( *v6 == 32 )
        v7 = *++v6;
      v13 = a2 > (int)v4++;
    }
    while ( (_BYTE)v7 != 0 && v13 );
  }
  *(_BYTE *)(a4 + 99) &= 0xBBu;
  v14 = *v6;
LABEL_11:
  if ( v14 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)sub_C83C0("unordered*", v6, byte_1BEB68, 0x5Bu) )
      {
        *(_BYTE *)(a4 + 99) |= 4u;
        goto LABEL_15;
      }
      if ( !(unsigned int)sub_C83C0("sz=[0-9]*", v6, byte_1BEB68, 0x5Bu) )
        break;
      if ( !(unsigned int)sub_C83C0("noskipscan*", v6, byte_1BEB68, 0x5Bu) )
        *(_BYTE *)(a4 + 99) |= 0x40u;
LABEL_15:
      while ( 1 )
      {
        v14 = *v6;
        if ( (*v6 & 0xDF) == 0 )
          break;
        ++v6;
      }
      if ( v14 != 32 )
        goto LABEL_11;
      do
        ++v6;
      while ( *v6 == 32 );
      if ( !*v6 )
        return __readfsqword(0x28u) ^ v22;
    }
    v21 = 0;
    sub_C6480((unsigned __int8 *)v6 + 3, &v21);
    if ( v21 <= 1 )
    {
      v17 = 2;
    }
    else
    {
      v17 = v21;
      if ( v21 > 7 )
      {
        _BitScanReverse64(&v18, v21);
        v17 = (unsigned __int64)v21 >> (60 - ((unsigned __int8)v18 ^ 0x3Fu));
        v19 = 10 * (60 - (v18 ^ 0x3F)) + 30;
LABEL_29:
        *(_WORD *)(a4 + 92) = word_1BACD0[v17 & 7] + v19;
        goto LABEL_15;
      }
    }
    for ( j = 40; ; j -= 10 )
    {
      v17 *= 2LL;
      if ( v17 > 7 )
        break;
    }
    v19 = j - 20;
    goto LABEL_29;
  }
  return __readfsqword(0x28u) ^ v22;
}
