__int64 __fastcall sub_2F3360(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __m128i si128; // xmm0
  int v13; // edi
  __int64 module_data; // rax
  int *v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax

  v6 = operator new(0xB8u);
  sub_3CD700(v6, a1, a3, v7);
  v8 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = &off_4E2088;
  if ( *(int *)(v8 + 28) > 0 )
  {
    v9 = 0;
    do
    {
      v10 = operator new(0x58u);
      v11 = *(_QWORD *)(v6 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
      v13 = *(_DWORD *)(v11 + 4LL * (int)v9 + 16);
      *(_DWORD *)(v10 + 12) = -1;
      *(_QWORD *)(v10 + 32) = v11;
      *(_DWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 40) = 0;
      *(_QWORD *)v10 = &off_4E1FD0;
      *(_QWORD *)(v10 + 72) = 0;
      *(_QWORD *)(v10 + 80) = a2;
      *(__m128i *)(v10 + 16) = si128;
      *(_OWORD *)(v10 + 48) = 0;
      switch_dbctx();
      module_data = get_module_data();
      *(_QWORD *)(v6 + 8 * v9 + 56) = v10;
      v8 = *(_QWORD *)(v6 + 8);
      *(_DWORD *)(v10 + 12) = v9++;
      *(_QWORD *)(v10 + 64) = module_data;
    }
    while ( *(_DWORD *)(v8 + 28) > (int)v9 );
  }
  v15 = (int *)&unk_42D870;
  do
  {
    v16 = *v15++;
    *(_QWORD *)(v6 + 8 * v16 + 152) = *(_QWORD *)(v6 + 8 * v16 + 56);
  }
  while ( v15 != (int *)&unk_42D87C );
  *(_QWORD *)(v6 + 176) = *(int *)(v8 + 28);
  result = sub_2F2E80((_QWORD *)v6);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      *(_DWORD *)(v6 + 48) |= 0x100u;
  }
  else if ( v6 )
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}

