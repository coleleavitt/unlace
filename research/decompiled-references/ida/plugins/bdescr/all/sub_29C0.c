unsigned __int64 __fastcall sub_29C0(__int64 a1, __int64 *a2)
{
  char v2; // al
  unsigned __int16 v3; // ax
  unsigned __int8 v4; // r13
  const char *v5; // rbp
  _QWORD *v6; // r14
  char *v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  _QWORD *v10; // r12
  size_t v11; // rax
  size_t v12; // rbx
  char v14; // al
  void *v15; // rdi
  size_t v16; // r13
  void *v17; // rdi
  size_t v18; // r15
  char *v19; // rax
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v2 = netnode_charval();
  if ( *(_BYTE *)(a1 + 192) )
  {
    v14 = v2 & 5;
    v4 = 6;
    if ( v14 != 1 )
    {
      v4 = 7;
      if ( v14 == 4 )
        goto LABEL_18;
    }
  }
  else if ( (v2 & 8) != 0 )
  {
    v3 = get_word() & 0x14FF;
    if ( v3 == 32 )
      goto LABEL_38;
    if ( v3 <= 0x20u )
    {
      v4 = 0;
      if ( v3 == 3 )
        goto LABEL_8;
      v4 = 1;
      if ( v3 == 16 )
        goto LABEL_8;
      v4 = 4;
      if ( v3 == 1 )
        goto LABEL_8;
LABEL_18:
      v4 = 5;
      goto LABEL_8;
    }
    if ( v3 == 160 )
    {
LABEL_38:
      v4 = 2;
      goto LABEL_8;
    }
    v4 = 3;
    if ( v3 != 1024 )
    {
      v4 = 1;
      if ( v3 != 144 )
        goto LABEL_18;
    }
  }
  else
  {
    v4 = get_byte() + 8;
    if ( v4 >= 0x1Eu )
      v4 = 8;
  }
LABEL_8:
  if ( (get_flags_ex() & 0x4000) != 0 )
  {
    if ( get_ea_name() > 0 )
    {
      v19 = strchr(nullptr, 91);
      if ( v19 )
      {
        v5 = v19 + 1;
        v20 = strchr(v19 + 1, 93);
        if ( v20 )
        {
          if ( v5 != v20 )
          {
            *v20 = 0;
            goto LABEL_10;
          }
        }
      }
    }
    get_ea_name();
  }
  v5 = &src;
LABEL_10:
  sub_28F0(*a2);
  v6 = (_QWORD *)*a2;
  v7 = off_6BC0[v4];
  if ( v7 && (v8 = strlen(v7), (v9 = v8) != 0) )
  {
    v17 = (void *)v6[3];
    v18 = v8 + 1;
    if ( v6[5] < v8 + 1 )
    {
      v22 = qvector_reserve();
      v6[3] = v22;
      v17 = (void *)v22;
    }
    v6[4] = v18;
    memmove(v17, v7, v9);
    *(_BYTE *)(v6[3] + v9) = 0;
    v10 = (_QWORD *)*a2;
  }
  else
  {
    v6[4] = 0;
    v10 = (_QWORD *)*a2;
  }
  v11 = strlen(v5);
  v12 = v11;
  if ( v11 )
  {
    v15 = (void *)v10[6];
    v16 = v11 + 1;
    if ( v10[8] < v11 + 1 )
    {
      v21 = qvector_reserve();
      v10[6] = v21;
      v15 = (void *)v21;
    }
    v10[7] = v16;
    memmove(v15, v5, v12);
    *(_BYTE *)(v10[6] + v12) = 0;
  }
  else
  {
    v10[7] = 0;
  }
  return v23 - __readfsqword(0x28u);
}

