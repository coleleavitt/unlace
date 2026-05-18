__int64 __fastcall sub_111D20(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v5; // zf
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 v9; // si
  void *v10; // rbp
  int v11; // eax
  __int64 result; // rax

  v5 = *(_DWORD *)(a2 + 4) == 1;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 80);
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_BYTE *)(a1 + 9);
  v10 = (void *)(v8 + 100);
  if ( !v5 )
    v10 = (void *)v8;
  v11 = *(unsigned __int8 *)(v7 + v9 + 6) | (*(unsigned __int8 *)(v7 + v9 + 5) << 8);
  memcpy((void *)(v11 + v8), (const void *)(v7 + v11), (unsigned int)(*(_DWORD *)(v6 + 56) - v11));
  memcpy(v10, (const void *)(v7 + v9), *(unsigned __int16 *)(a1 + 18) + 2 * *(unsigned __int16 *)(a1 + 24));
  *(_BYTE *)a2 = 0;
  result = sub_EBBD0(a2);
  if ( (_DWORD)result )
    goto LABEL_4;
  result = sub_E9270(a2);
  if ( (_DWORD)result )
    goto LABEL_4;
  if ( *(_BYTE *)(v6 + 33) )
  {
    result = sub_111BE0(a2);
LABEL_4:
    *a3 = result;
  }
  return result;
}
