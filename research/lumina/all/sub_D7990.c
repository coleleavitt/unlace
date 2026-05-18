__int64 __fastcall sub_D7990(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // r12
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rsi
  int v6; // eax
  __int16 v7; // dx
  bool v8; // zf
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 144);
  v2 = *(_QWORD *)a1;
  if ( v1 )
    goto LABEL_4;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 184);
    if ( !v3 )
      break;
    *(_QWORD *)(a1 + 184) = *(_QWORD *)v3;
    (*(void (__fastcall **)(__int64, _QWORD))(v3 + 16))(v2, *(_QWORD *)(v3 + 8));
    v1 = (_QWORD *)v3;
LABEL_4:
    sub_C9250(v2, v1);
  }
  v4 = *(_QWORD **)(a1 + 80);
  if ( v4 )
    sub_C9250(v2, v4);
  v5 = *(_QWORD **)(a1 + 88);
  if ( v5 )
    sub_D7810(v2, v5);
  v6 = *(unsigned __int8 *)(a1 + 36);
  v7 = 0;
  v8 = *(_DWORD *)(v2 + 408) == v6;
  *(_DWORD *)(v2 + 408) -= v6;
  if ( v8 )
    v7 = *(_WORD *)(v2 + 414);
  *(_WORD *)(v2 + 412) = v7;
  result = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v2 + 344) = result;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 36) = 0;
  return result;
}
