__int64 __fastcall sub_1DD80(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v4; // zf
  __int64 v6; // rax
  size_t v7; // rbp
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v10; // rax
  unsigned int *v11; // r13
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v15; // r13
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  const void *v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-80h]
  unsigned __int64 v21; // [rsp+8h] [rbp-80h]
  _QWORD v22[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  __int128 v24; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v4 = *(_BYTE *)(a1 + 960) == 0;
  v26 = __readfsqword(0x28u);
  if ( !v4 )
  {
    v13 = 1;
    copy_debug_event();
    *(_WORD *)(a1 + 960) = 0;
    return v13;
  }
  if ( *(_BYTE *)(a1 + 961) )
  {
    if ( (int)sub_25020(*(_QWORD *)(a1 + 1040), a3) > 0 )
    {
      v24 = 0;
      v23 = 0;
      v19 = (const void *)sub_23190(a1 + 864, 17, &v23, 1);
      if ( v19 )
      {
        sub_B1C0((__int64)"rpc: event protocol error (rp=%p has_event=%d)", v19, *(unsigned __int8 *)(a1 + 960));
        if ( !v23 )
          return (unsigned int)-1;
        goto LABEL_30;
      }
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        v13 = 0;
        qfree();
        return v13;
      }
    }
    return 0;
  }
  sub_267D0(&v23, 17);
  v6 = pack_dd() - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v15 = v24;
    v16 = v24 + v6;
    if ( __CFADD__((_QWORD)v24, v6) )
    {
      if ( (unsigned __int64)v24 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v24 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v24 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_19;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = v23;
    v18 = v24;
    if ( *((_QWORD *)&v24 + 1) < v16 )
    {
      v21 = v16;
      v23 = qvector_reserve();
      v17 = v23;
      v16 = v21;
      v18 = v24;
    }
    v20 = v16;
    memset((void *)(v17 + v18), 0, v16 - v18);
    *(_QWORD *)&v24 = v20;
LABEL_19:
    memcpy((void *)(v15 + v23), src, v7);
  }
  v8 = a1 + 864;
  v9 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v9 == sub_A820 )
    v10 = (unsigned int *)sub_23190(v8, 17, &v23, 0);
  else
    v10 = (unsigned int *)v9(v8, 17u, (__int64)&v23);
  v11 = v10;
  if ( !v10 )
  {
    if ( !v23 )
      return (unsigned int)-1;
LABEL_30:
    *(_QWORD *)&v24 = 0;
    qfree();
    return (unsigned int)-1;
  }
  v12 = *v10;
  v22[0] = (char *)v11 + 5;
  v22[1] = (char *)v11 + v12 + 5;
  v13 = unpack_dd();
  if ( (int)v13 > 0 )
    sub_23EB0(a2, v22);
  else
    *(_BYTE *)(a1 + 961) = 1;
  qfree();
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v13;
}

