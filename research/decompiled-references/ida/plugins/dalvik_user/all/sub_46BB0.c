__int64 __fastcall sub_46BB0(__int64 a1, int a2, __int64 a3)
{
  size_t v3; // rbx
  __int64 result; // rax
  size_t v5; // rsi
  __int64 v6; // rax
  char v7; // dl
  unsigned __int32 v8; // ebp
  __int64 *v9; // rbp
  _QWORD src[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2;
  result = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  for ( src[0] = a3; v5 < v3 + result; v5 = *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v5;
    v6 = qrealloc();
    if ( !v6 )
      sub_43DF0((__int64)"JDWP encoder");
    *(_QWORD *)a1 = v6;
    result = *(_QWORD *)(a1 + 8);
  }
  v7 = *(_BYTE *)(a1 + 56);
  if ( (_DWORD)v3 == 8 )
  {
    if ( v7 )
    {
      sub_1FAD0((__int64 *)(a1 + 32));
      result = *(_QWORD *)(a1 + 8);
    }
    v9 = (__int64 *)(*(_QWORD *)a1 + result);
    result = swap64();
    *v9 = result;
    *(_QWORD *)(a1 + 8) += v3;
  }
  else if ( (_DWORD)v3 == 4 )
  {
    v8 = _byteswap_ulong(src[0]);
    if ( v7 )
    {
      sub_1FAD0((__int64 *)(a1 + 32));
      result = *(_QWORD *)(a1 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a1 + result) = v8;
    *(_QWORD *)(a1 + 8) += v3;
  }
  else
  {
    if ( v7 )
    {
      sub_1FAD0((__int64 *)(a1 + 32));
      result = *(_QWORD *)(a1 + 8);
    }
    result = (__int64)memcpy((void *)(*(_QWORD *)a1 + result), src, v3);
    *(_QWORD *)(a1 + 8) += v3;
  }
  return result;
}

