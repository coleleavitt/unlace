__int64 __fastcall sub_E0020(__int64 a1, __int64 a2, int a3)
{
  int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int16 v14; // ax
  __int64 v15; // rdx
  const void *v17; // rsi
  unsigned __int64 v18; // rdx

  v5 = *(_DWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v5 > 0 )
  {
    if ( a3 && *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 40) )
    {
      if ( v6 )
      {
        v18 = (int)a2;
        a2 = *(_QWORD *)(a1 + 40);
        a3 = 0;
        v9 = (unsigned __int64)sub_DFFD0(v6, (_QWORD *)a2, v18);
        *(_QWORD *)(a1 + 40) = v9;
        *(_QWORD *)(a1 + 8) = v9;
      }
      else
      {
        a2 = (int)a2;
        v9 = sub_D2640(*(_QWORD *)(a1 + 40), (int)a2);
        *(_QWORD *)(a1 + 40) = v9;
        if ( !v9 )
        {
          sub_C91C0(*(_QWORD *)(a1 + 8), (int)a2);
          v9 = *(_QWORD *)(a1 + 40);
        }
        *(_QWORD *)(a1 + 8) = v9;
        a3 = 0;
      }
      goto LABEL_6;
    }
    sub_C9250(v6, *(_QWORD **)(a1 + 40));
    v6 = *(_QWORD *)(a1 + 24);
  }
  a2 = (int)a2;
  v9 = (unsigned __int64)sub_DBFF0(v6, (int)a2);
  *(_QWORD *)(a1 + 40) = v9;
LABEL_6:
  if ( !v9 )
  {
    if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 )
      sub_C93F0(a1, a2, v7, v8, v10, v11);
    else
      *(_WORD *)(a1 + 20) = 1;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    return 7;
  }
  v12 = *(_QWORD *)(a1 + 24);
  if ( !v12 || *(_QWORD *)(v12 + 488) <= v9 )
    goto LABEL_8;
  v13 = 128;
  if ( *(_QWORD *)(v12 + 472) <= v9 )
    goto LABEL_9;
  if ( *(_QWORD *)(v12 + 480) > v9 )
  {
LABEL_8:
    v13 = ((__int64 (__fastcall *)(unsigned __int64))*(&xmmword_2414B0 + 1))(v9);
    goto LABEL_9;
  }
  v13 = *(unsigned __int16 *)(v12 + 414);
LABEL_9:
  *(_DWORD *)(a1 + 32) = v13;
  if ( a3 )
  {
    v17 = *(const void **)(a1 + 8);
    if ( v17 )
      memcpy(*(void **)(a1 + 40), v17, *(int *)(a1 + 16));
  }
  v14 = *(_WORD *)(a1 + 20);
  if ( (v14 & 0x1000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 48))(*(_QWORD *)(a1 + 8));
    v14 = *(_WORD *)(a1 + 20);
  }
  v15 = *(_QWORD *)(a1 + 40);
  HIBYTE(v14) &= 0x8Fu;
  *(_WORD *)(a1 + 20) = v14;
  *(_QWORD *)(a1 + 8) = v15;
  return 0;
}
