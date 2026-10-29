char __fastcall sub_4AF30(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  char result; // al
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // dl
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm1
  int v13; // edx
  __m128i v14; // xmm0
  __m128i v15; // xmm2
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  __m128i v17[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v2 = *(unsigned __int16 *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  if ( (_WORD)v2 == 92 )
  {
LABEL_8:
    memset(v17, 0, sizeof(v17));
    LODWORD(v18) = 0;
    result = sub_4AC90(a1, &v16, v17);
    if ( result )
    {
      result = 0;
      if ( !v16 )
        return set_moved_jpt();
    }
    return result;
  }
  if ( (unsigned __int16)v2 <= 0x5Cu )
  {
    switch ( v2 )
    {
      case 6:
        goto LABEL_8;
      case 7:
        if ( *(_BYTE *)(a1 + 97) != 5 )
          return 0;
        v6 = *(_QWORD *)(a1 + 104);
        if ( v6 == 63 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
            return 0;
          v4 = 0;
        }
        else if ( v6 > 0x3F )
        {
          if ( v6 == 255 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
              return 0;
            v4 = 0;
          }
          else if ( v6 == 0xFFFF )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
              return 0;
            v4 = 0;
          }
          else
          {
            if ( v6 != 127 || (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
              return 0;
            v4 = 0;
          }
        }
        else if ( v6 == 15 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
            return 0;
          v4 = 0;
        }
        else if ( v6 > 0xF )
        {
          if ( v6 != 31 || (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
            return 0;
          v4 = 0;
        }
        else if ( v6 == 3 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
            return 0;
          v4 = 0;
        }
        else
        {
          if ( v6 != 7 || (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
            return 0;
          v4 = 0;
        }
LABEL_17:
        v5 = *(_BYTE *)(a1 + 61);
        if ( v5 > 2u && v5 != 7 )
          return 0;
        break;
      case 19:
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
          return 0;
        v4 = 1;
        goto LABEL_17;
      case 20:
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
          return 0;
        v4 = 1;
        goto LABEL_17;
      case 21:
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
          return 0;
        v4 = 1;
        goto LABEL_17;
      default:
        return 0;
    }
    goto LABEL_19;
  }
  if ( (_WORD)v2 == 126 )
  {
LABEL_44:
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
      return 0;
  }
  else
  {
    if ( (unsigned __int16)v2 <= 0x7Eu )
    {
      if ( (_WORD)v2 == 122 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56);
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
          return 0;
        v4 = 0;
        goto LABEL_38;
      }
      if ( (_WORD)v2 != 125 )
        return 0;
      goto LABEL_47;
    }
    if ( (_WORD)v2 != 214 )
    {
      if ( (_WORD)v2 != 594 )
      {
        if ( (_WORD)v2 == 209 )
          goto LABEL_8;
        return 0;
      }
LABEL_47:
      if ( (unsigned __int8)(*(_BYTE *)(a1 + 57) - 1) > 3u )
        return 0;
      v4 = 1;
      goto LABEL_38;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, a1 + 96)
      || !a2[1] )
    {
      return 0;
    }
    v9 = 0;
    while ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
               a1,
               *a2 + 40 * v9,
               a1 + 56) )
    {
      if ( (unsigned __int64)++v9 >= a2[1] )
        goto LABEL_54;
    }
    if ( (_DWORD)v9 != -1 )
      goto LABEL_44;
LABEL_54:
    if ( !a2[1] )
      return 0;
    v10 = 0;
    while ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
               a1,
               *a2 + 40 * v10,
               a1 + 96) )
    {
      if ( (unsigned __int64)++v10 >= a2[1] )
        return 0;
    }
    if ( (_DWORD)v10 == -1 )
      return 0;
    v11 = *(_QWORD *)(a1 + 88);
    v12 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v13 = *(_DWORD *)(a1 + 128);
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a1 + 96));
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 72));
    v15 = _mm_loadu_si128((const __m128i *)(a1 + 112));
    v18 = v11;
    *(_DWORD *)(a1 + 128) = v11;
    LOBYTE(v11) = *(_BYTE *)(a1 + 57);
    *(_DWORD *)(a1 + 88) = v13;
    v17[0] = v12;
    v17[1] = v14;
    *(__m128i *)(a1 + 72) = v15;
    *(__m128i *)(a1 + 96) = v12;
    *(__m128i *)(a1 + 112) = v14;
    if ( (unsigned __int8)(v11 - 1) > 3u )
      return 0;
  }
  v4 = 0;
LABEL_38:
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 97) - 1) > 3u )
    return 0;
  v7 = *(_BYTE *)(a1 + 61);
  if ( v7 > 2u && v7 != 7 )
    return 0;
  v8 = *(_BYTE *)(a1 + 101);
  if ( v8 > 2u && v8 != 7 )
    return 0;
LABEL_19:
  if ( (unsigned __int8)set_moved_jpt() )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 192LL))(a1, v4);
  return 1;
}

