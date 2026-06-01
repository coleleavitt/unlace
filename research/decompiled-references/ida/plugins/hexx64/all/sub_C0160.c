bool __fastcall sub_C0160(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  _BYTE *v11; // rax
  unsigned __int64 v12; // rsi

  if ( (unsigned int)(*(_DWORD *)a2 - 42) > 0xA )
    return 1;
  if ( *(_BYTE *)(a2 + 64) == 7 )
  {
    v5 = *(_QWORD *)(a1 + 328);
    v6 = *(unsigned int *)(a2 + 72);
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 64) )
      sub_B7BA0(a3);
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v6);
    if ( !v7 )
    {
      if ( !under_debugger )
        sub_383060(0xCD41u, a3);
      BUG();
    }
    v8 = (_BYTE *)sub_1229A0(*(_QWORD *)(v7 + 48));
    if ( v8 )
    {
      v9 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        goto LABEL_10;
      v10 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v10 )
      {
        while ( (*(_BYTE *)v10 & 2) == 0 )
        {
          v12 = *(_QWORD *)(v10 + 24);
          if ( (unsigned __int64)v8 < v12 )
          {
            v10 = *(_QWORD *)(v10 + 8);
          }
          else
          {
            if ( v12 >= (unsigned __int64)v8 )
            {
              if ( v9 == (_QWORD *)v10 )
                break;
              return 1;
            }
            v10 = *(_QWORD *)(v10 + 16);
          }
        }
LABEL_10:
        v11 = sub_120380(v8, 1);
        if ( v11 )
          return *((_QWORD *)v11 + 3) != *(_QWORD *)(a2 + 24);
      }
    }
    return 1;
  }
  return 0;
}

