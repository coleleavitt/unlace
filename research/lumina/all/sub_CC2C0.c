__int64 __fastcall sub_CC2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // al

  v2 = sub_CC270((__int64 *)(*(_QWORD *)a1 + 288LL), a2);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(v2 + 16);
  if ( (_DWORD)a2 != *(_DWORD *)(v3 + 4) )
  {
    v4 = *(_QWORD *)(v2 + 8);
    *(_QWORD *)(v3 + 112) = v2;
    v5 = 100;
    *(_QWORD *)(v3 + 72) = a1;
    *(_DWORD *)(v3 + 4) = a2;
    *(_QWORD *)(v3 + 80) = v4;
    if ( (_DWORD)a2 != 1 )
      v5 = 0;
    *(_BYTE *)(v3 + 9) = v5;
  }
  return v3;
}
