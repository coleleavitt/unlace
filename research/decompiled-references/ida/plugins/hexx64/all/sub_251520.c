_DWORD *__fastcall sub_251520(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  int v6; // r12d
  _QWORD *v7; // rdx
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v11; // rax

  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v5 == sub_650D0 )
    v6 = **(_DWORD **)(a1[6] + 24LL * (int)a2);
  else
    v6 = v5((__int64)a1, a2, 0);
  v7 = (_QWORD *)a1[30];
  if ( !v7 )
  {
LABEL_6:
    sub_250510((__int64)a1, (unsigned int)v6, a3, 0, a4);
    return sub_241550(a1, v6, a3, a4);
  }
  v8 = 24;
  v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
    while ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v8 = v9 + 24;
      if ( v6 < *(_DWORD *)(v9 + 24) )
      {
        v9 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        if ( v6 <= *(_DWORD *)(v9 + 24) )
        {
          if ( v7 == (_QWORD *)v9 )
            goto LABEL_6;
          goto LABEL_8;
        }
        v9 = *(_QWORD *)(v9 + 16);
      }
    }
    goto LABEL_6;
  }
LABEL_8:
  v11 = sub_2414F0(a1, v6, a4);
  return sub_241460((__int64)a1, a3, *(_DWORD *)(v8 + 4), v11, a4);
}

