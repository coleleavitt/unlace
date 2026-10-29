void __fastcall sub_C9B10(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v7; // rbx
  signed int v8; // eax
  void (__fastcall *v9)(_QWORD); // rax

  while ( 1 )
  {
    v7 = *a2;
    if ( !*a2 )
      break;
    while ( a3 >= 0 )
    {
      if ( *(_DWORD *)v7 == a3 )
      {
        v8 = *(_DWORD *)(v7 + 4);
        if ( v8 >= 0 && (v8 > 31 || !_bittest(&a4, v8)) )
          break;
      }
      a2 = (__int64 *)(v7 + 24);
      v7 = *(_QWORD *)(v7 + 24);
      if ( !v7 )
        return;
    }
    v9 = *(void (__fastcall **)(_QWORD))(v7 + 16);
    if ( v9 )
      v9(*(_QWORD *)(v7 + 8));
    *a2 = *(_QWORD *)(v7 + 24);
    sub_C9250(a1, (_QWORD *)v7);
  }
}
