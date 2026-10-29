__int64 __fastcall sub_20A6E0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  const __m128i *v6; // rdi
  _QWORD *v7; // rsi
  __int32 v8; // edx
  int v9; // r8d
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  char v12; // dl
  __int64 result; // rax

  *(_DWORD *)(a1 + 112) = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
  v3 = *(_QWORD *)(a1 + 40);
  if ( a2 >= *(_DWORD *)(v3 + 64) )
    sub_20A480(a3);
  v5 = *(_QWORD *)(a1 + 192);
  v6 = *(const __m128i **)(*(_QWORD *)(v3 + 528) + 8LL * a2);
  v7 = *(_QWORD **)(a1 + 200);
  *(_QWORD *)(a1 + 48) = v6;
  v8 = v6[4].m128i_i32[2];
  v9 = *(_DWORD *)(*v7 + 72LL);
  *(_BYTE *)(a1 + 225) = v8 != v9;
  v10 = *(_QWORD **)v5;
  v11 = *(_QWORD *)v5 + 24LL * *(_QWORD *)(v5 + 8);
  if ( (unsigned __int64)(v7 + 3) < v11 && v7[3] == *v7 )
  {
    v10 = (_QWORD *)v7[4];
    v12 = 1;
  }
  else if ( v8 == v9 || v10 == (_QWORD *)v11 )
  {
LABEL_11:
    v10 = nullptr;
    v12 = 0;
  }
  else
  {
    while ( v8 != *(_DWORD *)(*v10 + 72LL) )
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
  *(_BYTE *)(a1 + 224) = v12;
  *(_QWORD *)(a1 + 216) = v10;
  *(_BYTE *)(a1 + 227) = 0;
  result = sub_11F5B0(v6, a1 + 120);
  if ( (_DWORD)result == -33 )
    result = 0;
  if ( *(_BYTE *)(a1 + 224) )
    *(_BYTE *)(a1 + 24) = 1;
  return result;
}

