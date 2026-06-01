__int64 __fastcall sub_18F220(_QWORD *a1)
{
  bool (__fastcall *v1)(__int64); // rax
  __int64 result; // rax

  v1 = *(bool (__fastcall **)(__int64))(*a1 + 56LL);
  if ( v1 == sub_18E4E0 )
  {
    if ( a1[9] )
      goto LABEL_3;
    return -1;
  }
  if ( !((unsigned __int8 (*)(void))v1)() )
    return -1;
LABEL_3:
  result = *(_QWORD *)(a1[8] + 24LL);
  if ( result < 0 )
    return 0;
  return result;
}

