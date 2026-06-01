unsigned __int64 __fastcall sub_13890(__int64 a1, _QWORD *a2, int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v6; // edx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // r9d
  __int64 v11; // rdx
  _DWORD *v12; // rdx
  __int64 *v13; // rax
  bool v15; // r12

  v6 = *a5;
  if ( *a5 > 0x2F )
  {
    v12 = *((_DWORD **)a5 + 1);
    v13 = (__int64 *)(v12 + 2);
    *((_QWORD *)a5 + 1) = v12 + 2;
    v10 = *v12;
  }
  else
  {
    v8 = *((_QWORD *)a5 + 2);
    v9 = v6 + 8;
    *a5 = v9;
    v10 = *(_DWORD *)(v8 + v6);
    if ( (unsigned int)v9 <= 0x2F )
    {
      *a5 = v6 + 16;
      v11 = *(_QWORD *)(v9 + v8);
      if ( v10 == 1 )
        goto LABEL_4;
LABEL_10:
      if ( v10 != 2 )
      {
        *(_WORD *)(a1 + 184) &= ~(_WORD)a3;
        if ( *a2 != -1 )
          goto LABEL_6;
        return sub_13690(a1);
      }
LABEL_5:
      *(_WORD *)(a1 + 184) |= a3;
      if ( *a2 != -1 )
      {
LABEL_6:
        *a2 = -1;
        set_default_sreg_value(0, a4);
      }
      return sub_13690(a1);
    }
    v13 = *((__int64 **)a5 + 1);
  }
  *((_QWORD *)a5 + 1) = v13 + 1;
  v11 = *v13;
  if ( v10 != 1 )
    goto LABEL_10;
LABEL_4:
  if ( v11 == -1 )
    goto LABEL_5;
  v15 = v11 != -1 && a3 != 0;
  if ( v11 != *a2 )
  {
    *a2 = v11;
    set_default_sreg_value(0, a4);
  }
  if ( !v15 )
    return sub_13690(a1);
  *(_WORD *)(a1 + 184) |= a3;
  return sub_13690(a1);
}

