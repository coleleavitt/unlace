__int64 __fastcall sub_17C60(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  void (__fastcall *v6)(_QWORD, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 zip_linput; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  void (__fastcall *v16)(_QWORD, __int64); // rax
  __int64 v17; // rax
  void (__fastcall *v18)(_QWORD, __int64); // rax
  void (__fastcall *v19)(_QWORD, __int64); // rax

  *(_BYTE *)a1 = 0;
  v2 = operator new(0x60u);
  *(_QWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 64) = 0;
  if ( !v2 )
  {
    v19 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 8);
    if ( v19 )
      v19(*(_QWORD *)(a1 + 16), 1);
    sub_17950(nullptr);
    return 0;
  }
  v3 = v2;
  v4 = (_QWORD *)operator new(0x10u);
  *v4 = 0;
  v4[1] = 0;
  *(_QWORD *)(v3 + 80) = v4;
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 48) = 0;
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v3 + 88) = 0;
  if ( qlread(v5, v3, 45) != 45 || *(_DWORD *)v3 != 1396786249 || *(_WORD *)(v3 + 4) != 20039 )
    goto LABEL_5;
  v8 = qlfile(*(_QWORD *)(a1 + 16));
  sub_17BA0(v3, v8);
  if ( *(_BYTE *)(v3 + 6) > 0xAu )
  {
    v16 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 8);
    if ( v16 )
      v16(*(_QWORD *)(a1 + 16), 3);
    goto LABEL_7;
  }
  v9 = *(_QWORD *)(v3 + 56);
  v10 = *(unsigned __int8 *)(v3 + 34);
  v11 = v9;
  if ( *(_BYTE *)(v3 + 34) )
  {
    v14 = *(_QWORD *)(v3 + 64);
    v15 = v10 + 1;
    if ( v14 < v10 + 1 )
    {
      if ( *(_QWORD *)(v3 + 72) < v15 )
      {
        v17 = qvector_reserve(v3 + 56, v9, v10 + 1, 1);
        *(_QWORD *)(v3 + 56) = v17;
        v9 = v17;
        v14 = *(_QWORD *)(v3 + 64);
      }
      memset((void *)(v9 + v14), 0, v15 - v14);
      *(_QWORD *)(v3 + 64) = v15;
      v11 = *(_QWORD *)(v3 + 56);
    }
    else if ( v15 != v14 )
    {
      *(_QWORD *)(v3 + 64) = v15;
    }
    *(_BYTE *)(v11 + v10) = 0;
    v10 = *(unsigned __int8 *)(v3 + 34);
    v9 = *(_QWORD *)(v3 + 56);
  }
  else if ( v9 )
  {
    *(_QWORD *)(v3 + 64) = 0;
    qfree(v9);
    *(_QWORD *)(v3 + 56) = 0;
    v10 = *(unsigned __int8 *)(v3 + 34);
    v9 = 0;
    *(_QWORD *)(v3 + 72) = 0;
  }
  if ( *(unsigned __int8 *)(v3 + 34) != qlread(*(_QWORD *)(a1 + 16), v9, v10) )
  {
LABEL_5:
    v6 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 8);
    if ( v6 )
      v6(*(_QWORD *)(a1 + 16), 2);
LABEL_7:
    sub_17950((_QWORD *)v3);
    return 0;
  }
  if ( (*(_BYTE *)(v3 + 16) & 0x10) != 0 )
  {
    zip_linput = create_zip_linput(*(_QWORD *)(a1 + 16), -1, 2);
    if ( zip_linput )
    {
      *(_QWORD *)(a1 + 16) = zip_linput;
      *(_BYTE *)(a1 + 24) = 1;
      goto LABEL_18;
    }
LABEL_28:
    v18 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 8);
    if ( v18 )
      v18(*(_QWORD *)(a1 + 16), 1);
    goto LABEL_7;
  }
LABEL_18:
  v13 = qalloc_or_throw(24);
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v3 + 48) = v13;
  return v3;
}

