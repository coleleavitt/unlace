void __fastcall sub_804D0(_BYTE *a1)
{
  bool v1; // zf
  __int64 v3; // rdi
  __int64 v4; // rdi

  v1 = a1[72] == 0;
  *(_QWORD *)a1 = off_C9420;
  if ( !v1 )
  {
    v3 = *((_QWORD *)a1 + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_QWORD *)a1 + 5);
  if ( v4 )
  {
    *((_QWORD *)a1 + 6) = 0;
    qfree(v4);
  }
  operator delete(a1, 0x58u);
}
