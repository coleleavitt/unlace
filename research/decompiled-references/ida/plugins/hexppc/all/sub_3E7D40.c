__int64 __fastcall sub_3E7D40(__int64 a1, int a2)
{
  char *v3; // rax
  int v4; // edx
  __int64 result; // rax
  char *v6; // r8
  _DWORD *v7; // r9
  unsigned int v8; // r11d
  char v9; // al
  int v10; // edx
  __int64 v11; // rcx
  int v12; // esi
  int v13; // [rsp+0h] [rbp-18Ch] BYREF
  __int128 v14; // [rsp+4h] [rbp-188h]
  __int64 v15; // [rsp+14h] [rbp-178h]
  __int64 v16; // [rsp+1Ch] [rbp-170h]
  __int64 v17; // [rsp+24h] [rbp-168h]
  char v18; // [rsp+2Ch] [rbp-160h] BYREF
  char v19; // [rsp+2Dh] [rbp-15Fh] BYREF
  _QWORD v20[4]; // [rsp+16Ch] [rbp-20h] BYREF

  v20[0] = __readfsqword(0x28u);
  v15 = -1;
  v3 = &v18;
  v14 = -1;
  v16 = 0;
  v17 = 0;
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
  while ( v3 != (char *)v20 );
  v4 = decode_insn();
  result = 0;
  if ( v4 )
  {
    if ( a2 != 280 )
      goto LABEL_5;
    if ( (_WORD)v16 == 306 )
      return 2;
    result = 1;
    if ( (_WORD)v16 != 292 )
    {
LABEL_5:
      v6 = &v19;
      v7 = dword_41C140;
      v8 = 0;
      while ( 1 )
      {
        v9 = *v6;
        if ( !*v6 )
          return v8;
        if ( v9 == 4 )
          break;
        if ( v9 != 9 )
        {
          if ( v9 == 1 && *(unsigned __int16 *)(v6 + 5) == a2 )
          {
            v10 = 2;
            v11 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
            v12 = *(_DWORD *)(v11 + 104);
            if ( (unsigned __int16)v16 >= v12 && (unsigned __int16)v16 < *(int *)(v11 + 108) )
              v10 = ((*v7 & *(_DWORD *)(*(_QWORD *)(v11 + 112) + 16LL * ((unsigned __int16)v16 - v12) + 8)) == 0) + 1;
            v8 |= v10;
          }
          goto LABEL_8;
        }
        if ( *(unsigned __int16 *)(v6 + 5) == a2 || v6[31] == a2 )
        {
LABEL_14:
          v6 += 40;
          v8 |= 2u;
          ++v7;
          if ( v6 == (char *)v20 + 1 )
            return v8;
        }
        else
        {
LABEL_8:
          v6 += 40;
          ++v7;
          if ( v6 == (char *)v20 + 1 )
            return v8;
        }
      }
      if ( *(unsigned __int16 *)(v6 + 5) == a2 )
      {
        if ( !(unsigned __int8)sub_3E5AC0(&v13, nullptr, (unsigned __int16)v16) || (v13 & 2) == 0 )
          goto LABEL_14;
        v8 = 3;
      }
      goto LABEL_8;
    }
  }
  return result;
}

