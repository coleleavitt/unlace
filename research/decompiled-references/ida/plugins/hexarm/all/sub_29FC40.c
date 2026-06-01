__int64 __fastcall sub_29FC40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // r12d
  _BYTE v8[8]; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v9[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)v2 != 3 )
    return 0;
  v3 = *(__int64 **)(v2 + 8);
  if ( !v3 || v3[1] != 1 )
    return 0;
  v4 = *v3;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8) + 24LL;
    if ( !*(_QWORD *)v5 )
      goto LABEL_7;
    return 0;
  }
  v5 = 24;
LABEL_7:
  result = 0;
  if ( *(_DWORD *)(v5 + 8) == 1 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    sub_32C870(v8, a2, v5 + 16);
    v9[0] = 1;
    v9[1] = v7 & 4;
    v10 = 0;
    copy_tinfo_t();
    sub_29FB30(a1, v9);
    sub_29EFF0((__int64)v9);
    clear_tinfo_t();
    return 1;
  }
  return result;
}

