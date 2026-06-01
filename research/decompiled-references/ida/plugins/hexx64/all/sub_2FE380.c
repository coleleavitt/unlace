unsigned __int64 __fastcall sub_2FE380(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // eax
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128i si128; // xmm1
  int v14; // edi
  __int64 module_data; // rax
  int *v16; // rax
  __int64 v17; // rcx
  char v19; // [rsp+4h] [rbp-7Ch]
  __int64 v20; // [rsp+8h] [rbp-78h] BYREF
  __int64 v21; // [rsp+10h] [rbp-70h] BYREF
  __int128 v22; // [rsp+18h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-50h]
  unsigned __int64 v25; // [rsp+40h] [rbp-40h]

  v19 = a4;
  v25 = __readfsqword(0x28u);
  v5 = *a1;
  v22 = 0;
  v21 = 0;
  v20 = v5;
  sub_2AE320(&v21, (__int64)(a1 + 1), a3, a4);
  v23 = a1[4];
  v6 = *((_DWORD *)a1 + 10);
  BYTE1(v6) |= 2u;
  v24 = v6;
  v7 = (_QWORD *)operator new(0xB8u);
  sub_3CD700((__int64)v7, (__int64)&v20, a3, v8);
  v9 = v7[1];
  v7[9] = 0;
  *v7 = &off_4E2680;
  if ( *(int *)(v9 + 28) > 0 )
  {
    v10 = 0;
    do
    {
      v11 = operator new(0x58u);
      v12 = v7[1];
      si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
      v14 = *(_DWORD *)(v12 + 4LL * (int)v10 + 16);
      *(_DWORD *)(v11 + 12) = -1;
      *(_QWORD *)(v11 + 32) = v12;
      *(_DWORD *)(v11 + 8) = v14;
      *(_QWORD *)(v11 + 40) = 0;
      *(_QWORD *)v11 = &off_4E2510;
      *(_QWORD *)(v11 + 72) = 0;
      *(_QWORD *)(v11 + 80) = a2;
      *(__m128i *)(v11 + 16) = si128;
      *(_OWORD *)(v11 + 48) = 0;
      switch_dbctx();
      module_data = get_module_data();
      v7[v10 + 7] = v11;
      v9 = v7[1];
      *(_DWORD *)(v11 + 12) = v10++;
      *(_QWORD *)(v11 + 64) = module_data;
      *(_QWORD *)v11 = &off_4E25C8;
    }
    while ( *(_DWORD *)(v9 + 28) > (int)v10 );
  }
  v16 = (int *)&unk_42D870;
  do
  {
    v17 = *v16++;
    v7[v17 + 19] = v7[v17 + 7];
  }
  while ( &unk_42D87C != (_UNKNOWN *)v16 );
  v7[22] = *(int *)(v9 + 28);
  if ( (unsigned __int8)sub_2FDC00(v7) )
  {
    if ( !v19 )
      *((_DWORD *)v7 + 12) |= 0x100u;
  }
  else if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v25 - __readfsqword(0x28u);
}

