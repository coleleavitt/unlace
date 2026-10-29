_BOOL8 __fastcall sub_20ABA0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  const __m128i *v4; // r8
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int32 v7; // edx
  __int64 v8; // rcx
  int v9; // r9d
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( a2 >= *(_DWORD *)(v2 + 64) )
    sub_20A840();
  v4 = *(const __m128i **)(*(_QWORD *)(v2 + 528) + 8LL * a2);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD **)(v5 + 80);
  v7 = v4[4].m128i_i32[2];
  v8 = *(_QWORD *)(v5 + 72);
  v9 = *(_DWORD *)(*v6 + 72LL);
  *(_BYTE *)(v5 + 105) = v7 != v9;
  v10 = *(_QWORD **)v8;
  v11 = *(_QWORD *)v8 + 24LL * *(_QWORD *)(v8 + 8);
  if ( (unsigned __int64)(v6 + 3) < v11 && v6[3] == *v6 )
  {
    v10 = (_QWORD *)v6[4];
    v12 = 1;
  }
  else if ( v7 == v9 || v10 == (_QWORD *)v11 )
  {
LABEL_11:
    v10 = nullptr;
    v12 = 0;
  }
  else
  {
    while ( v7 != *(_DWORD *)(*v10 + 72LL) )
    {
      v10 += 3;
      if ( v10 == (_QWORD *)v11 )
        goto LABEL_11;
    }
    if ( v10 )
    {
      v10 = (_QWORD *)v10[1];
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
  }
  *(_QWORD *)(v5 + 96) = v10;
  *(_BYTE *)(v5 + 104) = v12;
  *(_BYTE *)(v5 + 107) = 0;
  sub_11EFF0(v4, v5);
  v13 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v13 + 104) )
    *(_BYTE *)(a1 + 24) = 1;
  return *(_DWORD *)(v13 + 108) > 1;
}

