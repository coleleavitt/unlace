__int64 __fastcall sub_7BB0(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 ph; // rax
  int v8; // edx
  int v9; // ecx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v3 > 0x72u )
  {
    if ( (_WORD)v3 == 233 )
      return (unsigned int)-1;
    if ( (unsigned __int16)v3 > 0xE9u )
    {
      if ( (unsigned __int16)(v3 - 240) <= 3u )
        goto LABEL_6;
    }
    else if ( (_WORD)v3 == 232 )
    {
      goto LABEL_6;
    }
  }
  else
  {
    if ( (unsigned __int16)v3 > 0x68u )
      goto LABEL_6;
    if ( (unsigned __int16)(v3 - 15) <= 0x2Fu )
    {
      v5 = 0x7FF83F0180078000LL;
      v6 = -1;
      if ( _bittest64(&v5, v3) )
        return v6;
      if ( (_WORD)v3 == 29 )
      {
LABEL_6:
        if ( a3 )
          goto LABEL_7;
        return (unsigned int)-1;
      }
    }
  }
LABEL_7:
  ph = get_ph();
  v8 = *(unsigned __int16 *)(a2 + 24);
  v9 = *(_DWORD *)(ph + 104);
  if ( v8 < v9 || v8 >= *(_DWORD *)(ph + 108) || (*(_BYTE *)(*(_QWORD *)(ph + 112) + 16LL * (v8 - v9) + 8) & 1) == 0 )
  {
    v11 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
    v12 = *a1;
    v13 = a1[1];
    if ( a1[2] < (unsigned __int64)(v13 + 1) )
    {
      v14 = qvector_reserve(a1, v12, v13 + 1, 8);
      *a1 = v14;
      *(_QWORD *)(v14 + 8 * a1[1]) = v11;
    }
    else
    {
      *(_QWORD *)(v12 + 8 * v13) = v11;
    }
    ++a1[1];
  }
  return 0;
}
