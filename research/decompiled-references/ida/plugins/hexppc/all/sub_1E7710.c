_DWORD *__fastcall sub_1E7710(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rbx
  _QWORD *v21; // r12
  _DWORD *result; // rax
  __int128 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  char v33; // [rsp+1Ch] [rbp-3Ch]
  char v34; // [rsp+1Ch] [rbp-3Ch]

  v6 = a3;
  v7 = a4;
  v12 = a2[1];
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a2 - **(_QWORD **)a1) >> 3);
  v15 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v15 + 1) )
  {
    v33 = a6;
    v26 = qvector_reserve();
    a6 = v33;
    v7 = a4;
    *(_QWORD *)(a1 + 8) = v26;
    v13 = v26;
    v6 = a3;
    v15 = *(_QWORD *)(a1 + 16);
  }
  v16 = (_DWORD *)(v13 + 8 * v15);
  *v16 = v14;
  v16[1] = v12;
  ++*(_QWORD *)(a1 + 16);
  v17 = a2[1];
  v18 = *a2;
  if ( a2[2] < (unsigned __int64)(v17 + 1) )
  {
    v34 = a6;
    v32 = v7;
    v30 = v6;
    v27 = qvector_reserve();
    v17 = a2[1];
    a6 = v34;
    *a2 = v27;
    v7 = v32;
    v18 = v27;
    v6 = v30;
  }
  v19 = v17 << 6;
  v20 = v18 + v19;
  *(_OWORD *)v20 = 0;
  *(_BYTE *)(v20 + 56) = 0;
  *(_QWORD *)(v20 + 16) = 0;
  *(_QWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 32) = 0;
  *(_OWORD *)(v20 + 40) = 0;
  ++a2[1];
  v21 = (_QWORD *)(v18 + v19 + 16);
  *(_QWORD *)v20 = v7;
  *(_QWORD *)(v20 + 8) = a5;
  *(_BYTE *)(v20 + 56) = a6;
  if ( a6 )
  {
    sub_1245A0(v6, (__int64 *)(v18 + v19 + 16), a5, 1u);
    result = (_DWORD *)sub_60D40(v21, (_QWORD *)(a1 + 56));
    if ( (_BYTE)result )
      return result;
  }
  else
  {
    *((_QWORD *)&v23 + 1) = v18 + v19 + 16;
    *(_QWORD *)&v23 = v6;
    sub_120460(v23, a5, 1u, 0xFFFF0000);
    result = (_DWORD *)sub_60D40(v21, (_QWORD *)(a1 + 56));
    if ( (_BYTE)result )
      return result;
  }
  result = (_DWORD *)sub_3142F0(v20 + 32, a1 + 72);
  if ( !(_BYTE)result )
  {
    v24 = *(_QWORD *)(a1 + 40);
    v25 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v24 + 1) )
    {
      v28 = qvector_reserve();
      *(_QWORD *)(a1 + 32) = v28;
      v25 = v28;
      v24 = *(_QWORD *)(a1 + 40);
    }
    result = (_DWORD *)(v25 + 8 * v24);
    *result = v14;
    result[1] = v12;
    ++*(_QWORD *)(a1 + 40);
  }
  return result;
}

