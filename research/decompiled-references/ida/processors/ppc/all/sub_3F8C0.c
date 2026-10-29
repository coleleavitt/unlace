__int64 __fastcall sub_3F8C0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  char v3; // r12
  __int64 result; // rax
  __int64 v5; // r13
  unsigned __int64 *v6; // rax
  char v7; // al
  __int64 v8; // [rsp+8h] [rbp-1A0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-198h] BYREF
  __int64 v10; // [rsp+20h] [rbp-188h]
  __int64 v11; // [rsp+28h] [rbp-180h]
  __int64 v12; // [rsp+30h] [rbp-178h]
  char v13; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+178h] [rbp-30h] BYREF

  v2 = *(_WORD *)(a2 + 24);
  v14 = __readfsqword(0x28u);
  if ( v2 == 209 )
    goto LABEL_34;
  if ( v2 > 0xD1u )
  {
    if ( v2 > 0x11Bu )
    {
      if ( v2 <= 0x484u )
      {
        v3 = 0;
        if ( v2 <= 0x482u )
          return 0;
      }
      else
      {
        v3 = 1;
        if ( (unsigned __int16)(v2 - 1181) > 2u )
          return 0;
      }
      goto LABEL_15;
    }
    if ( v2 > 0x119u )
    {
      v3 = 1;
      goto LABEL_15;
    }
    if ( v2 != 210 )
      return 0;
    goto LABEL_6;
  }
  if ( v2 == 186 )
  {
LABEL_34:
    if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
      return *(_QWORD *)(a2 + 96);
    return 0;
  }
  if ( v2 <= 0xBAu )
  {
    if ( v2 > 2u )
    {
      v3 = 0;
      if ( (unsigned __int16)(v2 - 4) > 1u )
        return 0;
    }
    else
    {
      v3 = 0;
      if ( !v2 )
        return 0;
    }
    goto LABEL_15;
  }
  if ( v2 != 187 )
    return 0;
LABEL_6:
  v3 = 1;
  if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 1 )
  {
    if ( (unsigned __int8)sub_5B600(a1, &v8, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a2 + 126), 0) )
    {
      result = v8;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        return (int)v8;
      return result;
    }
    return 0;
  }
LABEL_15:
  if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 1 )
    return 0;
  v5 = a2 + 40;
  if ( *(_BYTE *)(a2 + 121) )
  {
    if ( *(_WORD *)(a2 + 86) != 1 )
      return 0;
    v5 = a2 + 80;
  }
  v10 = -1;
  v6 = (unsigned __int64 *)&v13;
  v11 = 0;
  v12 = 0;
  v9 = -1;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v14 != v6 );
  if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0x10000) != 0 && decode_prev_insn(&v9, *(_QWORD *)(a2 + 16), 0.0) != -1 )
  {
    LODWORD(v8) = 1;
    if ( (unsigned int)sub_3F060(a1, (__int64)&v9, (int *)&v8, 1) != -1 && !sub_3F8C0(a1, &v9) )
      return 0;
  }
  v7 = *(_BYTE *)(v5 + 41);
  if ( v7 == 5 )
  {
    result = *(_QWORD *)(v5 + 48);
  }
  else
  {
    if ( v7 != 1 || !(unsigned __int8)sub_5B600(a1, &v8, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(v5 + 46), 0) )
      return 0;
    result = v8;
  }
  if ( v3 )
    return -result;
  return result;
}

