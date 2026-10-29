__int64 __fastcall sub_B210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // edx
  char *v8; // rax
  char v9; // cl
  __int16 v10; // dx
  __int64 v11; // rbp
  char v13; // si
  __int16 v14; // cx
  int v15; // eax
  int v16; // ebp
  char v17; // al
  int v18; // edx
  char v19; // al
  char *v20[45]; // [rsp-170h] [rbp-198h] BYREF
  _QWORD v21[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = 0;
  v21[1] = __readfsqword(0x28u);
  v21[0] = 0;
  v8 = (char *)(a2 + 41);
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    while ( *(_WORD *)(v8 + 5) == 15 )
    {
      if ( v9 == 3 )
      {
        v13 = v8[31];
        if ( (unsigned __int8)(v13 - 1) <= 1u )
        {
          v14 = *(_WORD *)(a2 + 24);
          if ( (unsigned __int16)(v14 - 161) <= 1u )
          {
            if ( *(_BYTE *)(a2 + 40LL * v6 + 40) )
              v15 = *(unsigned __int16 *)(a2 + 46);
            else
              v15 = *(unsigned __int16 *)(a2 + 86);
            v16 = 16 - v15;
            if ( v14 == 161 )
              v16 = v15 + 1;
            v11 = 4 * v16;
          }
          else
          {
            v11 = 4LL * (*(_BYTE *)(a2 + 40LL * v6 + 45) == 2);
          }
          if ( v13 == 2 )
            return -v11;
          return v11;
        }
        break;
      }
      if ( v9 != 1 || v6 != 1 )
        break;
      v10 = *(_WORD *)(a2 + 24);
      if ( v10 == 1 || v10 == 94 )
      {
        v17 = *(_BYTE *)(a2 + 41);
        if ( v17 == 5 )
        {
          v11 = *(_QWORD *)(a2 + 48);
        }
        else
        {
          v11 = 0;
          if ( v17 == 1 )
          {
            v18 = *(unsigned __int16 *)(a2 + 46);
            qmemcpy(v20, (const void *)a2, sizeof(v20));
            v19 = sub_AD00(
                    a1,
                    (char *)v21,
                    v18,
                    nullptr,
                    a1,
                    a6,
                    (char)v20[0],
                    (int)v20[1],
                    v20[2],
                    (unsigned __int16)v20[3],
                    (int)v20[4],
                    (__int64)v20[5],
                    (__int64)v20[6],
                    (__int64)v20[7],
                    (int)v20[8],
                    (int)v20[9],
                    (__int64)v20[10]);
            v10 = *(_WORD *)(a2 + 24);
            if ( v19 )
              v11 = v21[0];
          }
        }
        if ( v10 == 94 )
          return -v11;
        return v11;
      }
      v9 = v8[40];
      v8 += 40;
      v6 = 2;
      if ( !v9 )
        return 0;
    }
    ++v6;
    v8 += 40;
  }
  while ( v6 != 8 );
  return 0;
}

