__int64 __fastcall sub_3CE10(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // ebp

  if ( !a1[1600] )
    return (unsigned int)-6;
  v2 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 648LL))(a1, a2, 1);
  if ( v2 != 1 )
    return v2;
  if ( (unsigned __int8)sub_65830(a1, a2) )
    v2 = -6;
  else
    sub_65980(a1, a2);
  a1[1600] = 0;
  return v2;
}

