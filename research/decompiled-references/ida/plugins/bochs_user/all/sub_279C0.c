__int64 __fastcall sub_279C0(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( *(_QWORD *)(a1 + 128) )
  {
    sub_265B0();
    qflush();
  }
  if ( *(int *)(*(_QWORD *)(a1 + 8) + 32LL) <= 1 )
    goto LABEL_9;
  qsem_wait();
  v2 = *(_DWORD *)(a1 + 48);
  if ( !v2 )
    return 0;
  *(_QWORD *)(a1 + 72) = a2;
  if ( (unsigned int)(v2 - 13) > 2 && v2 != 4 )
  {
LABEL_9:
    qsem_post();
    return 0;
  }
  if ( !*(_BYTE *)a1 )
  {
    sub_2B560(a1 + 16, a2, a1 + 136);
    goto LABEL_9;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_27A70(30129, 0xFFFFFFFFLL);
}

