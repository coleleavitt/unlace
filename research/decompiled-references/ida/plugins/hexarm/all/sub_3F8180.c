__int64 __fastcall sub_3F8180(__int64 a1, int a2, unsigned __int8 a3, unsigned int a4, double a5)
{
  _DWORD *v7; // rdi
  __int64 (*v9)(void); // rax
  __int64 result; // rax

  v7 = *(_DWORD **)(a1 + 832);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v7 + 168LL);
  if ( (char *)v9 == (char *)sub_3EA010 )
  {
    result = sub_3EA010((__int64)v7, a2);
  }
  else
  {
    result = v9();
    v7 = *(_DWORD **)(a1 + 832);
  }
  if ( v7[20] == 8 )
  {
    if ( (_DWORD)result == v7[120] )
    {
      if ( a4 == -1 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC865u, a5);
        BUG();
      }
      sub_3F56D0(a1, 3u, a3, 0, 0x3BEA45E214ADDC55LL, (int)a4, 0);
      return a4;
    }
    else if ( (_DWORD)result == v7[107] )
    {
      return sub_3F5420(a1, a5);
    }
  }
  return result;
}

