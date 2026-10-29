__int64 __fastcall sub_27390(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int16 v4; // ax
  char v5; // r11
  __int64 v6; // r15
  __int64 v7; // rdx
  char v8; // r11
  char v9; // [rsp+0h] [rbp-1C8h]
  __int64 v10; // [rsp+0h] [rbp-1C8h]
  char v11; // [rsp+8h] [rbp-1C0h]
  __int64 v12; // [rsp+8h] [rbp-1C0h]
  char v13; // [rsp+10h] [rbp-1B8h]
  __int64 v14; // [rsp+10h] [rbp-1B8h]
  char v15; // [rsp+18h] [rbp-1B0h]
  __int64 v16; // [rsp+18h] [rbp-1B0h]
  _BYTE v17[360]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int64 v18; // [rsp+188h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 28) & 8) == 0 || (unsigned int)getinf() - 10 > 2 && (unsigned __int8)sub_6F420(5, a2) )
    return 0;
  v4 = *(_WORD *)(a2 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  qmemcpy(v17, (const void *)a2, sizeof(v17));
  if ( v4 != 143 )
    goto LABEL_6;
  if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 1 )
  {
    decode_insn();
    v4 = *(_WORD *)(a2 + 24);
    v5 = 1;
LABEL_6:
    if ( v4 == 92 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 7 )
    {
      v7 = 0xFFFFFFFFLL;
      if ( a1[4] != -1 )
        v7 = 5;
      v9 = v5;
      v2 = sub_26F10(a2, a2 + 80, v7);
      if ( (_BYTE)v2 )
      {
        v11 = v9;
        v10 = *(_QWORD *)(a2 + 16);
        if ( (unsigned int)decode_insn() )
        {
          if ( *(_WORD *)(a2 + 24) == 122
            && *(_BYTE *)(a2 + 41) == 1
            && *(_WORD *)(a2 + 46) == 1
            && *(_BYTE *)(a2 + 81) == 5 )
          {
            v13 = v11;
            v12 = *(_QWORD *)(a2 + 16);
            if ( (unsigned int)decode_insn() )
            {
              if ( *(_WORD *)(a2 + 24) == 122
                && *(_BYTE *)(a2 + 41) == 1
                && !*(_WORD *)(a2 + 46)
                && *(_BYTE *)(a2 + 81) == 5
                && (*(_QWORD *)(a2 + 88) & *(_QWORD *)(*(_QWORD *)(a1[18] + 32LL) + 16LL)) == 3435973836LL )
              {
                v15 = v13;
                v14 = *(_QWORD *)(a2 + 16);
                if ( (unsigned int)decode_insn() )
                {
                  v8 = v15;
                  if ( *(_WORD *)(a2 + 24) == 207 )
                  {
                    v16 = *(_QWORD *)(a2 + 16);
                    if ( !v8 )
                    {
                      sub_23D80((__int64)a1, 0);
                      sub_23D80((__int64)a1, 1u);
                      sub_23D80((__int64)a1, 7u);
                      sub_226A0(a1 + 6, v10);
                      sub_236C0();
                      sub_226A0(a1 + 6, v12);
                      sub_236C0();
                      sub_226A0(a1 + 6, v14);
                      sub_236C0();
                      sub_226A0(a1 + 6, v16);
                      sub_236C0();
                      return v2;
                    }
                    if ( (unsigned int)decode_insn()
                      && *(_WORD *)(a2 + 24) == 134
                      && *(_BYTE *)(a2 + 41) == 1
                      && *(_WORD *)(a2 + 46) == 1 )
                    {
                      sub_23D80((__int64)a1, 0);
                      sub_23D80((__int64)a1, 7u);
                      sub_226A0(a1 + 6, v10);
                      sub_236C0();
                      sub_226A0(a1 + 6, v12);
                      sub_236C0();
                      sub_226A0(a1 + 6, v14);
                      sub_236C0();
                      sub_226A0(a1 + 6, v16);
                      sub_236C0();
                      sub_226A0(a1 + 6, v6);
                      sub_236C0();
                      sub_226A0(a1 + 6, *(_QWORD *)(a2 + 16));
                      sub_236C0();
                      return v2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  qmemcpy((void *)a2, v17, 0x168u);
  return 0;
}

