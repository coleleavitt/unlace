__int64 __fastcall sub_18DF0(__int64 a1, const char *a2, __int64 *a3, char a4)
{
  char *v6; // rbp
  size_t v8; // rax
  __int64 v9; // rbx
  size_t v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rbp
  size_t v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, unsigned __int8, __int64); // rax
  __int64 v22; // rax
  unsigned int v23; // r14d
  int v25; // ebp
  unsigned __int64 v26; // [rsp+0h] [rbp-88h]
  unsigned __int64 v27; // [rsp+0h] [rbp-88h]
  unsigned __int64 v28; // [rsp+0h] [rbp-88h]
  unsigned __int64 v29; // [rsp+0h] [rbp-88h]
  size_t na; // [rsp+8h] [rbp-80h]
  size_t nc; // [rsp+8h] [rbp-80h]
  size_t nb; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-60h]
  unsigned __int64 v36; // [rsp+30h] [rbp-58h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v6 = (char *)a2;
  v38 = __readfsqword(0x28u);
  sub_267D0(&v34, 35);
  if ( !a2 )
  {
    v9 = v35;
    v10 = 1;
    v6 = "";
    v11 = v35 + 1;
    if ( v35 == -1 )
    {
      v9 = -1;
      v6 = "";
      v35 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_6;
    }
    goto LABEL_3;
  }
  v8 = strlen(a2);
  v9 = v35;
  v10 = v8 + 1;
  v11 = v8 + 1 + v35;
  if ( !__CFADD__(v8 + 1, v35) )
  {
LABEL_3:
    v12 = v34;
    v13 = v9;
    if ( v36 < v11 )
    {
      n = v10;
      v29 = v11;
      v34 = qvector_reserve();
      v12 = v34;
      v10 = n;
      v13 = v35;
      v11 = v29;
    }
    na = v10;
    v26 = v11;
    memset((void *)(v12 + v13), 0, v11 - v13);
    v10 = na;
    v35 = v26;
    goto LABEL_6;
  }
  if ( v35 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_3;
  }
  if ( v35 != 0x7FFFFFFFFFFFFFFFLL )
    v35 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v34 + v9), v6, v10);
  v14 = pack_dd() - (_QWORD)src;
  v15 = v14;
  if ( !v14 )
    goto LABEL_18;
  v16 = v35;
  v17 = v35 + v14;
  if ( __CFADD__(v35, v14) )
  {
    if ( v35 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v35 != 0x7FFFFFFFFFFFFFFFLL )
        v35 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_17;
    }
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v18 = v34;
  v19 = v35;
  if ( v36 < v17 )
  {
    nb = v35;
    v28 = v17;
    v34 = qvector_reserve();
    v18 = v34;
    v16 = nb;
    v19 = v35;
    v17 = v28;
  }
  nc = v16;
  v27 = v17;
  memset((void *)(v18 + v19), 0, v17 - v19);
  v16 = nc;
  v35 = v27;
LABEL_17:
  memcpy((void *)(v16 + v34), src, v15);
LABEL_18:
  v20 = a1 + 864;
  v21 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v21 == sub_A820 )
    v22 = sub_23190(v20, 35, &v34, 0);
  else
    v22 = v21(v20, 35u, (__int64)&v34);
  if ( v22 )
  {
    v23 = unpack_dd();
    if ( v23 == -1 )
    {
      v25 = unpack_dd();
      *__errno_location() = v25;
    }
    else if ( a3 && a4 )
    {
      *a3 = unpack_dq();
    }
    qfree();
  }
  else
  {
    v23 = -1;
  }
  if ( v34 )
  {
    v35 = 0;
    qfree();
  }
  return v23;
}

