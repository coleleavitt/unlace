__int64 __fastcall sub_25D90(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 1392) & 2) != 0 && *(_DWORD *)a2 == (*(_DWORD *)a2 & *(_DWORD *)(a1 + 824)) )
  {
    *a2 = *(_QWORD *)(a1 + 824);
    a2[70] = *(_QWORD *)(a1 + 1384);
    qmemcpy(
      (void *)((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(a1 + 824 - ((_QWORD)a2 - ((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 568) >> 3));
    return 0;
  }
  else
  {
    result = sub_275A0(a1, a2);
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(a1 + 1392) |= 2u;
      qmemcpy((void *)(a1 + 824), a2, 0x238u);
    }
  }
  return result;
}

