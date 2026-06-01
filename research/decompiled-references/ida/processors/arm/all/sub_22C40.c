__int64 __fastcall sub_22C40(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 *v3; // rax
  int v4; // ebx
  char v5; // r15
  int v6; // r13d
  char v7; // al
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rbx
  int v12; // eax
  __int128 v13; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-198h]
  __int64 v15; // [rsp+18h] [rbp-190h]
  __int64 v16; // [rsp+20h] [rbp-188h]
  char v17; // [rsp+28h] [rbp-180h] BYREF
  __int16 v18; // [rsp+2Eh] [rbp-17Ah]
  unsigned __int64 v19; // [rsp+168h] [rbp-40h] BYREF

  v19 = __readfsqword(0x28u);
  v3 = (unsigned __int64 *)&v17;
  v13 = -1;
  v14 = -1;
  v15 = 0;
  v16 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( &v19 != v3 );
  v4 = 0;
  v5 = 0;
  v6 = a2 + 2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( decode_prev_insn() == -1 )
        return -1;
      if ( v4 )
        break;
      if ( (_WORD)v15 == 42 )
      {
        v4 = bitcount();
        if ( v4 != 1 )
          return -1;
        v5 = 1;
        v6 = 5;
      }
      else
      {
        v7 = sub_21C20((__int64)&v13);
        v8 = v14;
        if ( v7 )
          goto LABEL_15;
        v4 = 1;
      }
    }
    v9 = sub_21C20((__int64)&v13);
    v8 = v14;
    if ( v9 )
      break;
    if ( ++v4 >= v6 )
      return -1;
  }
LABEL_15:
  if ( v5 )
  {
    if ( decode_prev_insn() == -1 )
      return -1;
    if ( (_WORD)v15 != 43 )
      return -1;
    v12 = bitcount();
    v8 = v14;
    if ( v12 != 1 )
      return -1;
  }
  v10 = v8;
  if ( a2 && decode_prev_insn() != -1 && (_WORD)v15 == 910 && (v18 & 0xFFFD) == 1 )
    return v14;
  return v10;
}
