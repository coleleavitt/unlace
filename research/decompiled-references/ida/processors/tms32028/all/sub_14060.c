__int64 __fastcall sub_14060(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  unsigned int v4; // eax
  int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // rax
  char v8; // dl
  __int64 v9[45]; // [rsp-170h] [rbp-1A8h] BYREF
  int v10[2]; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v11[1] = __readfsqword(0x28u);
  if ( ((unsigned __int16)(v1 - 30) <= 1u || v1 == 28) && (*(_BYTE *)(a1 + 97) & 0xFB) == 1 )
  {
    *(_BYTE *)(a1 + 904) = 1;
    *(_QWORD *)(a1 + 896) = 0;
    *(_BYTE *)(a1 + 793) = 1;
    v4 = same_value_jpt();
    *(_BYTE *)(a1 + 904) = 0;
    v2 = v4;
    if ( (_BYTE)v4 )
    {
      if ( *(_BYTE *)(a1 + 97) == 5 )
      {
        v7 = *(_QWORD *)(a1 + 104);
        v8 = *(_BYTE *)(a1 + 131);
        *(_QWORD *)v10 = v7;
        if ( !v8 )
          goto LABEL_11;
        if ( ((v8 - 48) & 0xEF) != 0 )
        {
          v7 <<= v8 & 0xF;
          if ( v8 == 32 )
            LOWORD(v7) = 0;
          goto LABEL_11;
        }
      }
      else if ( !*(_BYTE *)(a1 + 131) )
      {
        v6 = *(unsigned __int16 *)(a1 + 102);
        qmemcpy(v9, (const void *)(a1 + 16), sizeof(v9));
        if ( (unsigned __int8)sub_13510(
                                *(_QWORD *)(a1 + 888),
                                (__int64 *)v10,
                                v11,
                                v6,
                                v6,
                                v5,
                                v9[0],
                                v9[1],
                                v9[2],
                                v9[3],
                                v9[4],
                                v9[5],
                                v9[6],
                                v9[7],
                                v9[8],
                                v9[9],
                                v9[10],
                                v9[11],
                                (void *)v9[12],
                                v9[13],
                                v9[14]) )
        {
          LOWORD(v7) = v10[0];
LABEL_11:
          *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v7;
          return v2;
        }
      }
    }
  }
  return 0;
}

