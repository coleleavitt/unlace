__int64 __fastcall sub_24CBC0(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  int v4; // eax
  int v6; // r12d
  __int64 v7; // rbx
  _DWORD *v9; // rdx
  int v10; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  v4 = *(_DWORD *)a2;
  v11 = __readfsqword(0x28u);
  if ( (unsigned int)(v4 - 10) > 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCDD3u, a4);
    BUG();
  }
  v6 = 0;
  if ( v4 == 11 )
    v6 = *(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68);
  v7 = a2;
  if ( !(unsigned __int8)sub_122910(a2, &v10) )
    goto LABEL_7;
LABEL_5:
  v6 += v10;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int8)sub_122910(v7, &v10) )
      goto LABEL_5;
LABEL_7:
    if ( *(_BYTE *)(v7 + 32) != 4 )
      break;
    v9 = *(_DWORD **)(v7 + 40);
    if ( (unsigned int)(*v9 - 10) > 1 )
      break;
    if ( *v9 == 11 )
      v6 = v9[9] + v6 - v9[17];
  }
  return sub_24C540(a1, v7 + 32, *(__int64 **)(a2 + 24), v6, a2 + 64, a3, a4);
}

