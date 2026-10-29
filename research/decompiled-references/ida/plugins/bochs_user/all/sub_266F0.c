__int64 __fastcall sub_266F0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  char v5; // dl

  result = 10;
  if ( *(_BYTE *)a1 )
  {
    if ( *(_QWORD *)(a1 + 128) )
    {
      sub_265B0();
      qflush();
    }
    v5 = sub_41260(*(_QWORD *)(a1 + 8), a2);
    result = 12;
    if ( v5 )
    {
      if ( (unsigned int)(a3 - 13) > 2 )
      {
        *(_DWORD *)(a1 + 48) = a3;
        qsem_post();
        qsem_wait();
        *(_DWORD *)(a1 + 48) = 0;
      }
      else
      {
        *(_BYTE *)a1 = 0;
        *(_DWORD *)(a1 + 48) = a3;
        qsem_post();
      }
      return 0;
    }
  }
  return result;
}

