_BOOL8 __fastcall sub_20A7E0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rax
  const __m128i *v5; // r8
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int32 v8; // edx
  __int64 v9; // rcx
  int v10; // r9d
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  __int64 v14; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( a2 >= *(_DWORD *)(v3 + 64) )
    sub_20A480(a3);
  v5 = *(const __m128i **)(*(_QWORD *)(v3 + 528) + 8LL * a2);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD **)(v6 + 80);
  v8 = v5[4].m128i_i32[2];
  v9 = *(_QWORD *)(v6 + 72);
  v10 = *(_DWORD *)(*v7 + 72LL);
  *(_BYTE *)(v6 + 105) = v8 != v10;
  v11 = *(_QWORD **)v9;
  v12 = *(_QWORD *)v9 + 24LL * *(_QWORD *)(v9 + 8);
  if ( (unsigned __int64)(v7 + 3) < v12 && v7[3] == *v7 )
  {
    v11 = (_QWORD *)v7[4];
    v13 = 1;
  }
  else if ( v8 == v10 || v11 == (_QWORD *)v12 )
  {
LABEL_11:
    v11 = nullptr;
    v13 = 0;
  }
  else
  {
    while ( v8 != *(_DWORD *)(*v11 + 72LL) )
    {
      v11 += 3;
      if ( v11 == (_QWORD *)v12 )
        goto LABEL_11;
    }
    if ( v11 )
    {
      v11 = (_QWORD *)v11[1];
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
  }
  *(_QWORD *)(v6 + 96) = v11;
  *(_BYTE *)(v6 + 104) = v13;
  *(_BYTE *)(v6 + 107) = 0;
  sub_11F5B0(v5, v6);
  v14 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v14 + 104) )
    *(_BYTE *)(a1 + 24) = 1;
  return *(_DWORD *)(v14 + 108) > 1;
}

