void __fastcall sub_D1B10(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    if ( (*(_DWORD *)a2)-- == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(a2 + 8))(*(_QWORD *)(a2 + 16));
      sub_C9250(a1, (_QWORD *)a2);
    }
  }
}
