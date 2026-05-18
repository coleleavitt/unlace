__int64 __fastcall sub_EBFF0(__int64 a1, unsigned int a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int v4; // r13d
  _QWORD *v5; // r9
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (_QWORD *)a1;
  v13[1] = __readfsqword(0x28u);
  if ( a2 > 1 )
    v4 = sub_CCA10((_DWORD *)(a1 + 52), (_DWORD *)(a1 + 56), a2);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*v5 + 272LL))(*v5, v4, v13, 0);
  if ( !(_DWORD)result )
  {
    v9 = v13[0];
    v10 = 5 * (a2 - v4) - 5;
    if ( v10 < 0 )
    {
      if ( v13[0] )
        sub_C36A0(v13[0]);
      v12 = 67771;
    }
    else
    {
      v11 = *(_QWORD *)(v13[0] + 8);
      *a3 = *(_BYTE *)(v11 + v10);
      if ( a4 )
        *a4 = _byteswap_ulong(*(_DWORD *)(v11 + v10 + 1));
      if ( v9 )
      {
        sub_C36A0(v9);
        result = 0;
      }
      if ( (unsigned __int8)(*a3 - 1) <= 4u )
        return result;
      v12 = 67779;
    }
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v12,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  return result;
}
