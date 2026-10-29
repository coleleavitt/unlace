__int64 __fastcall sub_C4B40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdx
  int v6; // edi
  int v7; // ecx
  unsigned int v8; // ebx

  if ( (_BYTE)word_241484 && (v3 = xmmword_2414F0(2), (v4 = v3) != 0) )
  {
    xmmword_241500(v3);
    v6 = dword_242180 - 1;
    if ( dword_242180 - 1 < 0 )
    {
      v8 = 0;
LABEL_11:
      xmmword_241510(v4, a2, v5);
      return v8;
    }
  }
  else
  {
    v4 = 0;
    v6 = dword_242180 - 1;
    if ( dword_242180 - 1 < 0 )
      return 0;
  }
  v5 = v6;
  a2 = (_QWORD *)(qword_242188 + 8LL * v6);
  if ( a1 == *a2 )
  {
LABEL_13:
    dword_242180 = v6;
    v8 = 1;
    *a2 = *(_QWORD *)(qword_242188 + 8LL * (unsigned int)v6);
  }
  else
  {
    v7 = v6 - 1;
    v5 = qword_242188 + 8LL * (v6 - 1);
    while ( v7 != -1 )
    {
      a2 = (_QWORD *)v5;
      v5 -= 8;
      if ( *(_QWORD *)(v5 + 8) == a1 )
        goto LABEL_13;
      --v7;
    }
    v8 = 0;
  }
  if ( v4 )
    goto LABEL_11;
  return v8;
}
