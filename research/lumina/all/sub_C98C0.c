void (*__fastcall sub_C98C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6))()
{
  char *v6; // r12
  void (*v7)(); // rbp
  __int64 v8; // rbx
  void (*result)(); // rax

  v6 = (char *)a3;
  v7 = (void (*)())a4;
  v8 = *a1;
  if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 || (a4 = *(unsigned int *)(v8 + 32), (_DWORD)a4) )
    sub_C9690(*a1, a2, a3, a4, a5, a6);
  *(_WORD *)(v8 + 20) = 1;
  sub_C9690(v8, a2, a3, a4, a5, a6);
  *(_QWORD *)(v8 + 8) = a2;
  *(_WORD *)(v8 + 20) = 6657;
  if ( !v6 )
    v6 = "";
  result = nullsub_58;
  *(_QWORD *)v8 = v6;
  *(_BYTE *)(v8 + 23) = 112;
  if ( !v7 )
    v7 = nullsub_58;
  *(_QWORD *)(v8 + 48) = v7;
  return result;
}
