__int64 __fastcall sub_38B0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdx

  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL) = a3;
  v3 = *(_QWORD *)(a1 + 184);
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 35 > 7 )
  {
    *(_BYTE *)(v3 + 1) = 2;
    *(_BYTE *)(*(_QWORD *)(a1 + 184) + 5LL) = 0;
  }
  else
  {
    *(_BYTE *)(v3 + 1) = 7;
    *(_BYTE *)(*(_QWORD *)(a1 + 184) + 5LL) = 9;
  }
  return 1;
}

