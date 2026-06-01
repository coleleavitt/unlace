__int64 __fastcall sub_8F1A0(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
  if ( (unsigned __int8)sub_121990(*(_QWORD *)(a1 + 40), v1, *(_QWORD *)(a1 + 32), 0) )
  {
    **(_DWORD **)(a1 + 32) = 4;
    sub_1220E0(*(_QWORD *)(a1 + 32) + 32LL, *(_QWORD *)(a1 + 48));
    sub_1237B0(
      *(_QWORD *)(a1 + 32) + 32LL,
      v1,
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 68LL) / 2));
    sub_118BA0(*(_QWORD *)(a1 + 32) + 48LL);
    *(_BYTE *)(a1 + 56) = 1;
  }
  return 0;
}

