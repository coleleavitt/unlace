__int64 __fastcall sub_3E9080(__int64 a1, int a2, int a3, int a4, int a5, double a6)
{
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // esi
  __int64 v11; // [rsp-8h] [rbp-28h]

  v7 = a5;
  sub_3E8D60(a1, 0x47u, *(unsigned __int16 *)(a1 + 842), a2, a3, a5, 0);
  v8 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned int)(v8 - 97) <= 1 )
  {
    sub_3E8D60(a1, 0x44u, *(unsigned __int16 *)(a1 + 842), v7, 0x3BEA45E214ADDC55LL, v7, 0);
    LOWORD(v8) = *(_WORD *)(a1 + 48);
    if ( (unsigned __int16)v8 > 0x61u )
    {
      if ( (_WORD)v8 == 98 )
        goto LABEL_6;
      goto LABEL_9;
    }
  }
  else if ( (unsigned __int16)v8 > 0x61u )
  {
    goto LABEL_9;
  }
  v9 = 70;
  if ( (unsigned __int16)v8 <= 0x5Fu )
  {
    if ( (_WORD)v8 == 95 )
    {
LABEL_6:
      v9 = 69;
      goto LABEL_4;
    }
LABEL_9:
    if ( !under_debugger )
      sub_37DDE0(0xCE38u, a6);
    BUG();
  }
LABEL_4:
  sub_3E8D60(a1, v9, *(unsigned __int16 *)(a1 + 842), v7, a4, v7, 0);
  return v11;
}

