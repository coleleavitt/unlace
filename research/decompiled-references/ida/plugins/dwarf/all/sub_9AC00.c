__int64 __fastcall sub_9AC00(__int64 a1)
{
  void *exception; // rbp
  char *v2; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  const char *v9; // rax
  const char *v10; // rbp
  size_t v11; // rax
  size_t v12; // r12
  void *v13; // rdi
  size_t v14; // r13
  const char *v15; // rax
  const char *v16; // r12
  size_t v17; // rax
  size_t v18; // r13
  __int64 v19; // rax
  void *v20; // rdi
  size_t v21; // r14
  __int64 v22; // rax
  int v23; // [rsp+4h] [rbp-144h] BYREF
  __int64 v24; // [rsp+8h] [rbp-140h] BYREF
  __int64 v25[4]; // [rsp+10h] [rbp-138h] BYREF
  __int128 v26; // [rsp+30h] [rbp-118h]
  __int128 v27; // [rsp+40h] [rbp-108h]
  __int64 v28; // [rsp+50h] [rbp-F8h]
  __int128 v29; // [rsp+58h] [rbp-F0h]
  __int64 v30; // [rsp+68h] [rbp-E0h]
  __int128 v31; // [rsp+70h] [rbp-D8h]
  __int64 v32; // [rsp+A8h] [rbp-A0h]
  __int128 v33; // [rsp+B0h] [rbp-98h]
  __int64 v34; // [rsp+C0h] [rbp-88h]
  __int128 v35; // [rsp+C8h] [rbp-80h]
  __int64 v36; // [rsp+E4h] [rbp-64h]
  __int64 v37; // [rsp+ECh] [rbp-5Ch]
  __int64 v38; // [rsp+F4h] [rbp-54h]
  unsigned __int64 v39; // [rsp+FCh] [rbp-4Ch]
  __int64 v40; // [rsp+108h] [rbp-40h]
  unsigned __int64 v41; // [rsp+118h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 212) & 0x20) == 0 )
  {
    if ( (unsigned __int8)sub_84C30(a1) )
    {
      v9 = (const char *)sub_986B0(a1);
      v10 = v9;
      if ( !v9 || (v11 = strlen(v9), (v12 = v11) == 0) )
      {
        *(_QWORD *)(a1 + 72) = 0;
        goto LABEL_22;
      }
      v13 = *(void **)(a1 + 64);
      v14 = v11 + 1;
      if ( *(_QWORD *)(a1 + 80) < v11 + 1 )
      {
        v19 = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), v14, 1);
        *(_QWORD *)(a1 + 64) = v19;
        v13 = (void *)v19;
      }
      *(_QWORD *)(a1 + 72) = v14;
      memmove(v13, v10, v12);
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + v12) = 0;
    }
    else
    {
      v5 = operator new(0x20u);
      *(_QWORD *)v5 = off_C9528;
      *(_OWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 8) = 1;
      v25[0] = v5;
      v38 = 0x80000000LL;
      v39 = 0xFFFFFFFF00000000LL;
      v6 = *(_QWORD *)a1;
      v25[3] = 0;
      v28 = 0;
      v30 = 0;
      v32 = 0;
      v34 = 0;
      v40 = 0;
      v36 = 0;
      v37 = 0;
      v26 = 0;
      v27 = 0;
      v29 = 0;
      v31 = 0;
      v33 = 0;
      v35 = 0;
      v7 = *(_QWORD *)(v6 + 24);
      v8 = *(_QWORD *)(a1 + 256);
      v24 = 0;
      v23 = 0;
      if ( !(*(unsigned int (__fastcall **)(__int64, __int64, int *, __int64 *))(v8 + 112))(v7, 71, &v23, &v24)
        && v23
        && (unsigned __int8)sub_9AB20((__int64 *)a1, v25) )
      {
        v15 = (const char *)sub_9AC00(v25);
        v16 = v15;
        if ( v15 && (v17 = strlen(v15), (v18 = v17) != 0) )
        {
          v20 = *(void **)(a1 + 64);
          v21 = v17 + 1;
          if ( *(_QWORD *)(a1 + 80) < v17 + 1 )
          {
            v22 = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), v21, 1);
            *(_QWORD *)(a1 + 64) = v22;
            v20 = (void *)v22;
          }
          *(_QWORD *)(a1 + 72) = v21;
          memmove(v20, v16, v18);
          *(_BYTE *)(*(_QWORD *)(a1 + 64) + v18) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 72) = 0;
        }
      }
      sub_1B750((__int64)v25);
    }
    if ( *(_QWORD *)(a1 + 72) > 1u )
    {
      *(_DWORD *)(a1 + 212) |= 0x20u;
      return *(_QWORD *)(a1 + 64);
    }
LABEL_22:
    exception = __cxa_allocate_exception(0x18u);
    v2 = sub_81C40(a1);
    sub_95790((__int64)exception, (__int64)"Couldn't retrieve the name of expected-named DIE %s", v2);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'die_t::load_failure_t, (void (*)(void *))sub_52F60);
  }
  return *(_QWORD *)(a1 + 64);
}

