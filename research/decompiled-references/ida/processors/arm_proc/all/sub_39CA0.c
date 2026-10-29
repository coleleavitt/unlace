char *__fastcall sub_39CA0(__int64 a1, int a2)
{
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return (&off_A0B20)[a2];
  else
    return (char *)*(&off_A0BA0 + a2);
}

