__int64 __fastcall sub_328AE0(__int64 a1, __int64 a2)
{
  _QWORD **v2; // r14
  _QWORD *v3; // rbx

  v2 = *(_QWORD ***)(a1 + 16);
  if ( *v2 )
  {
    v3 = (_QWORD *)(**v2 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v3 )
      goto LABEL_9;
    if ( (*(_BYTE *)v3 & 2) == 0 )
    {
      do
      {
        if ( (int)lexcompare_tinfo() >= 0 )
        {
          if ( (int)lexcompare_tinfo() >= 0 )
            goto LABEL_8;
          v3 = (_QWORD *)v3[2];
        }
        else
        {
          v3 = (_QWORD *)v3[1];
        }
      }
      while ( (*(_BYTE *)v3 & 2) == 0 );
      v3 = *v2;
LABEL_8:
      if ( v3 != **(_QWORD ***)(a1 + 16) )
      {
LABEL_9:
        copy_tinfo_t();
        *(_DWORD *)(a2 + 56) |= 1u;
        *(_DWORD *)(a1 + 8) |= 1u;
        ++*(_DWORD *)(a1 + 24);
      }
    }
  }
  return 0;
}

