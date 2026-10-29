void __fastcall sub_D0560(__int64 a1, int a2)
{
  _QWORD *v2; // r13
  int v3; // eax
  int v5; // ebx
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  void (*v8)(void); // rax

  v2 = *(_QWORD **)(a1 + 568);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 532);
    *(_QWORD *)(a1 + 568) = 0;
    if ( v3 > 0 )
    {
      v5 = 0;
      do
      {
        v6 = v2[v5];
        v7 = *(_QWORD **)(v6 + 16);
        if ( v7 )
        {
          v8 = *(void (**)(void))(*v7 + a2);
          if ( v8 )
            v8();
        }
        *(_DWORD *)(v6 + 32) = 0;
        ++v5;
        sub_D00D0(v6);
      }
      while ( *(_DWORD *)(a1 + 532) > v5 );
    }
    sub_C9250(a1, v2);
    *(_DWORD *)(a1 + 532) = 0;
  }
}
