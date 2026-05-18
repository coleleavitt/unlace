void __fastcall sub_CBB20(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  void **v8; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v4 = *(_QWORD *)a1;
    if ( v4 )
    {
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 56);
          if ( *(_DWORD *)(v4 + 48) > a2 )
            break;
          v4 = *(_QWORD *)(v4 + 56);
          if ( !v6 )
            goto LABEL_7;
        }
        sub_CBAD0(v4);
        v4 = v6;
      }
      while ( v6 );
LABEL_7:
      v2 = *(_QWORD *)(a1 + 64);
    }
    v7 = a2 + 1;
    if ( a2 )
      goto LABEL_12;
    if ( !*(_DWORD *)(a1 + 24) )
    {
      v7 = 1;
      goto LABEL_12;
    }
    v8 = (void **)(*((__int64 (__fastcall **)(__int64, __int64, _QWORD))&xmmword_241558 + 1))(v2, 1, 0);
    if ( v8 )
    {
      memset(*v8, 0, *(int *)(a1 + 36));
      v2 = *(_QWORD *)(a1 + 64);
      v7 = 2;
LABEL_12:
      xmmword_241578(v2, v7);
      return;
    }
    xmmword_241578(*(_QWORD *)(a1 + 64), 1);
  }
}
