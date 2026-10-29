__int64 __fastcall sub_110EB0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // [rsp+Ch] [rbp-2Ch]

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(_QWORD *)(v5 + 80);
  result = sub_10D290(*(_QWORD *)(v5 + 112), a2);
  if ( !(_DWORD)result )
  {
    v8 = 4 * (int)a2 + 36;
    *(_DWORD *)(v6 + v8) = _byteswap_ulong(a3);
    if ( (_DWORD)a2 == 7 )
      *(_BYTE *)(v4 + 34) = a3;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v9 = result;
    sub_CCDE0(a1, a2, v8);
    return v9;
  }
  return result;
}
