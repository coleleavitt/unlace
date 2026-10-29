__int64 __fastcall sub_3362B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 module_data; // r12
  const char *v6; // rbp
  __int64 v7; // r14
  const char *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rdx
  const char *v11; // r15
  char *v12; // rax
  signed __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // edi
  size_t v16; // rax
  size_t v17; // r13
  int v18; // eax
  int v19; // r15d
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // [rsp+8h] [rbp-60h]
  char *v23; // [rsp+10h] [rbp-58h]

  result = 2;
  if ( *(_WORD *)(a3 + 24) != 4 )
    return result;
  module_data = get_module_data();
  v6 = *(const char **)(*(_QWORD *)(module_data + 112) + 24LL);
  if ( *v6 == 72 && v6[1] == 69 && v6[2] == 88 )
  {
    v6 += 3;
  }
  else
  {
    v7 = 0;
    v8 = s1;
    if ( !v6 )
      goto LABEL_5;
  }
  v16 = strlen(v6);
  v17 = v16;
  v7 = v16;
  if ( !v16 )
  {
    v6 = nullptr;
LABEL_18:
    v8 = s1;
    goto LABEL_5;
  }
  v7 = v16 + 1;
  v23 = (char *)qvector_reserve();
  memmove(v23, v6, v17);
  v23[v17] = 0;
  v6 = v23;
  if ( !v7 )
    goto LABEL_18;
  v8 = v23;
LABEL_5:
  v9 = *(_QWORD *)(a3 + 8);
  v10 = 0;
  v11 = s1;
  if ( v9 )
  {
    v11 = *(const char **)a3;
    v10 = v9 - 1;
  }
  v22 = v10;
  v12 = strstr(v11, v8);
  if ( !v12 )
    goto LABEL_19;
  v13 = v12 - v11;
  if ( v13 == -1 )
    goto LABEL_19;
  v14 = v22;
  if ( v13 )
  {
    v19 = v13;
    v20 = (int)v13 - 1;
    if ( v9 )
    {
      if ( v20 == v22 || (v21 = *(char *)(*(_QWORD *)a3 + v20), *(_BYTE *)(*(_QWORD *)a3 + v20) == 44) )
      {
        if ( v7 )
          v7 = (int)v7 + (int)v13 - 1;
        else
          v7 = (int)v13;
LABEL_42:
        if ( v14 == v7 )
          goto LABEL_34;
LABEL_31:
        if ( *(_BYTE *)(*(_QWORD *)a3 + v7) != 44 )
        {
          v15 = *(char *)(*(_QWORD *)a3 + v7);
          if ( v15 > 0x7F )
            goto LABEL_19;
          goto LABEL_33;
        }
LABEL_34:
        v18 = *(_DWORD *)(module_data + 1416);
        BYTE1(v18) |= 1u;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v20 == v22 )
      {
        if ( !v7 )
        {
          v7 = (int)v13;
          if ( (int)v13 == v22 )
            goto LABEL_34;
          goto LABEL_31;
        }
        goto LABEL_56;
      }
      if ( (_DWORD)v13 == 1 )
      {
        if ( !isspace(0) )
          goto LABEL_19;
        v14 = v22;
        if ( !v7 )
        {
          v7 = 1;
          goto LABEL_29;
        }
        v19 = 1;
        goto LABEL_40;
      }
      v21 = *(char *)(*(_QWORD *)a3 + v20);
      if ( *(_BYTE *)(*(_QWORD *)a3 + v20) == 44 )
      {
        if ( !v7 )
        {
          v7 = (int)v13;
          goto LABEL_29;
        }
LABEL_56:
        v7 = (int)v7 + (int)v13 - 1;
        goto LABEL_29;
      }
    }
    if ( v21 > 0x7F || !isspace(v21) )
      goto LABEL_19;
    v14 = v22;
    if ( !v7 )
    {
LABEL_41:
      v7 = v19;
      if ( v9 )
        goto LABEL_42;
LABEL_29:
      if ( v14 == v7 )
        goto LABEL_34;
      if ( !v7 )
        goto LABEL_13;
      goto LABEL_31;
    }
LABEL_40:
    v19 = v19 + v7 - 1;
    goto LABEL_41;
  }
  if ( v7 )
  {
    v19 = 0;
    goto LABEL_40;
  }
  if ( v9 )
    goto LABEL_42;
  if ( !v22 )
    goto LABEL_34;
LABEL_13:
  v15 = 0;
LABEL_33:
  if ( isspace(v15) )
    goto LABEL_34;
LABEL_19:
  v18 = *(_DWORD *)(module_data + 1416);
  BYTE1(v18) &= ~1u;
LABEL_20:
  *(_DWORD *)(module_data + 1416) = v18;
  if ( v6 )
    qfree();
  return 0;
}

