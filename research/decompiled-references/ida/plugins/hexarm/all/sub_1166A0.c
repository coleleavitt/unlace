__int64 __fastcall sub_1166A0(__int64 a1)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax

  v2 = *(int *)(a1 + 120);
  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_DWORD *)(a1 + 128) + 1;
  v5 = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 128) = v4;
  if ( v2 > 0x7F )
  {
    v7 = 0;
    v6 = 0;
  }
  else
  {
    v6 = (unsigned __int64)((v2 & 0x40) != 0) << v2;
    v7 = (unsigned __int64)((v2 & 0x40) == 0) << v2;
  }
  v8 = v6 + __CFADD__(v7, v3 - 1) + (v3 != 0) + v5 - 1;
  v9 = v4 + v2;
  v10 = v7 + v3 - 1;
  if ( (unsigned __int64)v9 <= 0x7F )
  {
    if ( !(v8 | v10) )
      return 0;
    v13 = __udivti3();
    *(_QWORD *)(a1 + 112) = v13;
    if ( !v13 )
      return 0;
  }
  else
  {
    if ( !(v8 | v10) )
      return 0;
    v11 = 2 * __udivti3();
    *(_QWORD *)(a1 + 112) = v11;
    if ( !v11 )
      return 0;
  }
  result = sub_115EF0(a1, v7 | v3, v6 | v5);
  --*(_DWORD *)(a1 + 128);
  return result;
}

