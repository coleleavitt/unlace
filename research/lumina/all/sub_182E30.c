__int64 __fastcall sub_182E30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned int v4; // eax

  v1 = *(_QWORD *)(a1 + 560);
  v2 = v1;
  result = sub_181A60(a1, v1, 0, nullptr);
  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( (_DWORD)result )
      goto LABEL_3;
    v2 = v1;
    result = sub_1829C0(a1, v1);
  }
  if ( (_DWORD)result )
  {
LABEL_3:
    v4 = sub_18FA20(a1, v2);
    __longjmp_chk(a1 + 360, v4);
  }
  return result;
}
