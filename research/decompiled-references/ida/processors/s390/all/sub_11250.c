__int64 __fastcall sub_11250(__int64 a1)
{
  __int16 v1; // ax

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 == 605 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(a1 + 72);
  }
  else
  {
    if ( v1 != 615 )
      return 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
  }
  return 1;
}

