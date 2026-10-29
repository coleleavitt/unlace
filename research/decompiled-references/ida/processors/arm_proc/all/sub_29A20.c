__int64 __fastcall sub_29A20(__int64 a1, _DWORD *a2, _BYTE *a3, int a4)
{
  __int64 v4; // r14
  char v9; // dl
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // si
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD _0[51]; // [rsp+0h] [rbp+0h] BYREF

  v4 = 0;
  _0[45] = __readfsqword(0x28u);
  qmemcpy(_0, a3, 0x168u);
  while ( (get_flags_ex() & 0x10000) != 0 && decode_prev_insn() != -1 )
  {
    if ( ((LOBYTE(_0[4]) ^ a3[32]) & 0xF) == 0 )
    {
      if ( LOWORD(_0[3]) == 14 )
        goto LABEL_9;
      if ( LOWORD(_0[3]) != 278 )
      {
        if ( LOWORD(_0[3]) != 12 )
          break;
LABEL_9:
        if ( BYTE1(_0[5]) != 1 || a4 != HIWORD(_0[5]) )
          break;
        v9 = BYTE1(_0[15]);
        v10 = &_0[10];
        if ( !BYTE1(_0[15]) )
        {
          v9 = BYTE1(_0[10]);
          v10 = &_0[5];
        }
        if ( v9 != 5 )
          break;
        v11 = v10[6];
        a4 = *((unsigned __int16 *)v10 + 3);
        if ( v11 )
        {
          v12 = v10[8];
          if ( v12 )
          {
            v13 = *((_BYTE *)v10 + 73);
            if ( v13 )
            {
              if ( v13 == 5 )
                v11 = ((v11 + 1) << v12) - 1;
              else
                v11 = 0;
            }
            else
            {
              v11 <<= v12;
            }
          }
        }
        v14 = v4 - v11;
        v15 = v4 + v11;
        if ( LOWORD(_0[3]) != 12 )
          v14 = v15;
        v4 = v14;
      }
    }
  }
  *a2 = a4;
  return v4;
}

