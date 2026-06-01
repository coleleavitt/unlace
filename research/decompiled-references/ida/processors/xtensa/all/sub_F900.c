__int64 __fastcall sub_F900(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r13
  char v3; // bp
  int v4; // r12d
  unsigned __int64 *v5; // rax
  __int64 v6; // rax
  int v8; // edx
  int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // [rsp+14h] [rbp-1C4h]
  __int64 v13; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v14; // [rsp+30h] [rbp-1A8h]
  __int64 v15; // [rsp+40h] [rbp-198h]
  __int64 v16; // [rsp+48h] [rbp-190h]
  __int64 v17; // [rsp+50h] [rbp-188h]
  char v18; // [rsp+58h] [rbp-180h] BYREF
  char v19; // [rsp+59h] [rbp-17Fh]
  unsigned __int16 v20; // [rsp+5Eh] [rbp-17Ah]
  char v21; // [rsp+81h] [rbp-157h]
  __int16 v22; // [rsp+86h] [rbp-152h]
  int v23; // [rsp+88h] [rbp-150h]
  unsigned __int16 v24; // [rsp+AEh] [rbp-12Ah]
  __int64 v25; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v26; // [rsp+198h] [rbp-40h] BYREF

  v26 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = *a2;
    if ( *a2 < a2[1] )
    {
      v3 = 0;
      v4 = 0;
      v12 = 0;
      do
      {
        v15 = -1;
        v5 = (unsigned __int64 *)&v18;
        v16 = 0;
        v17 = 0;
        v14 = -1;
        do
        {
          *(_WORD *)v5 = 0;
          v5 += 5;
          *((_WORD *)v5 - 19) = 0;
          *((_WORD *)v5 - 18) = 0;
          *((_DWORD *)v5 - 2) = 0;
          *((_WORD *)v5 - 17) = 0;
          *((_OWORD *)v5 - 2) = 0;
          *(v5 - 2) = 0;
        }
        while ( &v26 != v5 );
        decode_insn();
        v6 = WORD1(v16);
        if ( !WORD1(v16) )
          return 0;
        if ( (_WORD)v16 == 66 )
        {
          if ( v19 != 1 )
            goto LABEL_10;
          v8 = *(_DWORD *)(a1 + 592);
          if ( v8 == 1 )
          {
            v9 = 7;
          }
          else
          {
            if ( v8 != 2 )
              goto LABEL_10;
            v9 = 15;
          }
          if ( v9 == v20 && v21 == 1 && v22 == 1 )
          {
            if ( v4 > 0 )
              goto LABEL_29;
            v3 = 1;
            goto LABEL_13;
          }
        }
        else if ( (unsigned __int16)(v16 - 3) > 1u )
        {
          if ( (_WORD)v16 == 43 )
          {
            if ( v19 == 1 && v20 == 1 && v21 == 5 )
              v4 = v23;
          }
          else if ( (_WORD)v16 == 104
                 && v19 == 1
                 && v20 == 1
                 && v21 == 1
                 && v22 == 1
                 && sub_F5C0(a1, &v13, v15, v24) != -1 )
          {
            v4 = v13;
          }
        }
        else if ( v19 == 1 && v20 == 1 && v21 == 1 && v22 == 1 )
        {
          v11 = v12 - v25;
          if ( v25 >= 0 )
            v11 = v12;
          v12 = v11;
        }
LABEL_10:
        if ( v4 <= 0 )
        {
          v6 = WORD1(v16);
        }
        else
        {
          if ( (unsigned __int8)v3 | (v12 > 0) )
          {
            if ( v3 )
LABEL_29:
              v10 = a2[2] | 0x110;
            else
              v10 = a2[2] & 0xFFFFFFFFFFFFFEEFLL;
            a2[2] = v10;
            return add_frame();
          }
          v6 = WORD1(v16);
          v3 = 0;
        }
LABEL_13:
        v2 += v6;
      }
      while ( v2 < a2[1] );
    }
  }
  return 0;
}

