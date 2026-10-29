__int64 __fastcall sub_27640(__int64 a1, _QWORD *a2)
{
  char v2; // dl
  __int64 result; // rax
  bool v4; // zf

  if ( *(_BYTE *)a1 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_276E0(30128, a2);
  }
  else
  {
    v2 = qsem_wait();
    result = 18;
    if ( v2 )
    {
      *a2 = *(_QWORD *)(a1 + 136);
      a2[73] = *(_QWORD *)(a1 + 720);
      qmemcpy(
        (void *)((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(a1 + 136 - ((_QWORD)a2 - ((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 592) >> 3));
      v4 = *(_DWORD *)a2 == 6;
      *(_DWORD *)(a1 + 48) = 0;
      *(_BYTE *)a1 = !v4;
      result = 0;
      ++*(_DWORD *)(a1 + 140);
    }
  }
  return result;
}

