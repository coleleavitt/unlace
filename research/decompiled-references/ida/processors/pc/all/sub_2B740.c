__int64 __fastcall sub_2B740(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-490h]
  _BYTE v10[360]; // [rsp+10h] [rbp-488h] BYREF
  char v11; // [rsp+178h] [rbp-320h] BYREF
  _QWORD v12[45]; // [rsp+180h] [rbp-318h] BYREF
  _BYTE v13[16]; // [rsp+2F0h] [rbp-1A8h] BYREF
  __int64 v14; // [rsp+300h] [rbp-198h]
  __int16 v15; // [rsp+308h] [rbp-190h]
  unsigned __int16 v16; // [rsp+30Ah] [rbp-18Eh]
  __int64 v17; // [rsp+318h] [rbp-180h]
  char v18; // [rsp+341h] [rbp-157h]
  __int16 v19; // [rsp+346h] [rbp-152h]
  unsigned __int64 v20; // [rsp+458h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) == 122
    && *(_BYTE *)(a2 + 41) == 1
    && *(_WORD *)(a2 + 46) == 1
    && *(_BYTE *)(a2 + 81) == 2
    && (unsigned __int8)(*(_BYTE *)(a2 + 32) - 33) <= 1u )
  {
    if ( !(unsigned __int8)getinf_flag() )
    {
LABEL_12:
      v5 = &v10[40];
      do
      {
        *(_WORD *)v5 = 0;
        v5 += 40;
        *((_WORD *)v5 - 19) = 0;
        *((_WORD *)v5 - 18) = 0;
        *((_DWORD *)v5 - 2) = 0;
        *((_WORD *)v5 - 17) = 0;
        *((_OWORD *)v5 - 2) = 0;
        *((_QWORD *)v5 - 2) = 0;
      }
      while ( &v11 != v5 );
      v6 = 5;
      qmemcpy(v12, (const void *)a2, sizeof(v12));
      while ( 1 )
      {
        qmemcpy(v10, v12, sizeof(v10));
        if ( !(unsigned int)decode_insn() )
          return 0;
        v7 = WORD1(v12[3]) + v12[2];
        if ( LOWORD(v12[3]) == 209 || LOWORD(v12[3]) == 6 )
        {
          if ( BYTE1(v12[5]) != 1 || HIWORD(v12[5]) != 4 || BYTE1(v12[10]) != 5 )
            goto LABEL_20;
          v9 = WORD1(v12[3]) + v12[2];
          sub_22580((__int64)v13);
          if ( !(unsigned int)decode_insn() )
            return 0;
          v7 = v9;
          if ( v15 == 122 && v18 == 1 && v19 == 5 && (v17 & 0xFFFF00000000FF00LL) == 0x4000000000400LL )
            v7 = v14 + v16;
        }
        else if ( LOWORD(v12[3]) != 122
               || BYTE1(v12[10]) != 1
               || HIWORD(v12[10]) != 5
               || (v12[5] & 0xFFFF00000000FF00LL) != 0x4000000000400LL )
        {
          goto LABEL_20;
        }
        if ( v7 != -1 )
        {
          sub_29980(a1, *(_QWORD *)(a2 + 16), v7 - *(_QWORD *)(a2 + 16), 0);
          qmemcpy((void *)a2, v10, 0x168u);
          return 1;
        }
LABEL_20:
        if ( !--v6 )
          return 0;
      }
    }
    v3 = *(_BYTE *)(a2 + 32);
    if ( v3 == 34 )
    {
      v8 = *(_QWORD *)(a2 + 96);
      if ( ((v8 - 40) & 0xFFFFFFFFFFFFFFF7LL) == 0 || !v8 )
        goto LABEL_12;
    }
    else
    {
      if ( v3 != 33 )
        goto LABEL_12;
      v4 = *(_QWORD *)(a2 + 96);
      if ( v4 == 20 || v4 == -8 )
        goto LABEL_12;
    }
  }
  return 0;
}
