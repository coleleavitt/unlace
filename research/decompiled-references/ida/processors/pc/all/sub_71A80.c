__int64 __fastcall sub_71A80(__int64 a1)
{
  char byte; // al
  __int64 result; // rax
  char *v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 i; // r12
  unsigned __int64 *v7; // rax
  int v8; // ecx
  __int128 v9; // [rsp+30h] [rbp-2F8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-2E8h]
  __int64 v11; // [rsp+48h] [rbp-2E0h]
  __int64 v12; // [rsp+50h] [rbp-2D8h]
  char v13; // [rsp+58h] [rbp-2D0h] BYREF
  char v14; // [rsp+59h] [rbp-2CFh]
  char v15; // [rsp+5Dh] [rbp-2CBh]
  unsigned __int16 v16; // [rsp+5Eh] [rbp-2CAh]
  char v17; // [rsp+81h] [rbp-2A7h]
  __int16 v18; // [rsp+86h] [rbp-2A2h]
  __int64 v19; // [rsp+88h] [rbp-2A0h]
  __int64 v20; // [rsp+90h] [rbp-298h]
  char v21; // [rsp+A0h] [rbp-288h]
  char v22; // [rsp+A1h] [rbp-287h]
  char v23; // [rsp+198h] [rbp-190h] BYREF
  __int128 v24; // [rsp+1A0h] [rbp-188h]
  __int64 v25; // [rsp+1B0h] [rbp-178h]
  __int64 v26; // [rsp+1B8h] [rbp-170h]
  __int64 v27; // [rsp+1C0h] [rbp-168h]
  char v28; // [rsp+1C8h] [rbp-160h] BYREF
  unsigned __int64 v29; // [rsp+308h] [rbp-20h] BYREF

  v29 = __readfsqword(0x28u);
  byte = get_byte();
  if ( byte == -112 || byte == -52 )
    return 1;
  if ( byte || (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    result = sub_718F0(a1);
    if ( (_DWORD)result && (((_BYTE)a1 + (_BYTE)result) & 0xF) == 0 )
      return result;
    v10 = -1;
    v3 = &v13;
    v11 = 0;
    v12 = 0;
    v9 = -1;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 40;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *((_QWORD *)v3 - 2) = 0;
    }
    while ( &v23 != v3 );
    decode_insn();
    if ( (_WORD)v11 == 131 )
    {
      if ( v17 != v14 || v14 != 1 || v16 != v18 )
        return 0;
      v25 = -1;
      v7 = (unsigned __int64 *)&v28;
      v26 = 0;
      v27 = 0;
      v24 = -1;
      do
      {
        *(_WORD *)v7 = 0;
        v7 += 5;
        *((_WORD *)v7 - 19) = 0;
        *((_WORD *)v7 - 18) = 0;
        *((_DWORD *)v7 - 2) = 0;
        *((_WORD *)v7 - 17) = 0;
        *((_OWORD *)v7 - 2) = 0;
        *(v7 - 2) = 0;
      }
      while ( v7 != &v29 );
      decode_insn();
      if ( (unsigned __int16)(v26 - 53) <= 0x20u )
        return 0;
      return WORD1(v11);
    }
    if ( (unsigned __int16)v11 > 0x83u )
    {
      if ( (_WORD)v11 != 209 )
      {
        if ( (_WORD)v11 != 214 || v14 != 1 || v17 != 1 || v16 != v18 )
          return 0;
        return WORD1(v11);
      }
    }
    else if ( (_WORD)v11 != 6 )
    {
      if ( (_WORD)v11 == 122 )
      {
        if ( v17 != v14 || v14 != 1 || v16 != v18 )
          return 0;
        if ( (get_dword() & 0xFFFFFF) == 0x55FF8B )
          return 0;
      }
      else if ( (_WORD)v11 != 129 )
      {
        if ( (_WORD)v11 != 92 || v14 != 1 || v17 != 3 && (v17 != 4 || v20) )
          return 0;
        if ( v21 )
        {
          v8 = v22 & 7;
          if ( (v11 & 0x1000000000LL) != 0 && (v12 & 0x100) != 0 )
            v8 = v22 & 7 | 8;
          if ( v16 != v8 )
            return 0;
          if ( (unsigned __int16)sub_6A790((__int64)&v9, v22) != 4 )
            return 0;
        }
        else
        {
          if ( (v11 & 0x100000000000LL) == 0 )
            return 0;
          if ( v18 != v16 )
            return 0;
        }
      }
      return WORD1(v11);
    }
    if ( v14 != 1 || v17 != 5 || v19 )
      return 0;
    if ( v15 != 2 )
      return 0;
    return WORD1(v11);
  }
  v4 = a1 + 1;
  v5 = getseg();
  if ( !v5 )
    return 0;
  for ( i = *(_QWORD *)(v5 + 8); v4 < i; ++v4 )
  {
    if ( (v4 & 3) == 0 )
      break;
    if ( (get_flags_ex() & 0xD400) != 0 )
      break;
    if ( (unsigned __int8)get_fixup() )
      break;
    if ( (unsigned __int8)get_byte() )
      break;
  }
  return (unsigned int)(v4 - a1);
}
