__int64 __fastcall sub_F2480(__int64 *a1, unsigned __int8 *a2, double a3)
{
  __int64 v4; // rdi
  char v5; // bp
  unsigned __int8 v6; // r13
  __int64 result; // rax

  v4 = *a1;
  v5 = *(_BYTE *)(v4 + 197);
  v6 = *(_BYTE *)(v4 + 100);
  if ( a2 )
    result = sub_E31C0(v4, *(_BYTE *)(v4 + 100), a2);
  else
    result = *(_QWORD *)(v4 + 16);
  if ( !v5 && (!result || !*(_QWORD *)(result + 24)) )
    return sub_F2280((__int64)a1, v6, result, a2, a3);
  return result;
}
