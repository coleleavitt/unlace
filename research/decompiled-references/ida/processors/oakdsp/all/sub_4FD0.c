__int64 __fastcall sub_4FD0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 & 1) + 38;
  v3 = *(_QWORD *)(a1 + 248);
  v4 = 0;
  if ( *(_WORD *)(v3 + 6) != 255 )
  {
    v4 = 1;
    *(_QWORD *)(a1 + 248) = v3 + 40;
  }
  return v4;
}

