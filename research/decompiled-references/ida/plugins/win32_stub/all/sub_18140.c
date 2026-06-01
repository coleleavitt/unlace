unsigned __int64 __fastcall sub_18140(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  size_t v8; // r8
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r9
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, unsigned __int8, __int64); // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+0h] [rbp-78h]
  unsigned __int64 v17; // [rsp+0h] [rbp-78h]
  size_t v18; // [rsp+8h] [rbp-70h]
  size_t v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-60h]
  unsigned __int64 v22; // [rsp+20h] [rbp-58h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  sub_27550(&v20, 34);
  v6 = pack_dd() - (_QWORD)src;
  v8 = v6;
  if ( !v6 )
    goto LABEL_7;
  v9 = v21;
  v10 = v21 + v6;
  if ( !__CFADD__(v21, v6) )
    goto LABEL_14;
  if ( v21 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
    v14 = v20;
    v15 = v21;
    if ( v22 < v10 )
    {
      v19 = v8;
      v17 = v10;
      v20 = qvector_reserve();
      v14 = v20;
      v8 = v19;
      v15 = v21;
      v10 = v17;
    }
    v18 = v8;
    v16 = v10;
    memset((void *)(v14 + v15), 0, v10 - v15);
    v8 = v18;
    v21 = v16;
    goto LABEL_6;
  }
  if ( v21 != 0x7FFFFFFFFFFFFFFFLL )
    v21 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v9 + v20), src, v8);
LABEL_7:
  sub_25080(&v20, a2, a3, v7, v8);
  v11 = a1 + 864;
  v12 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v12 == sub_A900 )
    sub_23F10(v11, 34, &v20, 0);
  else
    v12(v11, 34u, (__int64)&v20);
  qfree();
  if ( v20 )
  {
    v21 = 0;
    qfree();
  }
  return v24 - __readfsqword(0x28u);
}

