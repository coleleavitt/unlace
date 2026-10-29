__int64 __fastcall sub_7EC90(__int64 a1, unsigned int a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int *v5; // rax
  unsigned int v6; // edx
  __int64 result; // rax
  unsigned __int32 v8; // edx

  v5 = (unsigned int *)(a1 + 12LL * a2);
  if ( a3 == 1 )
  {
    *a5 = _byteswap_ulong(*v5);
    v8 = _byteswap_ulong(v5[1]);
    a5[1] = (unsigned __int8)v8;
    a5[2] = v8 >> 8;
    result = _byteswap_ulong(v5[2]);
    a5[3] = (unsigned int)result;
  }
  else
  {
    *a5 = *v5;
    v6 = v5[1];
    a5[1] = (unsigned __int8)v6;
    a5[2] = v6 >> 8;
    result = v5[2];
    a5[3] = result;
  }
  return result;
}
