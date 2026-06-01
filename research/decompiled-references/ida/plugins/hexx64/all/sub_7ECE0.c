__int64 __fastcall sub_7ECE0(unsigned __int8 **a1, unsigned __int8 **a2, double a3)
{
  unsigned __int8 *v3; // rax
  unsigned __int8 v4; // dl
  unsigned int v6; // r12d
  unsigned __int8 *v7; // rdx
  int v8; // eax

  v3 = *a2;
  if ( *a2 >= a2[1] )
    goto LABEL_11;
  v4 = *v3;
  *a2 = v3 + 1;
  *(_DWORD *)a1 = v4;
  if ( *a2 >= a2[1] )
    sub_7A510(a3);
  *((_DWORD *)a1 + 1) = unpack_dd();
  if ( !(unsigned __int8)sub_7D530(a2, (__int64 *)a1 + 1, a3) )
    return 0;
  v6 = sub_7D530(a2, (__int64 *)a1 + 4, a3);
  if ( !(_BYTE)v6 )
    return 0;
  *((_DWORD *)a1 + 14) = sub_7CD20(a2, a3);
  *((_DWORD *)a1 + 15) = sub_7CD20(a2, a3);
  *((_DWORD *)a1 + 16) = sub_7CD20(a2, a3);
  *((_DWORD *)a1 + 17) = sub_7CD20(a2, a3);
  if ( *((_DWORD *)a2 + 12) > 0xAu )
  {
    v8 = sub_7CD20(a2, a3);
    goto LABEL_9;
  }
  v7 = *a2;
  if ( *a2 >= a2[1] )
LABEL_11:
    sub_7A4F0(a3);
  v8 = *v7;
  *a2 = v7 + 1;
LABEL_9:
  *((_DWORD *)a1 + 18) = v8;
  sub_D0DA0((__int64)a1, (__int64 *)a1 + 11, a1 + 1);
  sub_D0DA0((__int64)a1, (__int64 *)a1 + 14, a1 + 4);
  return v6;
}

