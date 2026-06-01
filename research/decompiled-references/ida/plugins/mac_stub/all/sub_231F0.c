unsigned __int64 __fastcall sub_231F0(__int64 a1)
{
  __int64 v2; // rax
  size_t v3; // rbx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, unsigned __int8, __int64); // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-60h]
  unsigned __int64 v13; // [rsp+10h] [rbp-58h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  sub_32790(&v11, 36);
  v2 = pack_dd() - (_QWORD)src;
  v3 = v2;
  if ( !v2 )
    goto LABEL_7;
  v4 = v12;
  v5 = v12 + v2;
  if ( !__CFADD__(v12, v2) )
    goto LABEL_14;
  if ( v12 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
    v9 = v11;
    v10 = v12;
    if ( v13 < v5 )
    {
      v11 = qvector_reserve();
      v9 = v11;
      v10 = v12;
    }
    memset((void *)(v9 + v10), 0, v5 - v10);
    v12 = v5;
    goto LABEL_6;
  }
  if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
    v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v4 + v11), src, v3);
LABEL_7:
  v6 = a1 + 864;
  v7 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v7 == sub_D0D0 )
    sub_2F150(v6, 36, &v11, 0);
  else
    v7(v6, 36u, (__int64)&v11);
  qfree();
  if ( v11 )
  {
    v12 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}

