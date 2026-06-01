void __fastcall sub_41300(__int64 a1)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  int v5; // esi

  if ( *(_QWORD *)a1 && (*(_BYTE *)(a1 + 16) = 1, write(*(_DWORD *)(a1 + 28), "CANCEL!", 7u) == 7) )
  {
    qthread_join();
    qthread_free();
    v2 = *(_DWORD *)(a1 + 20);
    *(_QWORD *)a1 = 0;
    if ( !v2 )
    {
LABEL_4:
      v3 = *(_DWORD *)(a1 + 24);
      if ( !v3 )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 20);
    if ( !v2 )
      goto LABEL_4;
  }
  close(v2);
  v3 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 20) = 0;
  if ( !v3 )
  {
LABEL_5:
    v4 = *(_DWORD *)(a1 + 28);
    if ( !v4 )
      goto LABEL_6;
LABEL_13:
    close(v4);
    v5 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 28) = 0;
    if ( !v5 )
      goto LABEL_7;
    goto LABEL_14;
  }
LABEL_12:
  close(v3);
  v4 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v4 )
    goto LABEL_13;
LABEL_6:
  if ( !*(_DWORD *)(a1 + 36) )
    goto LABEL_7;
LABEL_14:
  if ( !(unsigned int)qwait_timed() )
    kill(*(_DWORD *)(a1 + 36), 9);
LABEL_7:
  if ( *(_QWORD *)(a1 + 8) )
  {
    qthread_join();
    qthread_free();
  }
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)a1 = 0;
}

