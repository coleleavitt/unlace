__int64 __fastcall sub_3826F0(unsigned int *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  _DWORD *v6; // rdx
  int v7; // edi
  int v8; // ecx

  result = *a1;
  if ( (_DWORD)result == 1 )
  {
    v6 = *((_DWORD **)a1 + 1);
    v7 = v6[2];
    if ( (unsigned int)v7 > 0x54 )
    {
      if ( !under_debugger )
        sub_37B760(0xC511u, a3);
    }
    else
    {
      v8 = v6[3];
      if ( v8 < -1 || (result = (unsigned int)(*(_DWORD *)(a2 + 64) + 500), v8 >= (int)result) )
      {
        if ( !under_debugger )
          sub_37B760(0xC512u, a3);
      }
      else
      {
        if ( v7 > 69 || v6[14] <= 0x1FFu )
          return result;
        if ( !under_debugger )
          sub_37B760(0xC513u, a3);
      }
    }
LABEL_29:
    BUG();
  }
  if ( (_DWORD)result != 2 )
    return result;
  result = *((_QWORD *)a1 + 1);
  v4 = *(_DWORD *)(result + 88);
  if ( v4 <= 0 && v4 != -1 )
  {
    if ( !under_debugger )
      sub_37B760(0xC514u, a3);
    goto LABEL_29;
  }
  v5 = *(_DWORD *)(result + 92);
  if ( v5 < 0 || v5 >= *(_DWORD *)(a2 + 64) )
  {
    if ( !under_debugger )
      sub_37B760(0xC515u, a3);
    goto LABEL_29;
  }
  if ( *(_QWORD *)(result + 40) <= 1u )
  {
    if ( !under_debugger )
      sub_37B760(0xC516u, a3);
    goto LABEL_29;
  }
  if ( !*(_BYTE *)(result + 80) )
  {
    if ( !under_debugger )
      sub_37B760(0xC517u, a3);
    goto LABEL_29;
  }
  return result;
}

