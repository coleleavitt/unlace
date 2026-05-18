__int64 __fastcall sub_11C990(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  void (*v11)(void); // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  int v18; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  v3 = 0;
  sub_116800(a1, 0, 0);
  if ( !*(_BYTE *)(a1 + 17) )
    goto LABEL_14;
  v6 = (*(_DWORD *)(a1 + 20))-- == 1;
  if ( v6 )
  {
    sub_CC7D0(a1, 0, v4);
    if ( !*(_BYTE *)(a1 + 17) )
      goto LABEL_14;
    if ( !(_BYTE)word_241484 )
      goto LABEL_29;
  }
  else if ( !(_BYTE)word_241484 )
  {
    goto LABEL_29;
  }
  v7 = xmmword_2414F0(2);
  v8 = v7;
  if ( !v7 )
  {
LABEL_29:
    v8 = 0;
    v18 = *(_DWORD *)(v2 + 104) - 1;
    v6 = *(_DWORD *)(v2 + 104) == 1;
    *(_DWORD *)(v2 + 104) = v18;
    if ( v18 >= 0 && !v6 )
      goto LABEL_22;
    goto LABEL_30;
  }
  xmmword_241500(v7);
  v9 = *(_DWORD *)(v2 + 104);
  v4 = (unsigned int)(v9 - 1);
  *(_DWORD *)(v2 + 104) = v4;
  if ( v9 - 1 > 0 )
  {
    xmmword_241510(v8, 0, v4);
    goto LABEL_22;
  }
LABEL_30:
  if ( v2 == qword_242190 )
  {
    qword_242190 = *(_QWORD *)(v2 + 112);
  }
  else if ( qword_242190 )
  {
    v4 = *(_QWORD *)(qword_242190 + 112);
    if ( v2 == v4 )
    {
      v4 = qword_242190;
LABEL_38:
      *(_QWORD *)(v4 + 112) = *(_QWORD *)(v2 + 112);
    }
    else
    {
      while ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 112);
        if ( v2 == v5 )
          goto LABEL_38;
        v4 = *(_QWORD *)(v4 + 112);
      }
    }
  }
  if ( *(_QWORD *)(v2 + 88) )
    ((void (*)(void))*(&xmmword_2414F0 + 1))();
  if ( v8 )
    xmmword_241510(v8, 0, v4);
LABEL_14:
  v3 = *(_QWORD *)a1;
  sub_11B330(*(_QWORD *)v2, *(_QWORD *)a1, v4, v5);
  v11 = *(void (**)(void))(v2 + 80);
  if ( !v11 )
    goto LABEL_17;
  if ( *(_QWORD *)(v2 + 72) )
  {
    v11();
LABEL_17:
    v12 = *(_QWORD *)(v2 + 72);
    if ( v12 )
      sub_C91C0(v12, v3);
  }
  v13 = *(_QWORD *)(v2 + 136);
  if ( v13 )
  {
    v14 = (_QWORD *)(v13 - 4);
    *(_QWORD *)(v2 + 136) = v14;
    sub_CBC10(v14, v3, v10);
    *(_QWORD *)(v2 + 136) = 0;
  }
  sub_C91C0(v2, v3);
LABEL_22:
  v15 = *(_QWORD *)(a1 + 40);
  v16 = *(_QWORD *)(a1 + 32);
  if ( v15 )
  {
    *(_QWORD *)(v15 + 32) = v16;
    v16 = *(_QWORD *)(a1 + 32);
  }
  if ( v16 )
    *(_QWORD *)(v16 + 40) = *(_QWORD *)(a1 + 40);
  sub_C91C0(a1, v3);
  return 0;
}
