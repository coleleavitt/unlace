__int64 __fastcall sub_335D0(__int64 a1, double a2, double a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 2768);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    *(_QWORD *)(a1 + 2768) = 0;
  }
  if ( *(_BYTE *)(a1 + 2714) )
    return sub_33360(a1, a2, a3);
  else
    return sub_33070(a1, a2);
}

