__int64 __fastcall sub_3F4A0(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD); // rdi

  v2 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 4184LL);
  if ( v2 )
    return (**v2)(v2, a2);
  else
    return 0;
}

