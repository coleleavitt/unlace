__int64 __fastcall sub_7EF80(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // r12d
  unsigned __int8 *v5; // rax
  unsigned __int8 v6; // dl

  if ( !(unsigned __int8)sub_7ECE0((unsigned __int8 **)(a1 + 8), (unsigned __int8 **)a2, a3) )
    return 0;
  v4 = sub_7ECE0((unsigned __int8 **)(a1 + 144), (unsigned __int8 **)a2, a3);
  if ( !(_BYTE)v4 )
    return 0;
  v5 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_7A4F0(a3);
  v6 = *v5;
  *(_QWORD *)a2 = v5 + 1;
  *(_BYTE *)(a1 + 288) = v6;
  sub_7D080(a1 + 296, a2, a3);
  *(_DWORD *)(a1 + 352) = sub_7CD20((_QWORD *)a2, a3);
  return v4;
}

