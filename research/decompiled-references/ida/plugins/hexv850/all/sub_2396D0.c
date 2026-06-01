__int64 __fastcall sub_2396D0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rdx

  v2 = *(_DWORD **)(a1 + 32);
  if ( *v2 == 2 )
  {
    if ( (_DWORD *)a2 != v2 + 12 )
      goto LABEL_4;
  }
  else if ( *v2 != 1 || (_DWORD *)a2 != v2 + 16 )
  {
LABEL_4:
    if ( *(_BYTE *)a2 == 10 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)v4 == 9 )
      {
        v5 = *(__int64 **)(v4 + 8);
        v6 = *v5;
        v7 = *((int *)v5 + 4);
        if ( *(_QWORD *)(v6 + 440) < v7 )
          sub_238FC0();
        v8 = (_DWORD *)(*(_QWORD *)(v6 + 432) + 104 * v7);
        if ( (unsigned int)(*v8 - 3) > 1 )
          v8[6] |= 0x400000u;
      }
    }
    return 0;
  }
  if ( *(_BYTE *)a2 == 4 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    if ( (unsigned int)(*(_DWORD *)v9 - 12) > 1 || *(_BYTE *)(v9 + 32) != 10 || **(_BYTE **)(v9 + 40) != 9 )
      return 0;
    sub_119DF0(v9 + 48, a1, 0, 0);
  }
  *(_BYTE *)(a1 + 40) = 1;
  return 0;
}

