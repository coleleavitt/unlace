__int64 __fastcall sub_247800(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  int v5; // r12d
  __int64 v6; // rbx
  _DWORD *v8; // rdx
  int v9; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v3 = *(_DWORD *)a2;
  v10 = __readfsqword(0x28u);
  if ( (unsigned int)(v3 - 10) > 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(52691);
    BUG();
  }
  v5 = 0;
  if ( v3 == 11 )
    v5 = *(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68);
  v6 = a2;
  if ( !(unsigned __int8)sub_11DD50(a2, &v9) )
    goto LABEL_7;
LABEL_5:
  v5 += v9;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int8)sub_11DD50(v6, &v9) )
      goto LABEL_5;
LABEL_7:
    if ( *(_BYTE *)(v6 + 32) != 4 )
      break;
    v8 = *(_DWORD **)(v6 + 40);
    if ( (unsigned int)(*v8 - 10) > 1 )
      break;
    if ( *v8 == 11 )
      v5 = v8[9] + v5 - v8[17];
  }
  return sub_247180(a1, v6 + 32, *(__int64 **)(a2 + 24), v5, a2 + 64, a3);
}

