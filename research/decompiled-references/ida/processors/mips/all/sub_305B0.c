__int64 __fastcall sub_305B0(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v2; // ebp

  v1 = *(_QWORD *)(a1 + 32);
  v2 = sub_303F0(a1);
  if ( (_BYTE)v2 || (get_flags_ex(v1, 4) & 0x1000) == 0 )
    return v2;
  *(_BYTE *)(a1 + 792) = 1;
  return v2;
}

