__int64 __fastcall sub_8B30(int a1, __int64 a2)
{
  void (__fastcall *v3)(__int64, __int64, _QWORD); // rbp
  unsigned __int8 v4; // al

  if ( a1 == -1 )
  {
    v3 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 16LL);
    v4 = getinf_flag();
    v3(a2, 1, v4 ^ 1u);
  }
  return 1;
}

