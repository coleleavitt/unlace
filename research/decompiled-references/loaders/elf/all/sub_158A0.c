const char *__fastcall sub_158A0(__int64 a1, unsigned __int64 *a2, double a3)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rbx
  int v5; // ecx
  const char *result; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a2;
  v13[1] = __readfsqword(0x28u);
  v4 = (_QWORD *)a1;
  if ( v3 > 0x70000029 )
  {
    if ( v3 == 1879048237 )
      goto LABEL_24;
    if ( v3 <= 0x7000002D )
      return "";
    if ( v3 != 1879048240 )
      return nullptr;
    v4 = (_QWORD *)a2[1];
    if ( *(_DWORD *)(get_ph() + 4) != 12 )
    {
LABEL_23:
      sub_15040();
LABEL_24:
      *(_QWORD *)((char *)v4 + 380) = a2[1];
      if ( (debug & 0x10) != 0 )
        sub_E950((__int64)"'rld_text_rsolve' func -> %llX\n", a2[1]);
      return "";
    }
LABEL_17:
    sub_101F0(0xBBAu, v4);
    return "";
  }
  if ( v3 > 0x7000000A )
  {
    v5 = v3 - 1879048203;
    if ( ((1LL << v5) & 0x3FEFFAE1) == 0 )
    {
      if ( v5 == 30 )
      {
        sub_155D0(a1, a2[1], 1, a3);
        return "";
      }
      if ( v5 == 8 )
      {
        v12 = a2[1];
        *(_DWORD *)(a1 + 396) = v12;
        sub_101F0(0xBC9u, (unsigned int)v12);
        return "";
      }
      return nullptr;
    }
    return "";
  }
  if ( v3 == 1879048202 )
  {
    v7 = a2[1];
    v8 = *(_QWORD *)(a1 + 16);
    v9 = 4;
    *(_DWORD *)(a1 + 392) = v7;
    if ( *(_BYTE *)(v8 + 508) == 2 )
      v9 = 8;
    sub_101F0(0xBC8u, v9 * (int)v7);
    netnode_check(v13, "$ got", 0, 0);
    if ( !(unsigned __int8)netnode_exist(v13) )
      return "";
    a2 = nullptr;
    v10 = netnode_altval(v13[0], 0, 65) - 1;
    v11 = node2ea(v10);
    if ( v11 == -1 )
      return "";
    v4 = (_QWORD *)(*(_QWORD *)(v4[2] + 456LL) & (v4[50] + v11));
    if ( *(_DWORD *)(get_ph() + 4) != 12 )
      goto LABEL_23;
    goto LABEL_17;
  }
  if ( v3 > 0x70000004 )
    return "";
  result = "Version:";
  if ( v3 != 1879048196 )
  {
    if ( v3 > 0x70000000 )
      return "";
    return nullptr;
  }
  return result;
}
