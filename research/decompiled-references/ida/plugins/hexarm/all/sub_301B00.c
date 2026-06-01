unsigned __int64 __fastcall sub_301B00(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  int v6; // eax
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __m128i si128; // xmm1
  int v13; // edi
  __int64 module_data; // rax
  int *v15; // rax
  __int64 v16; // rcx
  __int64 v19; // [rsp+8h] [rbp-78h] BYREF
  __int64 v20; // [rsp+10h] [rbp-70h] BYREF
  __int128 v21; // [rsp+18h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  int v23; // [rsp+30h] [rbp-50h]
  unsigned __int64 v24; // [rsp+40h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v5 = *a1;
  v21 = 0;
  v20 = 0;
  v19 = v5;
  sub_2AE6E0(&v20, (__int64)(a1 + 1));
  v22 = a1[4];
  v6 = *((_DWORD *)a1 + 10);
  BYTE1(v6) |= 2u;
  v23 = v6;
  v7 = (_QWORD *)operator new(0xB8u);
  sub_3CDC40(v7, &v19, a3);
  v8 = v7[1];
  v7[9] = 0;
  *v7 = &off_4DCFB8;
  if ( *(int *)(v8 + 28) > 0 )
  {
    v9 = 0;
    do
    {
      v10 = operator new(0x58u);
      v11 = v7[1];
      si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
      v13 = *(_DWORD *)(v11 + 4LL * (int)v9 + 16);
      *(_DWORD *)(v10 + 12) = -1;
      *(_QWORD *)(v10 + 32) = v11;
      *(_DWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 40) = 0;
      *(_QWORD *)v10 = &off_4DCE48;
      *(_QWORD *)(v10 + 72) = 0;
      *(_QWORD *)(v10 + 80) = a2;
      *(__m128i *)(v10 + 16) = si128;
      *(_OWORD *)(v10 + 48) = 0;
      switch_dbctx();
      module_data = get_module_data();
      v7[v9 + 7] = v10;
      v8 = v7[1];
      *(_DWORD *)(v10 + 12) = v9++;
      *(_QWORD *)(v10 + 64) = module_data;
      *(_QWORD *)v10 = &off_4DCF00;
    }
    while ( *(_DWORD *)(v8 + 28) > (int)v9 );
  }
  v15 = (int *)&unk_428930;
  do
  {
    v16 = *v15++;
    v7[v16 + 19] = v7[v16 + 7];
  }
  while ( &unk_42893C != (_UNKNOWN *)v15 );
  v7[22] = *(int *)(v8 + 28);
  if ( (unsigned __int8)sub_301380(v7) )
  {
    if ( !a4 )
      *((_DWORD *)v7 + 12) |= 0x100u;
  }
  else if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v24 - __readfsqword(0x28u);
}

