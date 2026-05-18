__int64 __fastcall sub_D0650(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r12
  int v8; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rdi
  _BYTE *v14; // rcx
  __int64 v15; // rcx

  v6 = (_QWORD *)(a1 + 136);
  v8 = a4;
  sub_D0600(*(_QWORD *)a1, (_QWORD *)(a1 + 136), a4, a4, a5, a6);
  result = (unsigned int)(v8 + 1);
  if ( v8 + 1 < 0 )
    result = (unsigned int)(*(_DWORD *)(a1 + 144) - 1);
  v13 = *(_QWORD *)a1;
  v14 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    v15 = 3LL * (int)result;
    result = *(_QWORD *)(a1 + 136);
    v14 = (_BYTE *)(result + 8 * v15);
  }
  if ( *v14 == 0xB8 )
    result = sub_D0600(v13, v6, v8 + 1, (__int64)v14, v10, v11);
  if ( a2 == 2 )
  {
    if ( v8 < 0 )
      v8 = *(_DWORD *)(a1 + 144) - 1;
    result = (__int64)&unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
      result = *(_QWORD *)(a1 + 136) + 24LL * v8;
    *(_BYTE *)result = 75;
    *(_DWORD *)(result + 4) = 1;
    *(_DWORD *)(result + 8) = a3;
  }
  return result;
}
