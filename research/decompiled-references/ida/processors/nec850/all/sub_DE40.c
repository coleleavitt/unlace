__int64 __fastcall sub_DE40(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rax
  unsigned __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 *v12; // rax
  __int64 i; // [rsp+10h] [rbp-1C8h]
  __int64 v15; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v16; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-198h]
  __int64 v18; // [rsp+48h] [rbp-190h]
  __int64 v19; // [rsp+50h] [rbp-188h]
  _BYTE v20[16]; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-170h]
  unsigned __int64 v22; // [rsp+198h] [rbp-40h] BYREF

  v22 = __readfsqword(0x28u);
  if ( a3 == 1 && (*(_BYTE *)(a1 + 184) & 1) != 0 || a3 == a4 )
    return 0;
  v6 = getseg(*(_QWORD *)(a2 + 16));
  v7 = (unsigned __int64 *)v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(unsigned __int16 *)(a2 + 26);
    if ( v10 < v8 - v9 )
    {
      v11 = v10 + v9;
      for ( i = 16; i; --i )
      {
        v12 = (unsigned __int64 *)v20;
        v17 = -1;
        v18 = 0;
        v19 = 0;
        v16 = -1;
        do
        {
          *(_WORD *)v12 = 0;
          v12 += 5;
          *((_WORD *)v12 - 19) = 0;
          *((_WORD *)v12 - 18) = 0;
          *((_DWORD *)v12 - 2) = 0;
          *((_WORD *)v12 - 17) = 0;
          *((_OWORD *)v12 - 2) = 0;
          *(v12 - 2) = 0;
        }
        while ( &v22 != v12 );
        if ( (int)decode_insn(&v16, v11, 0.0) <= 0 )
          break;
        if ( (unsigned __int8)sub_F4E0(&v16) )
        {
          if ( (_WORD)v18 != 57 && (_WORD)v18 != 43 )
            return 1;
          if ( v20[1] != 7 )
            return 1;
          v11 = v21;
          if ( v21 < *v7 || v21 >= v7[1] )
            return 1;
        }
        else
        {
          v15 = 0;
          sub_10660(a1, &v15, &v16);
          if ( a3 > 0x1F )
          {
            sub_10260(a1, &v15, &v16);
          }
          else
          {
            if ( (v15 & (1LL << a3)) != 0 )
              return 1;
            sub_10260(a1, &v15, &v16);
            if ( (v15 & (1LL << a3)) != 0 )
              return 0;
          }
          if ( WORD1(v18) >= v8 - v11 )
            return 1;
          v11 += WORD1(v18);
        }
      }
    }
  }
  return 1;
}

