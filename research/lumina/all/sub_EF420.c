void __fastcall sub_EF420(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int128 v17; // rtt
  __int128 v18; // rtt

  v6 = a1[2];
  if ( *(__int16 *)(v6 + 20) >= 0 )
    v8 = (__int64)sub_EF2D0(a1 + 1, v6, 24, a4, a5, a6);
  else
    v8 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 > 0 )
    {
      v10 = *(_QWORD *)v8;
      v11 = *a1;
      v14 = *(unsigned __int16 *)(*a1 + 20);
      v12 = *(_QWORD *)v8 / v9;
      v13 = *(_QWORD *)(v8 + 16);
      LOWORD(v14) = v14 & 0x9000;
      if ( (_DWORD)v12 )
      {
        v9 *= (int)v12;
        v8 = (int)v12 + 1;
        v16 = v10 - v9;
        if ( v13 >= v16 * v8 )
        {
          v18 = v13 - v16 * v8;
          v13 = (v13 - v16 * v8) % (int)v12;
          v15 = v16 + v18 / (int)v12 + 1;
          if ( !(_WORD)v14 )
            goto LABEL_7;
        }
        else
        {
          v17 = v13;
          v13 %= v8;
          v15 = v17 / v8 + 1;
          if ( !(_WORD)v14 )
            goto LABEL_7;
        }
      }
      else
      {
        v15 = v13 + 1;
        if ( !(_WORD)v14 )
        {
LABEL_7:
          *(_QWORD *)v11 = v15;
          *(_WORD *)(v11 + 20) = 4;
          return;
        }
      }
      sub_C9430(v11, v15, v13, v8, v9, v14);
    }
  }
}
