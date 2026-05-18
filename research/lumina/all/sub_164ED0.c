__int64 __fastcall sub_164ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  int v9; // ecx
  __int64 v10; // r14
  __int64 v12; // rax
  int v13; // edx

  v2 = a1;
  v4 = sub_FEBD0(a1, a2);
  if ( v4 )
    return v4;
  if ( (_BYTE)word_241484 )
  {
    a1 = 2;
    v5 = xmmword_2414F0(2);
    v6 = v5;
    if ( v5 )
    {
      a1 = v5;
      xmmword_241500(v5);
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = (unsigned int)dword_242180;
  v8 = qword_242188;
  if ( !dword_242180 )
  {
    v10 = 8;
LABEL_11:
    v4 = sub_FEBD0(a1, v7);
    if ( v4 || (v7 = v10, (v12 = sub_D2640(v8, v10)) == 0) )
    {
      v4 = 7;
    }
    else
    {
      qword_242188 = v12;
      v13 = dword_242180;
      *(_QWORD *)(v12 + 8LL * (unsigned int)dword_242180) = v2;
      v3 = (unsigned int)(v13 + 1);
      dword_242180 = v3;
    }
    goto LABEL_13;
  }
  if ( v2 != *(_QWORD *)qword_242188 )
  {
    v3 = qword_242188 + 8;
    v9 = 0;
    while ( v9 + 1 != dword_242180 )
    {
      v3 += 8;
      ++v9;
      if ( v2 == *(_QWORD *)(v3 - 8) )
        goto LABEL_13;
    }
    v7 = (unsigned int)(v9 + 2);
    v10 = 8 * v7;
    goto LABEL_11;
  }
LABEL_13:
  if ( v6 )
    xmmword_241510(v6, v7, v3);
  return v4;
}
