__int64 __fastcall sub_2D040(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4, int a5, _QWORD *a6)
{
  unsigned int v6; // r12d
  unsigned __int64 *v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r13
  unsigned __int64 insn; // r14
  int v12; // ecx
  __int64 v13; // rcx
  __int128 v16; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-198h]
  __int64 v18; // [rsp+38h] [rbp-190h]
  __int64 v19; // [rsp+40h] [rbp-188h]
  char v20; // [rsp+48h] [rbp-180h] BYREF
  char v21; // [rsp+49h] [rbp-17Fh]
  unsigned __int16 v22; // [rsp+4Eh] [rbp-17Ah]
  char v23; // [rsp+71h] [rbp-157h]
  unsigned __int16 v24; // [rsp+76h] [rbp-152h]
  __int64 v25; // [rsp+80h] [rbp-148h]
  unsigned __int64 v26; // [rsp+188h] [rbp-40h] BYREF

  v6 = a4;
  v26 = __readfsqword(0x28u);
  if ( a6 )
    *a6 = 0;
  if ( a4 != 4 && (a5 == -1 || a4 != a5) && a3 != -1 && a2 < a3 )
  {
    v17 = -1;
    v8 = (unsigned __int64 *)&v20;
    v18 = 0;
    v19 = 0;
    v16 = -1;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 5;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
    }
    while ( &v26 != v8 );
    v9 = a4;
    v10 = 0;
    do
    {
      insn = decode_prev_insn();
      if ( insn == -1 )
        return v6;
      if ( (_WORD)v18 == 122 )
      {
        if ( v21 == 1 && v9 == v22 )
        {
          if ( v23 != 1 )
            return v6;
          v9 = v24;
          if ( v24 == 4 || a5 == v24 )
          {
            if ( a6 )
              *a6 = v10;
            return v9;
          }
        }
      }
      else
      {
        if ( (unsigned __int8)sub_679F0(a1, &v16, v9, 0.0) )
        {
          if ( (debug & 8) != 0 )
            sub_234B0((__int64)"%a destroys reg:%d\n", 0.0, v17);
          return v6;
        }
        if ( (_WORD)v18 == 140 )
          goto LABEL_25;
        if ( (unsigned __int16)v18 <= 0x8Cu )
        {
          if ( (_WORD)v18 == 6 )
          {
LABEL_26:
            if ( v21 == 1 && v22 == 4 && v23 == 5 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
              {
                v13 = v10 - v25;
                if ( (_WORD)v18 != 209 )
                  v13 = v10 + v25;
                v10 = v13;
              }
              else
              {
                v12 = v10 + v25;
                LODWORD(v10) = v10 - v25;
                if ( (_WORD)v18 != 209 )
                  LODWORD(v10) = v12;
                v10 = (int)v10;
              }
            }
            continue;
          }
          if ( (_WORD)v18 == 134 )
LABEL_25:
            v10 -= (int)sub_23C00((__int64)&v16);
        }
        else
        {
          switch ( (_WORD)v18 )
          {
            case 0x95:
              goto LABEL_22;
            case 0xD1:
              goto LABEL_26;
            case 0x8F:
LABEL_22:
              v10 += (int)sub_23C00((__int64)&v16);
              break;
          }
        }
      }
    }
    while ( a2 < insn );
  }
  return v6;
}

