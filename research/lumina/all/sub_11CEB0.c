__int64 __fastcall sub_11CEB0(__int64 a1)
{
  unsigned int v1; // ebp
  __m128i *v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rdi
  bool v16; // zf
  _QWORD *v18; // rdx

  v1 = 0;
  if ( a1 )
  {
    v2 = *(__m128i **)(a1 + 32);
    v4 = v2[1].m128i_i64[1];
    if ( v4 )
      xmmword_241500(v4);
    v5 = *(_QWORD *)(a1 + 40);
    if ( *(_BYTE *)(v5 + 17) )
      sub_CC740(v5);
    if ( *(_QWORD *)a1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( !v6 || (xmmword_241500(v6), *(_QWORD *)a1) )
        --*(_DWORD *)(*(_QWORD *)(a1 + 40) + 24LL);
    }
    if ( *(_DWORD *)(a1 + 60) )
    {
      v7 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
      v8 = *(_QWORD *)(v7 + 112);
      if ( a1 == v8 )
      {
        v18 = (_QWORD *)(v7 + 112);
      }
      else
      {
        while ( a1 != *(_QWORD *)(v8 + 64) )
          v8 = *(_QWORD *)(v8 + 64);
        v18 = (_QWORD *)(v8 + 64);
      }
      *v18 = *(_QWORD *)(a1 + 64);
    }
    v9 = 0;
    sub_116800(*(_QWORD *)(a1 + 8), 0, 0);
    v1 = *(_DWORD *)(a1 + 48);
    v14 = *(_QWORD *)a1;
    if ( v1 == 101 )
    {
      if ( v14 )
      {
        *(_DWORD *)(v14 + 80) = 0;
LABEL_29:
        if ( !*(_QWORD *)(v14 + 392) )
        {
          *(_DWORD *)(v14 + 84) = -1;
          v1 = 0;
          goto LABEL_21;
        }
        v1 = 0;
LABEL_20:
        v9 = v1;
        sub_CA220((__int64 *)v14, v1, v10, v11, v12, v13);
LABEL_21:
        sub_11CB70(*(__m128i **)a1, v9, v10);
        v15 = *(_QWORD *)(a1 + 40);
        if ( !*(_BYTE *)(v15 + 17) )
          goto LABEL_23;
        v16 = (*(_DWORD *)(v15 + 20))-- == 1;
        if ( !v16 )
          goto LABEL_23;
        goto LABEL_34;
      }
      v1 = 0;
    }
    else if ( v14 )
    {
      *(_DWORD *)(v14 + 80) = v1;
      if ( v1 )
        goto LABEL_20;
      goto LABEL_29;
    }
    v15 = *(_QWORD *)(a1 + 40);
    if ( !*(_BYTE *)(v15 + 17) )
    {
LABEL_25:
      sub_11CB70(v2, v9, v10);
      return v1;
    }
    v16 = (*(_DWORD *)(v15 + 20))-- == 1;
    if ( !v16 )
    {
LABEL_23:
      if ( *(_QWORD *)a1 )
        sub_C91C0(a1, v9);
      goto LABEL_25;
    }
LABEL_34:
    sub_CC7D0(v15, v9, v10);
    goto LABEL_23;
  }
  return v1;
}
