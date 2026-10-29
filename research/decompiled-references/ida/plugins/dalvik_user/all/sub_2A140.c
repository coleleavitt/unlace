__int64 __fastcall sub_2A140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // r13d
  _QWORD *v13; // rbx
  unsigned int v14; // ebp
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rsi
  _DWORD *v18; // rax
  __int64 v20; // rax
  int v21; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 16);
  v22 = __readfsqword(0x28u);
  sub_29F50(v7, a2, a3, a4, a5, a6);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = v9;
  if ( 40 * v8 )
  {
    do
    {
      if ( *(_BYTE *)v10 == 8 )
      {
        *(_QWORD *)(v10 + 8) = *(_QWORD *)(a2 + 104);
        v9 = *(_QWORD *)(a1 + 24);
        v8 = *(_QWORD *)(a1 + 32);
      }
      v10 += 40;
    }
    while ( v10 != v9 + 40 * v8 );
  }
  v11 = sub_50D40(*(_QWORD *)(a1 + 16) + 864LL, &v21, 4, 2, a1 + 24);
  v12 = *(_DWORD *)(a1 + 48);
  v13 = *(_QWORD **)(a1 + 16);
  v14 = v11;
  v15 = v21;
  v16 = v13[218];
  v17 = v13[217];
  if ( v13[219] < (unsigned __int64)(v16 + 1) )
  {
    v20 = qvector_reserve();
    v13[217] = v20;
    v17 = v20;
    v16 = v13[218];
  }
  v18 = (_DWORD *)(v17 + 8 * v16);
  *v18 = v12;
  v18[1] = v15;
  ++v13[218];
  return v14;
}

