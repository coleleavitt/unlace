__int64 __fastcall sub_240C0(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int64 v5; // rax
  _DWORD *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rdx
  bool v11; // cf
  __int64 result; // rax
  unsigned __int64 v13; // rdx

  if ( a2 > 5 )
    goto LABEL_16;
  v5 = *(int *)(a1 + 4LL * (int)a2 + 40);
  if ( (_DWORD)v5 == -1 )
    return 0;
  if ( (v5 & 0x80000000) != 0LL || v5 >= *(_QWORD *)(a1 + 24) )
  {
    if ( under_debugger )
      goto LABEL_17;
    a1 = 20030;
    interr();
LABEL_16:
    sub_22630(a1, a2);
LABEL_17:
    BUG();
  }
  v7 = (_DWORD *)(*(_QWORD *)(a1 + 16) + 44 * v5);
  v8 = *v7 + a3;
  v9 = v7[1];
  if ( v9 < a3 )
  {
    sub_A980((__int64)"AUTOHIDE REGISTRY\nStream offset overrun for stream %d (size %u, offset %u)", a2, v9, a3);
    return 0;
  }
  v10 = v9 - a3;
  if ( a4 )
    *a4 = v10;
  v11 = __CFADD__(*(_QWORD *)a1, v8);
  result = *(_QWORD *)a1 + v8;
  if ( v11 )
    return 0;
  v11 = __CFADD__(result, v10);
  v13 = result + v10;
  if ( v11 || *(_QWORD *)(a1 + 8) + *(_QWORD *)a1 < v13 )
    return 0;
  return result;
}

