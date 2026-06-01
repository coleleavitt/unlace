__int64 __fastcall sub_9AD20(__int128 a1, double a2)
{
  __int64 v3; // rbx

  *((_QWORD *)&a1 + 1) = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 5LL) & 8) != 0 )
  {
    v3 = a1;
    *(_QWORD *)&a1 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v3 + 40) += sub_992D0(a1, a2);
  }
  return 0;
}

