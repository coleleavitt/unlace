__int64 __fastcall sub_CA220(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 result; // rax

  v7 = a1[49];
  if ( v7 )
  {
    if ( (*(_WORD *)(v7 + 20) & 0x9000) != 0 )
    {
      result = sub_C93F0(v7, a2, a3, a4, a5, a6);
    }
    else
    {
      result = 1;
      *(_WORD *)(v7 + 20) = 1;
    }
  }
  if ( (_DWORD)a2 != 3082 && (a2 & 0xFB) == 0xA )
    return sub_CA1F0(a1);
  return result;
}
