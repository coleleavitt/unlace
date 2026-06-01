void __fastcall sub_12FA0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  const char *v5; // r12
  __int64 v7; // rbx
  __int64 v8; // rbp
  const char *v9; // rdi
  unsigned __int64 v10; // rbx
  _BYTE *v11; // rax
  const char *v12; // rsi
  unsigned __int64 v13; // rax
  const char *v14; // rdx
  __int64 v16; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 48);
  v4 = v3 + 160 * a2;
  v16 = v4;
  if ( *(_QWORD *)(v4 + 104) > 1u )
  {
    v5 = *(const char **)(v4 + 96);
    v7 = v3 + 160LL * *(_QWORD *)(a1 + 56);
    if ( v3 == v7 )
      goto LABEL_16;
    v8 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      v9 = s1;
      if ( *(_QWORD *)(v8 + 8) )
        v9 = *(const char **)v8;
      if ( !strcmp(v9, v5) )
        break;
      v8 += 160;
      if ( v7 == v8 )
        goto LABEL_16;
    }
    if ( !v8 )
    {
LABEL_16:
      v14 = s1;
      if ( *(_QWORD *)(v16 + 8) )
        v14 = *(const char **)v16;
      sub_5990((__int64)"? Unknown derivedFrom %s in peripheral %s\n", v5, v14);
    }
    else
    {
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - v3) >> 5);
      v11 = (_BYTE *)(v10 + *a3);
      if ( *v11 )
      {
        v12 = s1;
        if ( *(_QWORD *)(v8 + 8) )
          v12 = *(const char **)v8;
        sub_5990((__int64)"? Circular derivedFrom on peripheral %s\n", v12);
        *(_QWORD *)(v16 + 104) = 0;
      }
      else
      {
        *v11 = 1;
        sub_12FA0(a1, v10, a3);
        *(_BYTE *)(*a3 - 0x3333333333333333LL * ((v8 - v3) >> 5)) = 0;
        v13 = *(_QWORD *)(v8 + 128);
        if ( *(_QWORD *)(v16 + 128) < v13 )
          *(_QWORD *)(v16 + 128) = v13;
      }
    }
  }
}

