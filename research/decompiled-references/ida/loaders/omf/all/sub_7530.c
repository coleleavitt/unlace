const char *__fastcall sub_7530(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rbp
  signed __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  if ( a2 == -1 )
  {
    if ( *(_QWORD *)(a1 + 48) >= *(_QWORD *)(a1 + 8) )
      goto LABEL_3;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = a2;
    if ( a2 >= *(_QWORD *)(a1 + 8) )
    {
LABEL_3:
      *(_QWORD *)(a1 + 32) = 0;
      return src;
    }
  }
  v3 = (unsigned __int8)sub_5EE0(a1, -1);
  if ( v3 != 255 )
    goto LABEL_7;
  v5 = *(_QWORD *)(a1 + 48);
  v4 = 255;
  if ( v5 >= *(_QWORD *)(a1 + 8) || *(_BYTE *)(*(_QWORD *)a1 + v5) )
    goto LABEL_8;
  sub_5890(a1, v5 + 1, 2);
  v6 = *(_QWORD *)(a1 + 48);
  v3 = *(unsigned __int16 *)(*(_QWORD *)a1 + v6);
  v7 = v6 + 2;
  *(_QWORD *)(a1 + 48) = v7;
  if ( (unsigned __int64)(v3 - 224) > 0xF4 || v7 >= *(_QWORD *)(a1 + 8) )
  {
    v4 = 0;
    v3 = 0;
  }
  else
  {
LABEL_7:
    v4 = v3;
  }
LABEL_8:
  sub_73D0(a1, a1 + 24, v4);
  if ( *(_BYTE *)(a1 + 58) == 0x96 )
    validate_name(a1 + 24, 6, 1025);
  *(_QWORD *)(a1 + 48) += v3;
  if ( !*(_QWORD *)(a1 + 32) )
    return src;
  return *(const char **)(a1 + 24);
}

