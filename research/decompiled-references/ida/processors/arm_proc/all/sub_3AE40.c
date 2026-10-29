__int64 __fastcall sub_3AE40(__int64 a1, int a2)
{
  __int16 v3; // ax
  __int64 v5; // rax
  int *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  const char *v9; // rsi
  _BYTE v11[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v3 = *(_WORD *)(a1 + 248);
  v12 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v3 - 26) > 1u )
    goto LABEL_13;
  if ( *(_BYTE *)(a1 + 345) )
    goto LABEL_13;
  v5 = qword_AA590;
  if ( !qword_AA590 )
    goto LABEL_13;
  v6 = &dword_AA588;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_QWORD *)(v5 + 24);
      if ( a2 > *(_DWORD *)(v5 + 32) )
        break;
      v6 = (int *)v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v7 )
        goto LABEL_8;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v8 );
LABEL_8:
  if ( v6 == &dword_AA588 || v6[8] > a2 )
  {
LABEL_13:
    qsnprintf();
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v11, 33);
    return v12 - __readfsqword(0x28u);
  }
  else
  {
    v9 = &s1;
    if ( *((_QWORD *)v6 + 6) )
      v9 = *((const char **)v6 + 5);
    return (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v9, 33);
  }
}

