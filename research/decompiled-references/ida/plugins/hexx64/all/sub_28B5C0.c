__int64 __fastcall sub_28B5C0(__int64 a1, __int64 a2, char a3, _QWORD *a4, double a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v13; // rax

  v6 = *(_QWORD *)(a1 + 24);
  v7 = v6 - 1;
  if ( v6 - 1 > 0 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = v6 - 3 - ((v6 - 2) & 0xFFFFFFFFFFFFFFFELL);
    while ( 1 )
    {
      v11 = *(_QWORD *)(v8 + 8 * v7);
      if ( *(_DWORD *)(v11 + 8) != 71 )
        break;
      v10 = *(_QWORD **)(v11 + 24);
      if ( a2 != v10[1] + 16LL )
      {
        v13 = (_QWORD *)*v10;
        if ( v10 == (_QWORD *)*v10 )
          goto LABEL_18;
        while ( (_QWORD *)a2 != v13 + 2 )
        {
          v13 = (_QWORD *)*v13;
          if ( v10 == v13 )
            goto LABEL_18;
        }
        if ( v10 == v13 )
        {
LABEL_18:
          if ( !under_debugger )
            sub_383060(0xCD4Du, a5);
          BUG();
        }
        if ( a4 )
        {
          *a4 = v10;
          a4[1] = v13;
        }
        return *v13 + 16LL;
      }
      a2 = *(_QWORD *)(v8 + 8 * v7 - 8);
      if ( a2 && (!a3 || *(_DWORD *)(a2 + 8) == 73) )
      {
        v7 -= 2;
        if ( v7 != v9 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}

