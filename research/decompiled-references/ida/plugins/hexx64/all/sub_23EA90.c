__int64 __fastcall sub_23EA90(__int64 a1, __int64 a2, double a3)
{
  _DWORD *v3; // rax
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rdx

  v3 = *(_DWORD **)(a1 + 32);
  if ( *v3 == 2 )
  {
    if ( (_DWORD *)a2 != v3 + 12 )
      goto LABEL_4;
  }
  else if ( *v3 != 1 || (_DWORD *)a2 != v3 + 16 )
  {
LABEL_4:
    if ( *(_BYTE *)a2 == 10 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)v5 == 9 )
      {
        v6 = *(__int64 **)(v5 + 8);
        v7 = *v6;
        v8 = *((int *)v6 + 4);
        if ( *(_QWORD *)(v7 + 440) < v8 )
          sub_23E380(a3);
        v9 = (_DWORD *)(*(_QWORD *)(v7 + 432) + 104 * v8);
        if ( (unsigned int)(*v9 - 3) > 1 )
          v9[6] |= 0x400000u;
      }
    }
    return 0;
  }
  if ( *(_BYTE *)a2 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    if ( (unsigned int)(*(_DWORD *)v10 - 12) > 1 || *(_BYTE *)(v10 + 32) != 10 || **(_BYTE **)(v10 + 40) != 9 )
      return 0;
    sub_11E9B0(v10 + 48, a1, 0, 0, a3);
  }
  *(_BYTE *)(a1 + 40) = 1;
  return 0;
}

