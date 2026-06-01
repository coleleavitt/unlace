unsigned __int64 __fastcall sub_22950(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  size_t v7; // rax
  size_t v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  __int64 v16; // rax
  _BYTE v17[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v18[2]; // [rsp+21h] [rbp-47h] BYREF
  _BYTE v19[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v20[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a2[1];
  v5 = *a2;
  v20[0] = __readfsqword(0x28u);
  if ( a2[2] < (unsigned __int64)(v4 + 1) )
  {
    v16 = qvector_reserve(a2, v5, v4 + 1, 1);
    *a2 = v16;
    v5 = v16;
    v4 = a2[1];
  }
  *(_BYTE *)(v5 + v4) = 1;
  ++a2[1];
  v7 = pack_dd(v17, v19, *((unsigned int *)a1 + 6)) - (_QWORD)v17;
  if ( v7 )
    sub_226C0(a2, v17, v7);
  v8 = pack_dw(v17, v18, *((unsigned __int16 *)a1 + 4)) - (_QWORD)v17;
  if ( v8 )
    sub_226C0(a2, v17, v8);
  v9 = *a1;
  v10 = *a1 + 32 * a1[1];
  if ( v10 != *a1 )
  {
    do
    {
      v11 = pack_dq(v17, v20, *(_QWORD *)v9 - a3) - (_QWORD)v17;
      if ( v11 )
        sub_226C0(a2, v17, v11);
      v12 = pack_dq(v17, v20, -*(_QWORD *)(v9 + 8)) - (_QWORD)v17;
      if ( v12 )
        sub_226C0(a2, v17, v12);
      v13 = pack_dq(v17, v20, *(_QWORD *)(v9 + 16)) - (_QWORD)v17;
      if ( v13 )
        sub_226C0(a2, v17, v13);
      v14 = pack_dw(v17, v18, *(unsigned __int16 *)(v9 + 24)) - (_QWORD)v17;
      if ( v14 )
        sub_226C0(a2, v17, v14);
      v9 += 32;
    }
    while ( v10 != v9 );
  }
  return v20[0] - __readfsqword(0x28u);
}

