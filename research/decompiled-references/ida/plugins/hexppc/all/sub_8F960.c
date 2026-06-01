__int64 __fastcall sub_8F960(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
  if ( (unsigned __int8)sub_122150(*(_QWORD *)(a1 + 40), v1, *(_QWORD *)(a1 + 32), 0) )
  {
    **(_DWORD **)(a1 + 32) = 4;
    sub_1228A0(*(_QWORD *)(a1 + 32) + 32LL, *(_QWORD *)(a1 + 48));
    sub_123F70(
      *(_QWORD *)(a1 + 32) + 32LL,
      v1,
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 68LL) / 2));
    sub_119360(*(_QWORD *)(a1 + 32) + 48LL);
    *(_BYTE *)(a1 + 56) = 1;
  }
  return 0;
}

