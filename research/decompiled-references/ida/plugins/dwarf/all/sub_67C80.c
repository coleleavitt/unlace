void __fastcall sub_67C80(_QWORD *a1)
{
  bool v1; // zf
  __int64 v3; // rdi
  __int64 v4; // rdi

  v1 = a1[5] == 0;
  *a1 = &off_C8A28;
  if ( !v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1[3] + 256LL) + 312LL))(a1[4]);
  v3 = a1[10];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[7];
  *((_OWORD *)a1 + 1) = 0;
  *((_OWORD *)a1 + 2) = 0;
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4);
  }
  operator delete(a1, 0x60u);
}

