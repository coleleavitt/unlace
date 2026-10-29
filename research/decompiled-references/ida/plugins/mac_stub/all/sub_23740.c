__int64 __fastcall sub_23740(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  size_t v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r8
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, unsigned __int8, __int64); // rax
  __int64 v10; // rax
  int v11; // eax
  int v13; // eax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-80h]
  unsigned __int64 v17; // [rsp+8h] [rbp-80h]
  const void *v18; // [rsp+10h] [rbp-78h]
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-60h]
  unsigned __int64 v21; // [rsp+30h] [rbp-58h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v2 = a1;
  v23 = __readfsqword(0x28u);
  sub_32790(&v19, 45);
  v4 = pack_dq() - (_QWORD)src;
  v5 = v4;
  if ( !v4 )
    goto LABEL_7;
  v6 = v20;
  v7 = v20 + v4;
  if ( !__CFADD__(v20, v4) )
    goto LABEL_20;
  if ( v20 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_20:
    v14 = v19;
    v15 = v20;
    if ( v21 < v7 )
    {
      v17 = v7;
      v19 = qvector_reserve();
      v14 = v19;
      v7 = v17;
      v15 = v20;
    }
    v16 = v7;
    memset((void *)(v14 + v15), 0, v7 - v15);
    v20 = v16;
    goto LABEL_6;
  }
  if ( v20 != 0x7FFFFFFFFFFFFFFFLL )
    v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v6 + v19), src, v5);
LABEL_7:
  v8 = a1 + 864;
  v9 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(v2 + 864) + 16LL);
  if ( v9 == sub_D0D0 )
    v10 = sub_2F150(v8, 45, &v19, 0);
  else
    v10 = v9(v8, 45u, (__int64)&v19);
  if ( v10 )
  {
    v18 = (const void *)(v10 + 5);
    v11 = unpack_dd();
    LOBYTE(v2) = v11 != 0;
    if ( v11 )
    {
      v13 = unpack_dd();
      if ( v13 )
        sub_22530(a2, v18, v13);
    }
    qfree();
  }
  else
  {
    LODWORD(v2) = 0;
  }
  if ( v19 )
  {
    v20 = 0;
    qfree();
  }
  return (unsigned int)v2;
}

