__int64 __fastcall sub_96C10(char *a1)
{
  const char *v1; // rbp
  bool v2; // zf
  const char *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebp
  void (__fastcall *v8)(char *); // rax
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  const char *v17; // rax
  const char *v18; // rbp
  size_t v19; // rax
  size_t v20; // r12
  void *v21; // rdi
  size_t v22; // r13
  __int64 v23; // rax
  int v24; // [rsp+Ch] [rbp-105Ch] BYREF
  __int64 (__fastcall **v25[2])(_QWORD); // [rsp+10h] [rbp-1058h] BYREF
  void *v26; // [rsp+20h] [rbp-1048h]
  char *v27; // [rsp+28h] [rbp-1040h]
  _BYTE v28[4104]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v29; // [rsp+1038h] [rbp-30h]

  v1 = s1;
  v2 = *((_QWORD *)a1 + 7) == 0;
  v29 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = *((const char **)a1 + 6);
  sub_19BFE0(v28, 4096, v1, "idb_ok");
  sub_19AC90(*((_QWORD *)a1 + 22), &v24, 0xFFFFFFFFLL);
  if ( v24 == -1 )
  {
    v17 = sub_2C700(-1);
    v18 = v17;
    if ( v17 && (v19 = strlen(v17), (v20 = v19) != 0) )
    {
      v21 = *((void **)a1 + 25);
      v22 = v19 + 1;
      if ( *((_QWORD *)a1 + 27) < v19 + 1 )
      {
        v23 = sub_1987B0(a1 + 200, *((_QWORD *)a1 + 25), v22, 1);
        *((_QWORD *)a1 + 25) = v23;
        v21 = (void *)v23;
      }
      *((_QWORD *)a1 + 26) = v22;
      memmove(v21, v18, v20);
      *(_BYTE *)(*((_QWORD *)a1 + 25) + v20) = 0;
    }
    else
    {
      *((_QWORD *)a1 + 26) = 0;
    }
  }
  else
  {
    if ( v24 )
    {
      sub_198100(v28);
      sub_299F0((char **)a1 + 25);
      v4 = s1;
      if ( !*((_QWORD *)a1 + 26) )
        goto LABEL_7;
      goto LABEL_27;
    }
    if ( !(unsigned __int8)sub_197CA0(v28) )
    {
      sub_299F0((char **)a1 + 25);
      v4 = s1;
      if ( !*((_QWORD *)a1 + 26) )
      {
LABEL_7:
        sub_18FAC0(0, v4);
        goto LABEL_8;
      }
LABEL_27:
      v4 = *((const char **)a1 + 25);
      goto LABEL_7;
    }
    sub_198100(v28);
    *((_DWORD *)a1 + 48) = 0;
  }
LABEL_8:
  v27 = a1;
  v25[0] = (__int64 (__fastcall **)(_QWORD))off_237C70;
  v25[1] = nullptr;
  v26 = nullptr;
  interr_exc_t___vtable_at_1764016(0x56u, v25, nullptr, (const __m128i *)&interr_exc_t___vtable_at_1764016, v5, v6);
  v7 = *((_DWORD *)a1 + 48);
  if ( a1 )
  {
    v8 = *(void (__fastcall **)(char *))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v8 == (char *)sub_94F20 )
    {
      v9 = *((void **)a1 + 25);
      *(_QWORD *)a1 = &off_237C98;
      if ( v9 )
      {
        *((_QWORD *)a1 + 26) = 0;
        j__free(v9);
      }
      v10 = *((void **)a1 + 18);
      if ( v10 )
      {
        *((_QWORD *)a1 + 19) = 0;
        j__free(v10);
      }
      v11 = *((void **)a1 + 15);
      if ( v11 )
      {
        *((_QWORD *)a1 + 16) = 0;
        j__free(v11);
      }
      v12 = *((void **)a1 + 12);
      if ( v12 )
      {
        *((_QWORD *)a1 + 13) = 0;
        j__free(v12);
      }
      v13 = *((void **)a1 + 9);
      if ( v13 )
      {
        *((_QWORD *)a1 + 10) = 0;
        j__free(v13);
      }
      v14 = *((void **)a1 + 6);
      if ( v14 )
      {
        *((_QWORD *)a1 + 7) = 0;
        j__free(v14);
      }
      v15 = *((void **)a1 + 3);
      if ( v15 )
      {
        *((_QWORD *)a1 + 4) = 0;
        j__free(v15);
      }
      operator delete(a1, 0xE0u);
    }
    else
    {
      v8(a1);
    }
  }
  v25[0] = (__int64 (__fastcall **)(_QWORD))&off_23D510;
  sub_199D50(v26);
  return v7;
}
