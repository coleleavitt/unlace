__int64 __fastcall sub_D3620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  _QWORD *v5; // rdx

  v3 = sub_D2D70(*(_DWORD *)(a1 + 52), a2, a3);
  *(_QWORD *)(a1 + 136) = v3;
  if ( v3 )
  {
    *v3 = 0;
    *(_QWORD *)(a1 + 136) += 4LL;
    return 0;
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v5[5];
    *v5 = 0;
    v5[36] = 0;
    memset(
      (void *)((unsigned __int64)(v5 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v5 - (((_DWORD)v5 + 8) & 0xFFFFFFF8) + 296) >> 3));
    return 7;
  }
}
