void __fastcall sub_E800(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 168);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 24) = 64;
    *(_DWORD *)(*(_QWORD *)(a1 + 168) + 80LL) = 64;
    unregister_custom_refinfo();
    unregister_custom_refinfo();
    unregister_custom_fixup();
    unregister_custom_fixup();
    v3 = *(void **)(a1 + 168);
    if ( v3 )
      operator delete(v3, 0x80u);
    *(_QWORD *)(a1 + 168) = 0;
  }
}

