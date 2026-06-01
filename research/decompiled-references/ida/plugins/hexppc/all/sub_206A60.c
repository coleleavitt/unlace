__int64 __fastcall sub_206A60(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  const __m128i *v5; // rdi
  _QWORD *v6; // rsi
  __int32 v7; // edx
  int v8; // r8d
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  char v11; // dl
  __int64 result; // rax

  *(_DWORD *)(a1 + 112) = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
  v2 = *(_QWORD *)(a1 + 40);
  if ( a2 >= *(_DWORD *)(v2 + 64) )
    sub_206800();
  v4 = *(_QWORD *)(a1 + 192);
  v5 = *(const __m128i **)(*(_QWORD *)(v2 + 528) + 8LL * a2);
  v6 = *(_QWORD **)(a1 + 200);
  *(_QWORD *)(a1 + 48) = v5;
  v7 = v5[4].m128i_i32[2];
  v8 = *(_DWORD *)(*v6 + 72LL);
  *(_BYTE *)(a1 + 225) = v7 != v8;
  v9 = *(_QWORD **)v4;
  v10 = *(_QWORD *)v4 + 24LL * *(_QWORD *)(v4 + 8);
  if ( (unsigned __int64)(v6 + 3) < v10 && v6[3] == *v6 )
  {
    v9 = (_QWORD *)v6[4];
    v11 = 1;
  }
  else if ( v7 == v8 || v9 == (_QWORD *)v10 )
  {
LABEL_11:
    v9 = nullptr;
    v11 = 0;
  }
  else
  {
    while ( v7 != *(_DWORD *)(*v9 + 72LL) )
    {
      v9 += 3;
      if ( v9 == (_QWORD *)v10 )
        goto LABEL_11;
    }
    if ( v9 )
    {
      v9 = (_QWORD *)v9[1];
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  *(_BYTE *)(a1 + 224) = v11;
  *(_QWORD *)(a1 + 216) = v9;
  *(_BYTE *)(a1 + 227) = 0;
  result = sub_11BB70(v5, a1 + 120);
  if ( (_DWORD)result == -33 )
    result = 0;
  if ( *(_BYTE *)(a1 + 224) )
    *(_BYTE *)(a1 + 24) = 1;
  return result;
}

