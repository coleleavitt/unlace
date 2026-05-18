__int64 __fastcall sub_D5B70(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // rbp
  __int64 result; // rax
  _DWORD *v5; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = a3;
    sub_CC740(a1);
    a3 = v5;
    a2 = (unsigned int)a2;
  }
  if ( (_DWORD)a2 == 15 )
    result = (unsigned int)(*(_DWORD *)(*v3 + 132LL) + *(_DWORD *)(a1 + 28));
  else
    result = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v3[3] + 80LL) + 4 * (int)a2 + 36));
  *a3 = result;
  if ( *(_BYTE *)(a1 + 17) )
    return sub_CCDE0(a1, a2, (__int64)a3);
  return result;
}
