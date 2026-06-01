__int64 __fastcall sub_3E5320(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // al

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  if ( *(_DWORD *)(v2 + 152) == 18 )
    v3 = sub_323350(v2);
  *(_BYTE *)(a1 + 376) = v3;
  sub_3E4D90(a1);
  return 1;
}

