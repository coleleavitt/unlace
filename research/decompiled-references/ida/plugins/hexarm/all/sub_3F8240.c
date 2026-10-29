__int64 __fastcall sub_3F8240(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  _DWORD *v6; // rdi
  int v7; // esi
  unsigned __int8 v8; // r12
  __int64 (*v9)(void); // rax
  __int64 result; // rax
  int v11; // r8d

  v6 = *(_DWORD **)(a1 + 832);
  if ( v6[20] == 8 )
  {
    v8 = *(_BYTE *)(a2 + 5);
    v7 = *(unsigned __int16 *)(a2 + 6);
  }
  else
  {
    if ( *(_QWORD *)(a2 + 8) || *(char *)(a2 + 34) <= 0 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8DBu, a4);
      goto LABEL_22;
    }
    v7 = *(unsigned __int16 *)(a2 + 6);
    if ( (unsigned int)(v7 - 61) > 0x1F )
      sub_3EAD30(a4);
    v8 = 7;
  }
  v9 = *(__int64 (**)(void))(*(_QWORD *)v6 + 168LL);
  if ( (char *)v9 == (char *)sub_3EA010 )
  {
    result = sub_3EA010((__int64)v6, v7);
  }
  else
  {
    result = v9();
    v6 = *(_DWORD **)(a1 + 832);
    v11 = v6[20];
  }
  if ( v11 == 8 )
  {
    if ( (_DWORD)result != v6[120] )
    {
      if ( (_DWORD)result == v6[107] )
        return sub_3F5420(a1, a4);
      return result;
    }
    if ( a3 != -1 )
    {
      sub_3F56D0(a1, 3u, v8, 0, 0x3BEA45E214ADDC55LL, (int)a3, 0);
      return a3;
    }
    if ( !under_debugger )
      sub_3835A0(0xC865u, a4);
LABEL_22:
    BUG();
  }
  return result;
}

