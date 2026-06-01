unsigned __int64 __fastcall sub_54680(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  size_t v5; // rax
  __int64 v6; // r13
  size_t v7; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+Ch] [rbp-5Ch]
  _BYTE v26[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v27[2]; // [rsp+21h] [rbp-47h] BYREF
  _BYTE v28[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v29[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2[1];
  v29[0] = __readfsqword(0x28u);
  v4 = *a2;
  if ( a2[2] < (unsigned __int64)(v2 + 1) )
  {
    v22 = qvector_reserve(a2, v4, v2 + 1, 1);
    *a2 = v22;
    v4 = v22;
    v2 = a2[1];
  }
  *(_BYTE *)(v4 + v2) = 3;
  ++a2[1];
  v5 = pack_dd(v26, v28, *(unsigned int *)(a1 + 4)) - (_QWORD)v26;
  if ( v5 )
    sub_545C0(a2, v26, v5);
  v6 = *(_QWORD *)(a1 + 16);
  v25 = (unsigned __int16)v6;
  v7 = pack_dw(v26, v27, (unsigned __int16)v6) - (_QWORD)v26;
  if ( v7 )
    sub_545C0(a2, v26, v7);
  v8 = 0;
  v9 = 2LL * (unsigned __int16)v6;
  if ( v25 )
  {
    do
    {
      v10 = pack_dw(v26, v27, *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + v8)) - (_QWORD)v26;
      if ( v10 )
        sub_545C0(a2, v26, v10);
      v8 += 2;
    }
    while ( v9 != v8 );
  }
  v11 = pack_dq(v26, v29, *(_QWORD *)(a1 + 32)) - (_QWORD)v26;
  if ( v11 )
    sub_545C0(a2, v26, v11);
  v12 = pack_dq(v26, v29, *(_QWORD *)(a1 + 40)) - (_QWORD)v26;
  if ( v12 )
    sub_545C0(a2, v26, v12);
  v13 = a2[1];
  v14 = *(_DWORD *)(a1 + 48);
  v15 = *a2;
  if ( a2[2] < (unsigned __int64)(v13 + 1) )
  {
    v24 = qvector_reserve(a2, v15, v13 + 1, 1);
    *a2 = v24;
    v15 = v24;
    v13 = a2[1];
  }
  *(_BYTE *)(v15 + v13) = v14;
  v16 = a2[1];
  v17 = *a2;
  v18 = v16 + 1;
  v19 = v16 + 2;
  a2[1] = v18;
  v20 = *(_DWORD *)(a1 + 52);
  if ( a2[2] < v19 )
  {
    v23 = qvector_reserve(a2, v17, v19, 1);
    *a2 = v23;
    v17 = v23;
    v18 = a2[1];
  }
  *(_BYTE *)(v17 + v18) = v20;
  ++a2[1];
  return v29[0] - __readfsqword(0x28u);
}

