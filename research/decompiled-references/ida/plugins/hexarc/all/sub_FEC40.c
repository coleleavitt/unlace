__int64 __fastcall sub_FEC40(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v3 = *(_BYTE *)(a3 + 32);
  if ( v3 != 1 && (v3 != 5 || *(_QWORD *)(a2 + 128) <= *(_QWORD *)(a3 + 24)) )
    return a1;
  sub_327EF0(a3 + 24, *(_QWORD *)(a2 + 1440), a1, *(unsigned int *)(a3 + 40));
  return a1;
}

