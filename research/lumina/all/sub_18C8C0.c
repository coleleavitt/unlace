__int64 __fastcall sub_18C8C0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  char *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // r9d
  char *v10; // r12
  char v11; // al
  char *v12; // rdx
  _BYTE *v13; // rdi
  __int64 v14; // r8
  char v15; // si
  __int64 v16; // rax
  unsigned __int8 v17; // al
  __int64 v18; // rax
  _BYTE *v19; // [rsp+0h] [rbp-68h]
  unsigned __int8 v20; // [rsp+0h] [rbp-68h]
  unsigned __int8 v22; // [rsp+17h] [rbp-51h]
  char *ptr; // [rsp+18h] [rbp-50h]

  if ( !a3 )
    return 0;
  v6 = (char *)sub_198700(a3);
  ptr = v6;
  result = 0;
  if ( !v6 )
    return result;
  v10 = (char *)sub_1997C0(v6, ":");
  v19 = a4 + 4096;
  if ( !v10 )
  {
LABEL_16:
    j__free(ptr);
    return 0;
  }
  while ( 1 )
  {
    v11 = *v10;
    v12 = v10 + 1;
    if ( !*v10 )
    {
      *a4 = 0;
      goto LABEL_20;
    }
    v13 = a4;
    v14 = 0;
    while ( v13 < a4 + 4095 )
    {
      if ( v11 != 37 )
        goto LABEL_6;
      v15 = v10[1];
      if ( v15 == 78 )
      {
        v10 += 2;
        v18 = sub_199940(v13, a1, v19 - v13, v8, v14);
        v14 = 1;
        v13 = (_BYTE *)v18;
        goto LABEL_7;
      }
      if ( v15 == 76 )
      {
        v22 = v14;
        v10 += 2;
        v16 = sub_199940(v13, a2, v19 - v13, v8, v14);
        v14 = v22;
        v12 = v10 + 1;
        v13 = (_BYTE *)v16;
        v11 = *v10;
        if ( !*v10 )
          break;
      }
      else
      {
LABEL_6:
        *v13 = v11;
        v10 = v12;
        ++v13;
LABEL_7:
        v11 = *v10;
        v12 = v10 + 1;
        if ( !*v10 )
          break;
      }
    }
    *v13 = 0;
    if ( (_BYTE)v14 )
      break;
LABEL_20:
    sub_197540((_DWORD)a4, 4096, (_DWORD)a4, a1, 0, v9, (char)v19);
    v17 = sub_197CA0(a4);
    if ( v17 )
      goto LABEL_21;
LABEL_15:
    v10 = (char *)sub_1997C0(nullptr, ":");
    if ( !v10 )
      goto LABEL_16;
  }
  v17 = sub_197CA0(a4);
  if ( !v17 )
    goto LABEL_15;
LABEL_21:
  v20 = v17;
  j__free(ptr);
  return v20;
}
