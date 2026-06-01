__int64 *__fastcall sub_324570(__int64 *a1, __int64 a2, __int64 a3)
{
  char v5; // di
  char v6; // al
  __int64 v7; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbp
  size_t v12; // rax
  __int64 v13; // r13
  size_t v14; // r14
  size_t v15; // r15
  __int64 v16; // rsi
  size_t v17; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rsi
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rbp
  unsigned int v31; // edi
  char *v32; // r14
  size_t v33; // rax
  __int64 v34; // r14
  size_t v35; // r15
  size_t v36; // r8
  __int64 v37; // rsi
  size_t v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // r15
  unsigned __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+0h] [rbp-488h]
  size_t v46; // [rsp+0h] [rbp-488h]
  size_t v47; // [rsp+8h] [rbp-480h]
  __int64 v48; // [rsp+18h] [rbp-470h] BYREF
  __int64 tinfo_property; // [rsp+20h] [rbp-468h] BYREF
  __int128 v50; // [rsp+28h] [rbp-460h]
  char s[2]; // [rsp+40h] [rbp-448h] BYREF
  char v52; // [rsp+42h] [rbp-446h] BYREF
  unsigned __int64 v53; // [rsp+448h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v48 = 0;
  copy_tinfo_t();
  while ( 1 )
  {
    while ( (get_tinfo_property() & 0xF) == 0xA )
    {
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      v19 = 2;
      clear_tinfo_t();
      v20 = a1[1];
      if ( v20 )
        v19 = v20-- + 1;
      v21 = *a1;
      if ( a1[2] < v19 )
      {
        v28 = qvector_reserve();
        *a1 = v28;
        a1[1] = v19;
        *(_BYTE *)(v28 + v20) = 112;
      }
      else
      {
        a1[1] = v19;
        *(_BYTE *)(v21 + v20) = 112;
      }
      *(_BYTE *)(*a1 + v20 + 1) = 0;
    }
    v5 = v48;
    if ( (get_tinfo_property() & 0xF) != 0xB )
      break;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v6 = get_tinfo_property();
    v7 = a1[1];
    if ( (v6 & 0x1F) == 0x12 )
    {
      if ( v7 )
      {
        v8 = v7 + 2;
        v9 = v7 + 3;
        v10 = *a1;
        --v7;
        if ( a1[2] >= v9 )
        {
LABEL_7:
          a1[1] = v9;
          *(_BYTE *)(v10 + v8) = 0;
          v11 = *a1 + v7;
          *(_WORD *)v11 = 29811;
          *(_BYTE *)(v11 + 2) = 114;
          clear_tinfo_t();
          v5 = v48;
          break;
        }
      }
      else
      {
        v10 = *a1;
        v9 = 4;
        v8 = 3;
        if ( (unsigned __int64)a1[2] >= 4 )
          goto LABEL_7;
      }
      v26 = qvector_reserve();
      *a1 = v26;
      v10 = v26;
      goto LABEL_7;
    }
    if ( v7 )
    {
      v24 = v7 + 2;
      v23 = v7 + 3;
      v22 = *a1;
      --v7;
      if ( a1[2] >= v23 )
        goto LABEL_23;
    }
    else
    {
      v22 = *a1;
      v23 = 4;
      v24 = 3;
      if ( (unsigned __int64)a1[2] >= 4 )
        goto LABEL_23;
    }
    v45 = v24;
    v27 = qvector_reserve();
    *a1 = v27;
    v24 = v45;
    v22 = v27;
LABEL_23:
    a1[1] = v23;
    *(_BYTE *)(v22 + v24) = 0;
    v25 = *a1 + v7;
    *(_WORD *)v25 = 29281;
    *(_BYTE *)(v25 + 2) = 114;
  }
  if ( v5 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v39 = a1[1];
      if ( v39 )
      {
        v40 = v39 + 3;
        v41 = v39 + 4;
        --v39;
      }
      else
      {
        v41 = 5;
        v40 = 4;
      }
      v42 = *a1;
      if ( a1[2] < v41 )
      {
        v43 = qvector_reserve();
        *a1 = v43;
        v42 = v43;
      }
      a1[1] = v41;
      *(_BYTE *)(v42 + v40) = 0;
      *(_DWORD *)(*a1 + v39) = 1668183398;
    }
    else
    {
      v50 = 0;
      tinfo_property = 0;
      sub_3242C0(&tinfo_property, (__int64)&v48, nullptr);
      v30 = s;
      qstrncpy();
      v31 = s[0];
      if ( s[0] == 99 )
      {
        sub_3215C0(s, "const ");
        v31 = s[0];
      }
      if ( (_BYTE)v31 == 115 )
      {
        sub_3215C0(s, "struct ");
        v31 = s[0];
      }
      if ( (_BYTE)v31 == 117 )
      {
        sub_3215C0(s, "union ");
        v31 = s[0];
      }
      if ( (_BYTE)v31 == 101 )
      {
        sub_3215C0(s, "enum ");
        v31 = s[0];
      }
      v32 = s;
      if ( (_BYTE)v31 )
      {
        do
        {
          if ( (_BYTE)v31 != 95 && (v31 > 0x7F || !isalnum(v31)) )
            *v32 = 95;
          v31 = *++v32;
        }
        while ( (_BYTE)v31 );
        if ( &v52 < v32 && *(v32 - 2) == 95 && *(v32 - 1) == 116 )
          *(v32 - 2) = 0;
      }
      qstrlwr();
      if ( s[0] == 95 )
      {
        do
          ++v30;
        while ( *v30 == 95 );
      }
      v33 = strlen(v30);
      v34 = a1[1];
      v35 = v33;
      v36 = v33;
      if ( v34 )
      {
        --v34;
        v36 = v33 + v34;
      }
      v37 = *a1;
      v38 = v36 + 1;
      if ( a1[2] < v36 + 1 )
      {
        v47 = v36;
        v46 = v36 + 1;
        v44 = qvector_reserve();
        v36 = v47;
        v38 = v46;
        *a1 = v44;
        v37 = v44;
      }
      a1[1] = v38;
      *(_BYTE *)(v37 + v36) = 0;
      memmove((void *)(v34 + *a1), v30, v35);
      if ( tinfo_property )
      {
        *(_QWORD *)&v50 = 0;
        qfree();
      }
    }
  }
  if ( a3 != -1 )
  {
    qsnprintf();
    v12 = strlen(s);
    v13 = a1[1];
    v14 = v12;
    v15 = v12;
    if ( v13 )
    {
      --v13;
      v15 = v12 + v13;
    }
    v16 = *a1;
    v17 = v15 + 1;
    if ( a1[2] < v15 + 1 )
    {
      v29 = qvector_reserve();
      *a1 = v29;
      v17 = v15 + 1;
      v16 = v29;
    }
    a1[1] = v17;
    *(_BYTE *)(v16 + v15) = 0;
    memmove((void *)(v13 + *a1), s, v14);
  }
  clear_tinfo_t();
  return a1;
}

