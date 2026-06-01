__int64 __fastcall sub_43890(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)(v2 + 8) && (*(_BYTE *)(v2 + 10) & 3) != 0 )
    return (**(__int64 (__fastcall ***)(__int64, _QWORD))v2)(v2, **(_QWORD **)(a2 + 32));
  else
    return 0;
}

