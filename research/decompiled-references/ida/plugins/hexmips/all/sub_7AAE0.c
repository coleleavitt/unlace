__int64 __fastcall sub_7AAE0(unsigned __int8 **a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 v3; // dl
  _DWORD *v4; // rbp
  unsigned int v6; // r12d
  unsigned __int8 *v7; // rdx
  int v8; // eax

  v2 = *a2;
  if ( *a2 >= a2[1] )
    goto LABEL_11;
  v3 = *v2;
  v4 = a1;
  *a2 = v2 + 1;
  *(_DWORD *)a1 = v3;
  if ( *a2 >= a2[1] )
    sub_76310(a1);
  *((_DWORD *)a1 + 1) = unpack_dd();
  if ( !(unsigned __int8)sub_79330(a2, (__int64 *)a1 + 1) )
    return 0;
  v6 = sub_79330(a2, (__int64 *)a1 + 4);
  if ( !(_BYTE)v6 )
    return 0;
  *((_DWORD *)a1 + 14) = sub_78B20(a2);
  *((_DWORD *)a1 + 15) = sub_78B20(a2);
  a1 = a2;
  v4[16] = sub_78B20(a2);
  v4[17] = sub_78B20(a2);
  if ( *((_DWORD *)a2 + 12) > 0xAu )
  {
    v8 = sub_78B20(a2);
    goto LABEL_9;
  }
  v7 = *a2;
  if ( *a2 >= a2[1] )
LABEL_11:
    sub_762F0(a1);
  v8 = *v7;
  *a2 = v7 + 1;
LABEL_9:
  v4[18] = v8;
  sub_CCBA0(v4, v4 + 22, v4 + 2);
  sub_CCBA0(v4, v4 + 28, v4 + 8);
  return v6;
}

