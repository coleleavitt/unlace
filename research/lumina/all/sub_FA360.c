_WORD *__fastcall sub_FA360(__int64 *a1, double a2, __int64 a3, int a4, int a5, int a6, _QWORD *a7)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rax

  *((_DWORD *)a1 + 9) = a6;
  *a1 = a3;
  a1[1] = a3;
  a1[3] = 0;
  a1[2] = 0;
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 11) = a4;
  *((_WORD *)a1 + 20) = 256;
  *((_BYTE *)a1 + 42) = 1;
  if ( a7 )
  {
    v7 = a7[3];
    v8 = a5;
    LOWORD(a5) = *(_WORD *)(a7[1] + 2LL * a5);
    if ( (_WORD)a5 == *(_WORD *)(v7 + 52) )
    {
      *((_WORD *)a1 + 44) = -1;
      return sub_F9FE0(a1, a2);
    }
    else
    {
      if ( (a5 & 0x8000u) == 0 )
      {
        *((_BYTE *)a1 + 40) = *(_BYTE *)(*(_QWORD *)(v7 + 8) + 16LL * (__int16)a5 + 9);
        a1[2] = *(_QWORD *)(a7[8] + 8 * v8);
LABEL_5:
        *((_WORD *)a1 + 44) = a5;
        return sub_F9FE0(a1, a2);
      }
      if ( (__int16)a5 != -2 )
        goto LABEL_5;
      a1[3] = *(_QWORD *)(a7[10] + 24 * v8 + 8);
      v10 = *(_QWORD *)(a7[8] + 8 * v8);
      *((_WORD *)a1 + 44) = -2;
      a1[2] = v10;
      return sub_FA340((__int64)a1, a2);
    }
  }
  else
  {
    if ( a5 != -2 )
      goto LABEL_5;
    return nullptr;
  }
}
