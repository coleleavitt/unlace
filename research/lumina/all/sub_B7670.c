__int64 __fastcall sub_B7670(__int64 a1, __int64 a2, char *a3)
{
  char v4; // al
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r12
  void *v9; // rax
  __int64 v11; // r14
  const char *v12; // r13
  char *v13; // rdi
  bool v14; // al
  _BYTE *v15; // r15
  _BOOL8 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  char v19; // dl
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r13
  size_t v22; // r8
  size_t v23; // rax
  size_t v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // [rsp+8h] [rbp-50h]
  size_t v30; // [rsp+8h] [rbp-50h]

  if ( a3 )
  {
    v4 = *a3;
    if ( !*a3 || v4 == 64 || v4 == 47 && a3[1] == 47 )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v6 = strlen(a3);
      v7 = v6 + 1;
      v8 = v6;
      v9 = (void *)sub_1987B0(a1, 0, v6 + 1, 1);
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = v7;
      memmove(v9, a3, v8);
      *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
    }
    else
    {
      sub_B7070(a1, a2, a3);
      v11 = *(_QWORD *)(a2 + 40);
      v12 = *(const char **)(a2 + 32);
      v13 = (char *)s1;
      if ( v11 )
      {
        --v11;
        v13 = *(char **)(a2 + 32);
      }
      v14 = sub_B6A90(v13);
      v15 = *(_BYTE **)a1;
      v16 = v14;
      v17 = v11 - v14;
      if ( v11 == v14 )
      {
        v23 = *(_QWORD *)(a1 + 8);
        if ( !v23 )
        {
          if ( byte_241B38 )
          {
            if ( byte_241B38 != 47 )
              return a1;
LABEL_33:
            v24 = 0;
            v25 = 2;
            if ( *(_QWORD *)(a1 + 16) > 1u )
            {
              *(_QWORD *)(a1 + 8) = 2;
              v15[1] = 0;
LABEL_30:
              **(_BYTE **)a1 = 47;
              return a1;
            }
LABEL_42:
            v26 = sub_1987B0(a1, v15, v25, 1);
            *(_QWORD *)a1 = v26;
            v15 = (_BYTE *)v26;
            v23 = v24 + 1;
LABEL_28:
            *(_QWORD *)(a1 + 8) = v25;
            v15[v23] = 0;
            if ( v24 )
              memmove((void *)(*(_QWORD *)a1 + 1LL), *(const void **)a1, v24);
            goto LABEL_30;
          }
          goto LABEL_38;
        }
        if ( !*v15 )
        {
LABEL_38:
          if ( *(_QWORD *)(a1 + 16) <= 1u )
          {
            v27 = sub_1987B0(a1, v15, 2, 1);
            *(_QWORD *)a1 = v27;
            v15 = (_BYTE *)v27;
          }
          *(_QWORD *)(a1 + 8) = 2;
          *v15 = 47;
          *(_BYTE *)(*(_QWORD *)a1 + 1LL) = 0;
          v23 = *(_QWORD *)(a1 + 8);
          v15 = *(_BYTE **)a1;
          if ( !v23 )
            goto LABEL_33;
LABEL_27:
          v24 = v23 - 1;
          v25 = v23 + 1;
          if ( *(_QWORD *)(a1 + 16) >= v23 + 1 )
            goto LABEL_28;
          goto LABEL_42;
        }
        if ( *v15 == 47 )
          goto LABEL_26;
      }
      else if ( !strncmp(v12, *(const char **)a1, v11 - v14) )
      {
        v18 = *(_QWORD *)(a1 + 8);
        v19 = v15[v17];
        if ( v18 )
        {
          if ( !v19 || v19 == 47 )
          {
            v20 = v18 - 1;
            if ( v20 )
            {
              v21 = 1;
              v22 = 0;
              if ( v17 < v20 )
              {
                v30 = v16 - v11 + v20;
                memmove(v15, &v15[v17], v30);
                v22 = v30;
                v15 = *(_BYTE **)a1;
                v21 = v30 + 1;
              }
              if ( *(_QWORD *)(a1 + 16) < v21 )
              {
                v29 = v22;
                v28 = sub_1987B0(a1, v15, v21, 1);
                *(_QWORD *)a1 = v28;
                v22 = v29;
                v15 = (_BYTE *)v28;
              }
              *(_QWORD *)(a1 + 8) = v21;
              v15[v22] = 0;
              v23 = *(_QWORD *)(a1 + 8);
              v15 = *(_BYTE **)a1;
              if ( !v23 )
              {
LABEL_37:
                if ( byte_241B38 )
                  goto LABEL_33;
                goto LABEL_38;
              }
            }
            else
            {
              v23 = 1;
            }
LABEL_26:
            if ( *v15 )
              goto LABEL_27;
            goto LABEL_38;
          }
        }
        else if ( !v19 || v19 == 47 )
        {
          goto LABEL_37;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  return a1;
}
