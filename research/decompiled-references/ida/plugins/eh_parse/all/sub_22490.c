__int64 __fastcall sub_22490(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int64 dword; // r14
  unsigned int v8; // eax
  unsigned __int64 v10; // [rsp+0h] [rbp-48h]

  v3 = 0;
  v4 = (unsigned int)(*(_DWORD *)(a1 + 56) - 1);
  v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (unsigned int)(a3 - *(_DWORD *)(a1 + 32));
  while ( 1 )
  {
    v5 = v3 + (v4 - v3) / 2;
    v6 = *(_QWORD *)(a1 + 40) + v5 * *(_QWORD *)(a1 + 24);
    dword = (unsigned int)get_dword(v6);
    if ( v10 >= dword )
      break;
    v4 = v5 - 1;
LABEL_8:
    if ( v4 < v3 )
      return -1;
  }
  v8 = get_dword(v6 + 4);
  if ( v10 >= v8 )
  {
    v3 = v5 + 1;
    goto LABEL_8;
  }
  if ( a2 )
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (dword + *(_QWORD *)(a1 + 32));
    a2[1] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (*(_QWORD *)(a1 + 32) + v8);
  }
  return v6;
}

