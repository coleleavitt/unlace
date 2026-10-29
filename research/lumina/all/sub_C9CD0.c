__int64 __fastcall sub_C9CD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 64) )
  {
    if ( (_BYTE)word_241484 && (v4 = xmmword_2414F0(11), (v5 = v4) != 0) )
    {
      xmmword_241500(v4);
      a2 = (unsigned int)dword_242230;
      if ( dword_242230 <= 0 )
      {
LABEL_11:
        xmmword_241510(v5, a2, a3);
        goto LABEL_12;
      }
    }
    else
    {
      a2 = (unsigned int)dword_242230;
      v5 = 0;
      if ( dword_242230 <= 0 )
        goto LABEL_12;
    }
    if ( v3 == *(_QWORD *)qword_242238 )
    {
      v6 = 0;
LABEL_23:
      v12 = *(_QWORD *)(v3 + 32);
      if ( v12 )
        xmmword_241500(v12);
      if ( *(_DWORD *)(v3 + 56) == 1 )
      {
        v13 = qword_242238;
        v8 = dword_242230-- == 1;
        a3 = *(_QWORD *)(qword_242238 + 8LL * dword_242230);
        *(_QWORD *)(qword_242238 + v6) = a3;
        if ( v8 )
        {
          sub_C91C0(v13, a2);
          qword_242238 = 0;
        }
      }
    }
    else
    {
      v6 = 8;
      LODWORD(a3) = 0;
      while ( 1 )
      {
        a3 = (unsigned int)(a3 + 1);
        if ( (int)a3 >= (int)a2 )
          break;
        if ( *(_QWORD *)(qword_242238 + v6) == v3 )
          goto LABEL_23;
        v6 += 8;
      }
    }
    if ( v5 )
      goto LABEL_11;
  }
  else
  {
    v14 = *(_QWORD *)(v3 + 32);
    if ( v14 )
      xmmword_241500(v14);
  }
LABEL_12:
  v7 = *(_DWORD *)(v3 + 56) - 1;
  v8 = *(_DWORD *)(v3 + 56) == 1;
  *(_DWORD *)(v3 + 56) = v7;
  if ( v7 < 0 || v8 )
  {
    if ( (*(_BYTE *)(v3 + 44) & 1) != 0 )
      sub_C91C0(*(_QWORD *)(v3 + 24), a2);
    v11 = *(_QWORD *)(v3 + 32);
    if ( v11 )
    {
      xmmword_241510(v11, a2, a3);
      if ( *(_QWORD *)(v3 + 32) )
        ((void (*)(void))*(&xmmword_2414F0 + 1))();
    }
    sub_C91C0(v3, a2);
    return 0;
  }
  else
  {
    v9 = *(_QWORD *)(v3 + 32);
    if ( v9 )
      xmmword_241510(v9, a2, a3);
    return 0;
  }
}
