__int64 __fastcall sub_3E070(__int64 a1)
{
  int v1; // ebx

  v1 = sub_4C9A0(*(_QWORD *)(a1 + 256));
  if ( v1 >= 0 )
    return (unsigned int)v1;
  if ( (unsigned int)sub_4C980(*(_QWORD *)(a1 + 256)) == 62 )
    return 0;
  return (unsigned int)v1;
}

