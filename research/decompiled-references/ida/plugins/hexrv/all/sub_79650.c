__int64 __fastcall sub_79650(__int64 a1, __int64 *a2)
{
  int v3; // eax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 *v6; // rbx
  __int64 *i; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 *v11; // rsi
  __int64 v12; // rax

  if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
    sub_76190(a1);
  v3 = unpack_dd();
  v4 = v3;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 < (unsigned __int64)v3 || v3 < 0 )
    return 0;
  v5 = a2[1];
  if ( v5 < v3 )
  {
    v11 = (__int64 *)*a2;
    if ( a2[2] < (unsigned __int64)v3 )
    {
      v12 = qvector_reserve();
      v5 = a2[1];
      *a2 = v12;
      v11 = (__int64 *)v12;
    }
    memset(&v11[2 * v5], 0, 16 * (v4 - v5));
    goto LABEL_6;
  }
  if ( v3 != v5 )
  {
LABEL_6:
    a2[1] = v4;
    v5 = v4;
  }
  v6 = (__int64 *)*a2;
  for ( i = &v6[2 * v5]; i != v6; *(v6 - 1) = sub_78B80((_QWORD *)a1) )
  {
    if ( *(_DWORD *)(a1 + 48) <= 3u )
    {
      if ( (unsigned __int8)is_cvt64() )
        v8 = (int)sub_789A0((_QWORD *)a1);
      else
        v8 = sub_789C0(a1);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 32);
      v8 = v9 + sub_78B80((_QWORD *)a1);
    }
    *v6 = v8;
    v6 += 2;
  }
  return 1;
}

