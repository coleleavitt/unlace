__int64 __fastcall sub_F210(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_1E460();
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v2 + 32))(a2, *(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 40));
  return 0;
}

