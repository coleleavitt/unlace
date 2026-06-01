unsigned __int64 __fastcall sub_12600(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // r8
  __int64 v3; // r9
  void (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  char *v14; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  void (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  char *v22; // rbp
  int v23; // eax
  char *v24; // r8
  const char *v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  size_t v29; // r13
  void (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // r12
  unsigned __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int16 word; // ax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  void *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  char *v44; // rbp
  char v45; // al
  char *v46; // r12
  char radix; // al
  __int64 v48; // rax
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v50; // [rsp+8h] [rbp-40h]
  unsigned __int64 v51; // [rsp+18h] [rbp-30h]

  v1 = *(_WORD *)(a1 + 248);
  v51 = __readfsqword(0x28u);
  if ( v1 == 189 )
  {
    word = get_word(*(_QWORD *)(a1 + 240));
    v39 = sub_13B00(*(_QWORD *)(a1 + 616), word, &s1, v36, v37, v38);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 16);
      v41 = &unk_16EE8;
      if ( (_BYTE)s1 )
      {
        if ( v40 )
          v41 = *(void **)(v39 + 8);
        sub_10A70(a1, 0xFFFFFFFFLL, (__int64)&unk_16650, v41);
      }
      else
      {
        if ( v40 )
          v41 = *(void **)(v39 + 8);
        sub_10A70(a1, 0xFFFFFFFFLL, (__int64)&unk_16668, v41);
      }
    }
  }
  else
  {
    s1 = nullptr;
    v50 = 0;
    if ( v1 == 182
      && *(_QWORD *)(a1 + 272) == 15
      && *(_BYTE *)(a1 + 305) == 5
      && (*(_BYTE *)(*(_QWORD *)(a1 + 632) + 4LL) & 8) != 0
      && get_predef_insn_cmt(&s1, a1 + 224) > 0 )
    {
      if ( (_QWORD)v50 )
      {
        v22 = s1;
        if ( !strncmp(s1, "Trap ", 5u) )
          v22 += 5;
        v23 = strncmp(v22, "sysTrap", 7u);
        v24 = v22 + 7;
        v25 = "systrap";
        if ( !v23 )
        {
LABEL_45:
          sub_10A70(a1, 0xFFFFFFFFLL, (__int64)&unk_16688, v25, v24);
          v14 = s1;
          if ( !s1 )
            return v51 - __readfsqword(0x28u);
          goto LABEL_27;
        }
      }
      else
      {
        v22 = (char *)&unk_16EE8;
      }
      if ( !strncmp(v22, "sysLibTrap", 0xAu) )
      {
        v24 = v22 + 10;
        v25 = "syslibtrap";
        goto LABEL_45;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
    if ( *(_BYTE *)(a1 + 265) )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
    if ( *(_BYTE *)(a1 + 305) && (*(_BYTE *)(a1 + 308) & 8) != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      if ( (**(_DWORD **)(a1 + 632) & 0x10000000) == 0 )
      {
        v4 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v4 == (char *)sub_109F0 )
        {
          v5 = *(_QWORD *)(a1 + 32);
          v6 = 2;
          if ( v5 )
            v6 = v5-- + 1;
          v7 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v6 )
          {
            v48 = qvector_reserve(a1 + 24, v7, v6, 1, v2, v3);
            *(_QWORD *)(a1 + 24) = v48;
            v7 = v48;
          }
          *(_QWORD *)(a1 + 32) = v6;
          *(_BYTE *)(v7 + v5) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v5 + 1) = 0;
        }
        else
        {
          v4(a1, 32);
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
    }
    if ( *(_BYTE *)(a1 + 345) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      if ( (**(_DWORD **)(a1 + 632) & 0x10000000) == 0 )
      {
        v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v10 == (char *)sub_109F0 )
        {
          v11 = *(_QWORD *)(a1 + 32);
          v12 = 2;
          if ( v11 )
            v12 = v11-- + 1;
          v13 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v12 )
          {
            v43 = qvector_reserve(a1 + 24, v13, v12, 1, v8, v9);
            *(_QWORD *)(a1 + 24) = v43;
            v13 = v43;
          }
          *(_QWORD *)(a1 + 32) = v12;
          *(_BYTE *)(v13 + v11) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v11 + 1) = 0;
        }
        else
        {
          v10(a1, 32);
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
    }
    if ( *(_BYTE *)(a1 + 385) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      if ( (**(_DWORD **)(a1 + 632) & 0x10000000) == 0 )
      {
        v18 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v18 == (char *)sub_109F0 )
        {
          v19 = *(_QWORD *)(a1 + 32);
          v20 = 2;
          if ( v19 )
            v20 = v19-- + 1;
          v21 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v20 )
          {
            v42 = qvector_reserve(a1 + 24, v21, v20, 1, v16, v17);
            *(_QWORD *)(a1 + 24) = v42;
            v21 = v42;
          }
          *(_QWORD *)(a1 + 32) = v20;
          *(_BYTE *)(v21 + v19) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v19 + 1) = 0;
        }
        else
        {
          v18(a1, 32);
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 3);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
    if ( *(_WORD *)(a1 + 248) == 182 && *(_QWORD *)(a1 + 272) == 15 && *(_BYTE *)(a1 + 305) == 5 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 632) + 88LL),
        32);
      v26 = *(_QWORD *)(a1 + 632);
      v29 = strlen(*(const char **)(v26 + 88));
      if ( (v29 & 7) != 0 )
      {
        do
        {
          v30 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
          if ( (char *)v30 == (char *)sub_109F0 )
          {
            v31 = *(_QWORD *)(a1 + 32);
            v32 = 2;
            if ( v31 )
              v32 = v31-- + 1;
            v33 = *(_QWORD *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 40) < v32 )
            {
              v34 = qvector_reserve(a1 + 24, v33, v32, 1, v27, v28);
              *(_QWORD *)(a1 + 24) = v34;
              v33 = v34;
            }
            *(_QWORD *)(a1 + 32) = v32;
            *(_BYTE *)(v33 + v31) = 32;
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v31 + 1) = 0;
          }
          else
          {
            v30(a1, 32);
          }
          ++v29;
        }
        while ( (v29 & 7) != 0 );
        v26 = *(_QWORD *)(a1 + 632);
      }
      if ( (*(_BYTE *)(v26 + 4) & 8) == 0
        || get_predef_insn_cmt(&s1, a1 + 224) <= 0
        || !(_QWORD)v50
        || ((v44 = s1, strncmp(s1, "Trap ", 5u)) ? (v45 = *v44, v46 = v44) : (v45 = v44[5], v46 = v44 + 5),
            !v45 || ((*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v46, 28), !v46)) )
      {
        radix = get_radix(*(_QWORD *)(a1 + 720), 0);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(
          a1,
          *(_QWORD *)(a1 + 312),
          (unsigned int)radix);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
    }
    v14 = s1;
    if ( s1 )
    {
LABEL_27:
      *(_QWORD *)&v50 = 0;
      qfree(v14);
    }
  }
  return v51 - __readfsqword(0x28u);
}
