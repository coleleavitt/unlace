__int64 __fastcall sub_38A20(const char *a1, char *a2)
{
  unsigned int v3; // edi
  char v4; // bl
  char v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  _BYTE *v8; // rsi
  char v9; // al
  size_t v10; // rax
  size_t v11; // rbx
  __int64 v12; // rdi
  size_t v13; // r12
  int v15; // [rsp+4h] [rbp-74h]
  __int64 v16; // [rsp+10h] [rbp-68h]
  void *v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+28h] [rbp-50h]

  v15 = 0;
  v16 = 0;
LABEL_2:
  v18 = nullptr;
  v19 = 0;
  if ( !v15 )
  {
    if ( a1 )
    {
      v10 = strlen(a1);
      v11 = v10;
      if ( v10 )
      {
        v13 = v10 + 1;
        v18 = (void *)qvector_reserve();
        *(_QWORD *)&v19 = v13;
        memmove(v18, a1, v11);
        *((_BYTE *)v18 + v11) = 0;
      }
    }
    goto LABEL_29;
  }
  v3 = *a2;
  v4 = *a2;
  if ( v3 > 0x7F )
  {
    v5 = 0;
    goto LABEL_13;
  }
  while ( isspace(v3) )
  {
    v3 = *++a2;
    v4 = v3;
    if ( v3 > 0x7F )
      goto LABEL_23;
  }
  if ( v4 )
  {
    if ( v4 == 34 || v4 == 39 )
    {
      v5 = v4;
      v4 = *++a2;
      goto LABEL_13;
    }
LABEL_23:
    v4 = *a2;
    v5 = 0;
    while ( 1 )
    {
LABEL_13:
      if ( v5 )
      {
        if ( v5 == v4 )
          goto LABEL_16;
      }
      else
      {
        if ( (unsigned int)v4 > 0x7F )
          goto LABEL_8;
        if ( isspace(v4) )
        {
LABEL_16:
          if ( 8LL * (v15 + 2) < (unsigned __int64)(v15 + 2) )
            goto LABEL_17;
LABEL_29:
          v16 = qrealloc();
          if ( !v16 )
LABEL_17:
            sub_37F50((__int64)"prepare_arguments");
          v12 = (__int64)v18;
          if ( (unsigned __int64)v19 < *((_QWORD *)&v19 + 1) && v18 && (_QWORD)v19 )
          {
            v12 = qrealloc();
            if ( !v12 )
              v12 = (__int64)v18;
          }
          *(_QWORD *)(v16 + 8LL * v15++) = v12;
          goto LABEL_2;
        }
      }
      if ( !v4 )
        goto LABEL_16;
      if ( v4 == 92 )
      {
        v9 = a2[1];
        if ( v9 )
        {
          ++a2;
          v4 = v9;
        }
      }
LABEL_8:
      v6 = v19;
      v7 = 2;
      if ( (_QWORD)v19 )
      {
        v7 = v19 + 1;
        v6 = v19 - 1;
      }
      v8 = v18;
      if ( v7 )
      {
        v18 = (void *)qvector_reserve();
        v8 = v18;
      }
      *(_QWORD *)&v19 = v7;
      v8[v6] = v4;
      *((_BYTE *)v18 + v6 + 1) = 0;
      v4 = *++a2;
    }
  }
  *(_QWORD *)(v16 + 8LL * v15) = 0;
  return v16;
}

