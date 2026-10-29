__int64 __fastcall sub_9D60(_QWORD *a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a2 + 1);
  switch ( v2 )
  {
    case 6:
      return *(_QWORD *)(a2 + 16);
    case 2:
      if ( get_sreg() == -1 )
        return -1;
      else
        return use_mapping();
    case 7:
      return *(_QWORD *)(a2 + 16) + 16LL * *a1;
    default:
      return -1;
  }
}

