__int64 __fastcall sub_340A0(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        char a7,
        __int64 a8,
        __int64 *a9)
{
  unsigned int v9; // r14d
  __int64 v10; // r12
  __int64 v11; // rbx
  void (__fastcall ***v12)(_QWORD); // rdi
  bool v13; // zf
  unsigned int v14; // r15d
  const char *v15; // r9
  unsigned __int64 v17; // rax
  char v18; // al
  unsigned __int8 v19; // al
  unsigned int v20; // eax
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int8 *v28; // rbx
  char *v29; // r12
  int v30; // ecx
  const char *v31; // r9
  __int64 v32; // rdx
  __int64 i; // rax
  __int64 v34; // [rsp+0h] [rbp-490h]
  unsigned int v35; // [rsp+8h] [rbp-488h]
  __int64 v36; // [rsp+8h] [rbp-488h]
  __int64 v40; // [rsp+28h] [rbp-468h]
  unsigned __int8 *v41; // [rsp+28h] [rbp-468h]
  unsigned int v42; // [rsp+3Ch] [rbp-454h] BYREF
  __int64 v43; // [rsp+40h] [rbp-450h] BYREF
  __int64 v44; // [rsp+48h] [rbp-448h] BYREF
  char v45[1024]; // [rsp+50h] [rbp-440h] BYREF
  _BYTE v46[8]; // [rsp+450h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+458h] [rbp-38h]

  v40 = a1;
  v9 = *(_DWORD *)(a4 + 56);
  v10 = a8;
  v47 = __readfsqword(0x28u);
  if ( v9 != 1 )
  {
    sub_2DC20(a9, "Only MD5 patterns are accepted");
LABEL_21:
    if ( !unk_2439A0 )
      sub_198E10(1570);
LABEL_62:
    BUG();
  }
  v11 = a4;
  if ( *(_QWORD *)(a4 + 72) != 16 )
  {
    sub_2DC20(a9, "Bad data");
    goto LABEL_21;
  }
  if ( !*a6 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1571);
    goto LABEL_62;
  }
  v42 = 0;
  sub_318B0((__int64)&v43, a1, "SELECT fk_func FROM calcrel_hash WHERE hash = ?");
  if ( v43 )
  {
    if ( (unsigned __int8)sub_2F9D0(a8, (__int64)&v43, (__int64)"B", v11 + 64) )
    {
      unk_241E60(&v44, &v43, a8);
      if ( v44 && (unsigned __int8)unk_241E70(&v44, a8) )
        sub_2F910(a8, (__int64)&v44, (__int64)"u", &v42);
      sub_33A10(&v44);
    }
    v12 = (void (__fastcall ***)(_QWORD))v43;
    if ( v43 )
    {
      v13 = (*(_DWORD *)(v43 + 8))-- == 1;
      if ( v13 )
        (**v12)(v12);
    }
  }
  v14 = v42;
  if ( v42 )
  {
    if ( (a7 & 0xE) != 0 )
      goto LABEL_19;
    sub_318B0((__int64)&v43, v40, "SELECT name, size, ea, metadata FROM funcs WHERE id = ?");
    if ( !v43 || !(unsigned __int8)sub_2F9D0(a8, (__int64)&v43, (__int64)"u", v42) )
    {
LABEL_33:
      sub_32C50(&v43);
      v14 = v42;
      goto LABEL_19;
    }
    unk_241E60(&v44, &v43, a8);
    if ( !v44
      || !(unsigned __int8)unk_241E70(&v44, a8)
      || !(unsigned __int8)sub_2F910(a8, (__int64)&v44, (__int64)"siUB", a3, a3 + 24, a3 + 56, a3 + 32) )
    {
      goto LABEL_32;
    }
    if ( (a7 & 0xF) == 1 )
      goto LABEL_43;
    v35 = sub_7D960(a3);
    v20 = sub_7D960(v11);
    if ( v35 < v20 )
      goto LABEL_43;
    if ( v35 != v20 )
    {
LABEL_32:
      sub_33A10(&v44);
      goto LABEL_33;
    }
    v21 = *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)(a3 + 8) )
    {
      v22 = *(const char **)a3;
      v23 = s1;
      if ( !v21 )
        goto LABEL_42;
    }
    else
    {
      v22 = s1;
      if ( !v21 )
      {
LABEL_55:
        if ( *(_DWORD *)(v11 + 24) != *(_DWORD *)(a3 + 24) )
          goto LABEL_43;
        v32 = *(_QWORD *)(v11 + 40);
        if ( v32 != *(_QWORD *)(a3 + 40) )
          goto LABEL_43;
        for ( i = 0; v32 != i; ++i )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v11 + 32) + i) != *(_BYTE *)(*(_QWORD *)(a3 + 32) + i) )
            goto LABEL_43;
        }
        goto LABEL_32;
      }
    }
    v23 = *(const char **)v11;
LABEL_42:
    if ( strcmp(v23, v22) )
    {
LABEL_43:
      sub_33A10(&v44);
      sub_32C50(&v43);
      v26 = *(_QWORD *)(v11 + 72);
      if ( v26 )
      {
        v27 = v40;
        v41 = (unsigned __int8 *)(*(_QWORD *)(v11 + 64) + v26);
        v36 = v11;
        v28 = *(unsigned __int8 **)(v11 + 64);
        LOBYTE(v34) = a8;
        v29 = v45;
        do
        {
          v30 = *v28++;
          v29 += (int)sub_19D9D0((_DWORD)v29, v46 - v29, (unsigned int)"%02X", v30, v24, v25, v34);
        }
        while ( v28 != v41 );
        v11 = v36;
        v10 = v34;
        v40 = v27;
      }
      sub_2F0E0(v40, (__int64)"Updating function info for %s\n", v45);
      v13 = *(_QWORD *)(v11 + 8) == 0;
      v44 = 0;
      v31 = s1;
      if ( !v13 )
        v31 = *(const char **)v11;
      v9 = 0;
      if ( (unsigned __int8)sub_33870(
                              v40,
                              v10,
                              &v44,
                              "UPDATE funcs SET name = ?, metadata = ?, ea = ? WHERE id = ?",
                              (__int64)"sBUu",
                              v31,
                              v11 + 32,
                              a5,
                              v42) )
      {
        v9 = 3;
        if ( v44 != 1 )
          v9 = 0;
      }
      goto LABEL_17;
    }
    goto LABEL_55;
  }
  v15 = s1;
  if ( *(_QWORD *)(v11 + 8) )
    v15 = *(const char **)v11;
  if ( !(unsigned __int8)sub_33870(
                           v40,
                           a8,
                           nullptr,
                           "INSERT INTO funcs ( name, size, ea, metadata) VALUES (?, ?, ?, ?)",
                           (__int64)"siUB",
                           v15,
                           *(unsigned int *)(v11 + 24),
                           a5,
                           v11 + 32) )
  {
LABEL_17:
    v14 = v42;
    goto LABEL_19;
  }
  v17 = unk_241EA0(v40 + 368);
  if ( HIDWORD(v17) )
  {
    sub_2DC20((__int64 *)a8, "ID overflow");
    *(_DWORD *)(a8 + 24) = -2;
  }
  else
  {
    v42 = v17;
    if ( v17 )
    {
      v18 = sub_33870(
              v40,
              a8,
              nullptr,
              "INSERT INTO calcrel_hash (hash, fk_func) VALUES (?, ?)",
              (__int64)"Bu",
              v11 + 64,
              v17);
      v14 = v42;
      if ( v18 )
      {
        v19 = sub_33870(v40, a8, nullptr, "INSERT INTO func_freqs (fk_func, counter) VALUES (?, 0)", (__int64)"u", v42);
        v14 = v42;
        v9 = v19 + 1;
      }
    }
  }
LABEL_19:
  *a2 = v14;
  return v9;
}
