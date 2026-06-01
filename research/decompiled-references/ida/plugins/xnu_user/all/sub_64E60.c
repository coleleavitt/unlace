__int64 __fastcall sub_64E60(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // r9d
  int v6; // r13d
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  char v19; // r8
  __int64 v20; // rbx
  bool v21; // cf
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  int v24; // r13d
  int v25; // ebx
  int v26; // r13d
  __int64 v27; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rsi
  unsigned __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rax
  char v38; // [rsp+7h] [rbp-69h]
  char v39; // [rsp+7h] [rbp-69h]
  char v40; // [rsp+7h] [rbp-69h]
  char v41; // [rsp+7h] [rbp-69h]
  char v42; // [rsp+17h] [rbp-59h] BYREF
  __int64 v43; // [rsp+18h] [rbp-58h]
  __int128 v44; // [rsp+20h] [rbp-50h]
  unsigned __int64 v45; // [rsp+30h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 32) = 0;
  v43 = 0;
  v44 = 0;
  v3 = sub_64D80(a1, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
LABEL_79:
    if ( (_QWORD)v44 )
    {
      sub_64930(a1, 0, (__int64)"GDB: Warning: the previous %zu bytes have been discarded!\n", (size_t)v44);
      *(_QWORD *)&v44 = 0;
    }
    goto LABEL_50;
  }
  LOBYTE(v5) = v3;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = v44;
    if ( (_BYTE)v5 != 36 )
    {
      if ( (((_BYTE)v5 - 43) & 0xFD) != 0 )
      {
        v9 = v43;
        if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
        {
          v38 = v5;
          v43 = qvector_reserve();
          v8 = v44;
          v9 = v43;
          LOBYTE(v5) = v38;
        }
        *(_BYTE *)(v9 + v8) = v5;
        *(_QWORD *)&v44 = v44 + 1;
        v4 = sub_64D80(a1, a2);
        if ( v4 < 0 )
          goto LABEL_79;
        v5 = v4;
        v10 = 0;
        continue;
      }
      if ( (_BYTE)v5 == 43 )
      {
        if ( (_QWORD)v44 )
        {
          sub_64930(a1, 0, (__int64)"GDB: Warning: the previous %zu bytes have been discarded!\n", (size_t)v44);
          *(_QWORD *)&v44 = 0;
        }
        v4 = 2;
      }
      else
      {
        if ( (_QWORD)v44 )
        {
          sub_64930(a1, 0, (__int64)"GDB: Warning: the previous %zu bytes have been discarded!\n", (size_t)v44);
          *(_QWORD *)&v44 = 0;
        }
        v4 = 3;
      }
LABEL_50:
      if ( *(_QWORD *)(a1 + 224) > 1u )
        goto LABEL_44;
      goto LABEL_51;
    }
    if ( (_QWORD)v44 )
    {
      if ( byte_9AD89 )
      {
        v33 = *(_QWORD *)(a1 + 224);
        v34 = *(_QWORD *)(a1 + 216);
        v35 = v33 - 1;
        if ( v33 - 1 <= 1 )
        {
          if ( v34 )
          {
            *(_QWORD *)(a1 + 224) = 0;
            qfree();
            *(_QWORD *)(a1 + 216) = 0;
            v8 = v44;
            *(_QWORD *)(a1 + 232) = 0;
          }
        }
        else
        {
          if ( *(_QWORD *)(a1 + 232) < v35 )
          {
            v37 = qvector_reserve();
            *(_QWORD *)(a1 + 216) = v37;
            v34 = v37;
          }
          *(_QWORD *)(a1 + 224) = v35;
          *(_BYTE *)(v34 + v33 - 2) = 0;
          v8 = v44;
        }
      }
      sub_64930(a1, 0, (__int64)"GDB: Warning: the previous %zu bytes have been discarded!\n", v8);
      *(_QWORD *)&v44 = 0;
      sub_64930(a1, 2, (__int64)"%c", 36);
    }
    v29 = sub_64D80(a1, a2);
    v4 = v29;
    if ( v29 < 0 )
      goto LABEL_79;
    v5 = v29;
    v10 = 1;
  }
  while ( v10 != 1 );
  while ( 1 )
  {
    while ( (_BYTE)v5 != 35 )
    {
      v7 += v5;
      if ( (_BYTE)v5 == 42 )
      {
        v30 = sub_64D80(a1, a2);
        v4 = v30;
        if ( v30 < 0 )
          goto LABEL_79;
        v15 = v30;
        v16 = 2;
        goto LABEL_23;
      }
      v11 = *(_QWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v11 + 1) )
      {
        v39 = v5;
        v31 = qvector_reserve();
        *(_QWORD *)(a1 + 24) = v31;
        v12 = v31;
        LOBYTE(v5) = v39;
        v11 = *(_QWORD *)(a1 + 32);
      }
      *(_BYTE *)(v12 + v11) = v5;
      ++*(_QWORD *)(a1 + 32);
      v4 = sub_64D80(a1, a2);
      if ( v4 < 0 )
        goto LABEL_79;
      v5 = v4;
    }
    v13 = sub_64D80(a1, a2);
    v4 = v13;
    if ( v13 < 0 )
      goto LABEL_79;
    if ( (unsigned __int8)(v13 - 48) <= 9u )
    {
      v6 = v13 - 48;
      v14 = sub_64D80(a1, a2);
      goto LABEL_21;
    }
    if ( (unsigned __int8)(v13 - 97) <= 5u )
    {
      v6 = v13 - 87;
      v14 = sub_64D80(a1, a2);
      goto LABEL_21;
    }
    if ( (unsigned __int8)(v13 - 65) <= 5u )
    {
      v6 = v13 - 55;
      v14 = sub_64D80(a1, a2);
LABEL_21:
      v4 = v14;
      if ( v14 < 0 )
        goto LABEL_79;
      v15 = v14;
      v16 = 4;
      goto LABEL_23;
    }
    v36 = sub_64D80(a1, a2);
    v4 = v36;
    if ( v36 < 0 )
      goto LABEL_79;
    v15 = v36;
    v6 = -1;
    v16 = 4;
LABEL_23:
    if ( v16 == 4 )
    {
      v24 = 16 * v6;
      if ( (unsigned __int8)(v15 - 48) <= 9u )
      {
        v26 = (v4 - 48) | v24;
        if ( v26 >= 0 )
          goto LABEL_38;
      }
      else
      {
        if ( (unsigned __int8)(v15 - 97) <= 5u )
        {
          v25 = v4 - 87;
        }
        else
        {
          if ( (unsigned __int8)(v15 - 65) > 5u )
            goto LABEL_59;
          v25 = v4 - 55;
        }
        v26 = v25 | v24;
        if ( v26 >= 0 )
        {
LABEL_38:
          if ( *(_BYTE *)(a1 + 249) && (unsigned __int8)v7 != v26 )
          {
            sub_64930(
              a1,
              0,
              (__int64)"GDB: BAD CHECKSUM: calculated: %02X, sent by target: %02X.\n",
              (unsigned __int8)v7,
              (unsigned __int8)v26);
            goto LABEL_41;
          }
          if ( (_QWORD)v44 )
          {
            sub_64930(a1, 0, (__int64)"GDB: Warning: the previous %zu bytes have been discarded!\n", (size_t)v44);
            *(_QWORD *)&v44 = 0;
            if ( *(_BYTE *)(a1 + 248) )
              goto LABEL_49;
          }
          else if ( *(_BYTE *)(a1 + 248) )
          {
LABEL_49:
            v4 = 1;
            goto LABEL_50;
          }
          sub_64B90(a1, byte_7D387, 1);
          goto LABEL_49;
        }
      }
LABEL_59:
      sub_64930(a1, 0, (__int64)"GDB: Invalid checksum character: %s\n", *(const char **)(a1 + 24));
      v27 = v44;
      if ( !(_QWORD)v44 )
        goto LABEL_42;
      goto LABEL_60;
    }
    v17 = *(_QWORD *)(a1 + 32);
    v18 = *(_QWORD *)(a1 + 24);
    if ( (unsigned __int8)(v15 - 32) > 0x5Eu || (unsigned __int8)(v15 - 35) <= 1u || !v17 )
      break;
    v19 = *(_BYTE *)(v18 + v17 - 1);
    v7 += v15;
    v20 = v4 - 29;
    v42 = v19;
    v21 = __CFADD__(v17, v20);
    v22 = v17 + v20;
    if ( !v21 )
    {
      v23 = *(_QWORD *)(a1 + 40);
      if ( (unsigned __int64)&v42 < v18 )
      {
        if ( v23 >= v22 )
          goto LABEL_31;
LABEL_88:
        v40 = v19;
        *(_QWORD *)(a1 + 24) = qvector_reserve();
        v19 = v40;
        v17 = *(_QWORD *)(a1 + 32);
LABEL_83:
        if ( v17 < v22 )
        {
          do
          {
            v18 = *(_QWORD *)(a1 + 24);
LABEL_31:
            *(_BYTE *)(v18 + v17++) = v19;
          }
          while ( v17 != v22 );
        }
        goto LABEL_32;
      }
      if ( (unsigned __int64)&v42 >= v18 + v23 )
      {
        if ( v23 >= v22 )
          goto LABEL_83;
        goto LABEL_88;
      }
      if ( v23 >= v22 )
      {
LABEL_71:
        if ( v17 < v22 )
        {
          do
          {
            v18 = *(_QWORD *)(a1 + 24);
LABEL_73:
            *(_BYTE *)(v18 + v17++) = v19;
          }
          while ( v22 != v17 );
        }
LABEL_32:
        *(_QWORD *)(a1 + 32) = v22;
        goto LABEL_56;
      }
LABEL_95:
      v41 = v19;
      *(_QWORD *)(a1 + 24) = qvector_reserve();
      v19 = v41;
      v17 = *(_QWORD *)(a1 + 32);
      goto LABEL_71;
    }
    if ( v17 >= 0 )
    {
      v22 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v17 != 0x7FFFFFFFFFFFFFFFLL )
      {
        v32 = *(_QWORD *)(a1 + 40);
        if ( (unsigned __int64)&v42 < v18 )
        {
          if ( v32 > 0x7FFFFFFFFFFFFFFELL )
            goto LABEL_31;
          goto LABEL_88;
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
        if ( (unsigned __int64)&v42 >= v18 + v32 )
        {
          if ( v32 > 0x7FFFFFFFFFFFFFFELL )
            goto LABEL_31;
          goto LABEL_88;
        }
        if ( v32 > 0x7FFFFFFFFFFFFFFELL )
          goto LABEL_73;
        goto LABEL_95;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 32) = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_56:
    v4 = sub_64D80(a1, a2);
    if ( v4 < 0 )
      goto LABEL_79;
    v5 = v4;
  }
  sub_64930(a1, 0, (__int64)"GDB: Invalid RLE encoding: %s\n", *(const char **)(a1 + 24));
LABEL_41:
  v27 = v44;
  if ( !(_QWORD)v44 )
  {
LABEL_42:
    v4 = 0;
    goto LABEL_43;
  }
LABEL_60:
  sub_64930(a1, 0, (__int64)"GDB: Warning: the previous %zu bytes have been discarded!\n", v27);
  *(_QWORD *)&v44 = 0;
  v4 = 0;
LABEL_43:
  if ( *(_QWORD *)(a1 + 224) > 1u )
  {
LABEL_44:
    sub_140F0((__int64)"%s\n", *(const char **)(a1 + 216));
    if ( *(_QWORD *)(a1 + 240) )
    {
      sub_63AE0();
      qflush();
    }
    *(_QWORD *)(a1 + 224) = 0;
  }
LABEL_51:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  return (unsigned int)v4;
}

