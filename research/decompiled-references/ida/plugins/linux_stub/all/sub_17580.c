__int64 __fastcall sub_17580(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-80h]
  unsigned __int64 v19; // [rsp+8h] [rbp-80h]
  _QWORD v20[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-60h]
  unsigned __int64 v23; // [rsp+30h] [rbp-58h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  sub_267D0(&v21, 40);
  v5 = pack_dd() - (_QWORD)src;
  v6 = v5;
  if ( !v5 )
    goto LABEL_7;
  v7 = v22;
  v8 = v22 + v5;
  if ( !__CFADD__(v22, v5) )
    goto LABEL_18;
  if ( v22 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v8 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
    v16 = v21;
    v17 = v22;
    if ( v23 < v8 )
    {
      v19 = v8;
      v21 = qvector_reserve();
      v16 = v21;
      v8 = v19;
      v17 = v22;
    }
    v18 = v8;
    memset((void *)(v16 + v17), 0, v8 - v17);
    v22 = v18;
    goto LABEL_6;
  }
  if ( v22 != 0x7FFFFFFFFFFFFFFFLL )
    v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v7 + v21), src, v6);
LABEL_7:
  v9 = a1 + 864;
  v10 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v10 == sub_A820 )
    v11 = (unsigned int *)sub_23190(v9, 40, &v21, 0);
  else
    v11 = (unsigned int *)v10(v9, 40u, (__int64)&v21);
  v12 = v11;
  if ( v11 )
  {
    v13 = *v11;
    v20[0] = (char *)v12 + 5;
    v20[1] = (char *)v12 + v13 + 5;
    v14 = unpack_dd();
    if ( v14 == 1 )
      sub_24530(a3, v20);
    qfree();
  }
  else
  {
    v14 = -2;
  }
  if ( v21 )
  {
    v22 = 0;
    qfree();
  }
  return v14;
}

