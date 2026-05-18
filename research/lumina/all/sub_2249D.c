__int64 __fastcall sub_2249D(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  __int64 result; // rax

  v6 = *a1;
  v8 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 40LL);
  result = 0;
  if ( v8 )
  {
    if ( *(_BYTE *)(v6 + 101) && !*(_BYTE *)(v8 + 16) )
    {
      sub_11C990(v8, a2, a1);
      *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL) = 0;
      sub_D8BB0(v6);
      return 0;
    }
    else
    {
      sub_DBD10(
        (_DWORD)a1,
        (unsigned int)"temporary storage cannot be changed from within a transaction",
        (_DWORD)a1,
        a4,
        a5,
        a6);
      return 1;
    }
  }
  return result;
}
