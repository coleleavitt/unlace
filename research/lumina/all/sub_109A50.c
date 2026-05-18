__int64 __fastcall sub_109A50(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  char *v14[5]; // [rsp+0h] [rbp-28h] BYREF

  v14[1] = (char *)__readfsqword(0x28u);
  v14[0] = nullptr;
  if ( !a2 )
    return 0;
  if ( *a2 == 36 )
  {
    result = sub_104AC0(a1, 0, a2 + 1, a3, v14);
    a2 = v14[0];
    if ( !v14[0] )
      return result;
  }
  else
  {
    v14[0] = a2;
  }
  ++*(_BYTE *)(a1 + 33);
  v5 = sub_105970("JSON path error near '%q'");
  v10 = (__int64)v5;
  if ( v5 )
  {
    v11 = *(_QWORD *)a4;
    v12 = (__int64)v5;
    *(_DWORD *)(a4 + 36) = 1;
    sub_F11D0(v11, v5, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v9);
    sub_C91C0(v10, v12);
  }
  else
  {
    sub_E1560(a4, (__int64)a2, v6, v7, v8, v9);
  }
  return 0;
}
