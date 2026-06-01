__int64 __fastcall sub_4FE20(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v4; // rdx
  size_t v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbp
  __int64 i; // r13
  size_t v10; // rax
  size_t v11; // rax
  _BYTE v12[5]; // [rsp+16h] [rbp-4Ah] BYREF
  _BYTE v13[5]; // [rsp+1Bh] [rbp-45h] BYREF
  unsigned __int64 v14[8]; // [rsp+20h] [rbp-40h] BYREF

  v14[0] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = a3[1];
  if ( v4 )
  {
    v6 = pack_dd(v12, v13, v4) - (_QWORD)v12;
    v7 = a2;
    if ( v6 )
    {
      sub_4E640((__int64 *)a1, v12, v6);
      v7 = a2;
    }
    v8 = *a3;
    for ( i = (__int64)&(*a3)[2 * (_QWORD)a3[1]]; (__int64 *)i != v8; v8 += 2 )
    {
      v10 = pack_dq(v12, v14, *v8 + 1 - v7) - (_QWORD)v12;
      if ( v10 )
        sub_4E640((__int64 *)a1, v12, v10);
      v11 = pack_dd(v12, v13, (unsigned int)(*((_DWORD *)v8 + 2) + 1)) - (_QWORD)v12;
      if ( v11 )
        sub_4E640((__int64 *)a1, v12, v11);
      v7 = *v8;
    }
  }
  return a1;
}
