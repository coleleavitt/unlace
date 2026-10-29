unsigned __int64 __fastcall sub_237C0(_QWORD *a1, const char *a2, __int64 a3)
{
  __int64 v3; // rax
  const char **v4; // r14
  const char *v5; // rbx
  const char *v6; // r12
  __int128 v7; // xmm0
  __int64 v8; // rax
  char *v9; // rax
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 *v13; // rax
  const char **v14; // [rsp+0h] [rbp-358h]
  const char **v15; // [rsp+18h] [rbp-340h]
  const char *v16; // [rsp+20h] [rbp-338h] BYREF
  __int128 v17; // [rsp+28h] [rbp-330h]
  __int128 v18; // [rsp+40h] [rbp-318h]
  __int64 v19; // [rsp+50h] [rbp-308h]
  __int64 v20; // [rsp+58h] [rbp-300h]
  __int64 v21; // [rsp+60h] [rbp-2F8h]
  char v22; // [rsp+68h] [rbp-2F0h] BYREF
  char v23; // [rsp+91h] [rbp-2C7h]
  __int64 v24; // [rsp+98h] [rbp-2C0h]
  char v25; // [rsp+1A8h] [rbp-1B0h] BYREF
  __int128 v26; // [rsp+1B0h] [rbp-1A8h]
  __int64 v27; // [rsp+1C0h] [rbp-198h]
  __int64 v28; // [rsp+1C8h] [rbp-190h]
  __int64 v29; // [rsp+1D0h] [rbp-188h]
  _BYTE v30[88]; // [rsp+1D8h] [rbp-180h] BYREF
  __int64 v31; // [rsp+230h] [rbp-128h]
  unsigned __int64 v32; // [rsp+318h] [rbp-40h] BYREF

  v3 = a1[1706];
  v32 = __readfsqword(0x28u);
  v4 = (const char **)a1[1705];
  v14 = v4;
  v15 = &v4[2 * v3];
  if ( v15 != v4 )
  {
    while ( 1 )
    {
      v5 = *v14;
      v6 = v14[1];
      if ( *v14 < v6 )
        break;
LABEL_20:
      v14 += 2;
      if ( v15 == v14 )
        return v32 - __readfsqword(0x28u);
    }
    while ( 1 )
    {
      if ( (unsigned __int8)callui(27, a2, a3) )
        return v32 - __readfsqword(0x28u);
      v7 = 0;
      v8 = a1[1710] + 1LL;
      a1[1710] = v8;
      if ( v8 == 10000 )
      {
        sub_19440((__int64)"Symbolicating branch mappings (%a)");
        v7 = 0;
        a1[1710] = 0;
      }
      v19 = -1;
      v9 = &v22;
      v20 = 0;
      v21 = 0;
      v18 = -1;
      do
      {
        *(_WORD *)v9 = 0;
        v9 += 40;
        *((_WORD *)v9 - 19) = 0;
        *((_WORD *)v9 - 18) = 0;
        *((_DWORD *)v9 - 2) = 0;
        *((_WORD *)v9 - 17) = 0;
        *((_OWORD *)v9 - 2) = v7;
        *((_QWORD *)v9 - 2) = 0;
      }
      while ( &v25 != v9 );
      a2 = v5;
      v10 = decode_insn();
      if ( v10 == 4 )
        break;
      if ( v10 == 8 && v23 == 5 )
      {
        v11 = v24;
LABEL_12:
        if ( v11 != -1 )
        {
          auto_mark_range();
          auto_mark_range();
          a2 = (const char *)&v16;
          v17 = 0;
          v16 = nullptr;
          if ( netnode_qsupstr() > 0 )
          {
            a2 = s1;
            if ( (_QWORD)v17 )
              a2 = v16;
            set_name();
          }
          v5 += 12;
          if ( v16 )
          {
            *(_QWORD *)&v17 = 0;
            qfree();
          }
          goto LABEL_19;
        }
      }
      v5 += 4;
LABEL_19:
      if ( v5 >= v6 )
        goto LABEL_20;
    }
    v27 = -1;
    v13 = (unsigned __int64 *)v30;
    v28 = 0;
    v29 = 0;
    v26 = -1;
    do
    {
      *(_WORD *)v13 = 0;
      v13 += 5;
      *((_WORD *)v13 - 19) = 0;
      *((_WORD *)v13 - 18) = 0;
      *((_DWORD *)v13 - 2) = 0;
      *((_WORD *)v13 - 17) = 0;
      *((_OWORD *)v13 - 2) = 0;
      *(v13 - 2) = 0;
    }
    while ( v13 != &v32 );
    a2 = v5 + 4;
    if ( (unsigned int)decode_insn() != 4 || v23 != 5 || v30[81] != 5 )
    {
      v5 += 4;
      goto LABEL_19;
    }
    v11 = v24 + v31;
    goto LABEL_12;
  }
  return v32 - __readfsqword(0x28u);
}

