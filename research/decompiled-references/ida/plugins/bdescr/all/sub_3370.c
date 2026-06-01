__int64 __fastcall sub_3370(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 200) == -1 )
  {
    a2 = -1;
    callui(21, 0, &callui);
  }
  else
  {
    sub_32B0();
    *(_BYTE *)(a1 + 208) = 0;
    *(_QWORD *)(a1 + 200) = -1;
  }
  return a2;
}

