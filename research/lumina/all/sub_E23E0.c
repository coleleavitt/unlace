__int64 *__fastcall sub_E23E0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 *result; // rax
  unsigned int v6; // [rsp+Ch] [rbp-Ch]

  v1 = *(_DWORD *)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = v1 + 1;
  *(_DWORD *)(a1 + 56) = v1 + 1;
  if ( v2 || (v6 = v1 + 1, result = sub_E2050((__int64 *)a1), v2 = (__int64)result, v3 = v6, result) )
  {
    sub_E1710(v2, 4, 0, v3, 0xFFFFFFFF);
    v4 = *(_QWORD *)v2;
    *(_DWORD *)(v2 + 200) |= 1u;
    result = *(__int64 **)(*(_QWORD *)(v4 + 32) + 8LL);
    if ( *((_BYTE *)result + 17) )
      *(_DWORD *)(v2 + 204) |= 1u;
  }
  return result;
}
