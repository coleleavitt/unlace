__int64 __fastcall sub_37BB0(const void **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned int v9; // ebx
  char *v10; // rbp
  char *v11; // rdi
  __int64 v12; // rax
  char v14; // r14
  size_t v15; // rdx
  _BYTE *v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  size_t v19; // r13
  unsigned __int64 v20; // r13
  _BYTE *v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int128 v28; // [rsp+28h] [rbp-40h]
  unsigned __int64 v29; // [rsp+38h] [rbp-30h]

  v5 = *(_QWORD *)(a3 + 8);
  v29 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  s1 = nullptr;
  v8 = v7;
  v26 = 0;
  v9 = sub_36D30((__int64 *)&s1, a4);
  if ( !(_BYTE)v9 )
  {
LABEL_11:
    v10 = s1;
    goto LABEL_12;
  }
  v27 = 0;
  v28 = 0;
  if ( (_QWORD)v26 )
  {
    v10 = s1;
    if ( *s1 != 67 )
    {
      v11 = s1;
      if ( strcmp(s1, "Ljava/lang/String;") || !*(_QWORD *)(v8 + 8) )
      {
        v9 = 0;
        goto LABEL_12;
      }
      v12 = sub_135E0(v11, "Ljava/lang/String;");
      if ( !(unsigned __int8)sub_4F290(v12 + 864, &v27, *(_QWORD *)(v8 + 8)) )
        goto LABEL_8;
      qstr2user();
      v14 = 34;
      goto LABEL_20;
    }
LABEL_17:
    if ( !(unsigned __int8)utf16_utf8() )
    {
LABEL_8:
      v9 = 0;
LABEL_9:
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree();
      }
      goto LABEL_11;
    }
    qstr2user();
    v14 = 39;
LABEL_20:
    v15 = (size_t)a1[1];
    v16 = *a1;
    v17 = (unsigned __int64)a1[2];
    if ( v15 )
    {
      v18 = v15 + 1;
      v19 = v15 - 1;
      if ( v17 >= v15 + 1 )
        goto LABEL_22;
    }
    else
    {
      if ( v17 > 1 )
      {
        a1[1] = &dword_0 + 2;
        v16[1] = 0;
LABEL_24:
        v20 = 2;
        *(_BYTE *)*a1 = v14;
        v21 = a1[1];
        if ( v21 )
          v20 = (unsigned __int64)(v21-- + 1);
        v22 = (__int64)*a1;
        if ( (unsigned __int64)a1[2] < v20 )
        {
          v23 = qvector_reserve();
          *a1 = (const void *)v23;
          v22 = v23;
        }
        a1[1] = (const void *)v20;
        v21[v22] = v14;
        v21[(_QWORD)*a1 + 1] = 0;
        goto LABEL_9;
      }
      v19 = 0;
      v18 = 2;
    }
    v24 = qvector_reserve();
    *a1 = (const void *)v24;
    v16 = (_BYTE *)v24;
    v15 = v19 + 1;
LABEL_22:
    a1[1] = (const void *)v18;
    v16[v15] = 0;
    if ( v19 )
      memmove((char *)*a1 + 1, *a1, v19);
    goto LABEL_24;
  }
  if ( byte_7FAF1 == 67 )
    goto LABEL_17;
  v10 = s1;
  v9 = 0;
LABEL_12:
  if ( v10 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v9;
}

