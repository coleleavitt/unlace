_QWORD *__fastcall sub_AB6E0(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  void (__fastcall *v5)(_QWORD *); // rax
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  const void *v9; // [rsp+8h] [rbp-30h] BYREF

  v9 = a1;
  v2 = operator new(0x68u);
  *(_BYTE *)(v2 + 8) = 89;
  v3 = (_QWORD *)v2;
  *(_QWORD *)v2 = &off_238BD8;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_BYTE *)(v2 + 96) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  if ( !a1 || sub_AB5F0(v2, &v9, a2) )
    return v3;
  if ( v3 )
  {
    v5 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
    if ( v5 == sub_A1340 )
    {
      v6 = (void *)v3[9];
      *v3 = &off_238BD8;
      if ( v6 )
      {
        v3[10] = 0;
        j__free(v6);
      }
      v7 = (void *)v3[5];
      if ( v7 )
      {
        v3[6] = 0;
        j__free(v7);
      }
      v8 = (void *)v3[2];
      if ( v8 )
      {
        v3[3] = 0;
        j__free(v8);
      }
      operator delete(v3, 0x68u);
    }
    else
    {
      v5(v3);
    }
  }
  return nullptr;
}
