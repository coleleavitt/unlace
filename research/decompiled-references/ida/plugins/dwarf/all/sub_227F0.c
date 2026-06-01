__int64 __fastcall sub_227F0(__int64 a1, __int64 a2, const char *a3, unsigned int *a4, int a5, int a6)
{
  unsigned int v8; // r12d
  __int64 v9; // rax

  if ( (debug & 0x400000) != 0 )
    sub_88B80((unsigned int)"found matching binary: %s\n", (_DWORD)a3, (_DWORD)a3, (_DWORD)a4, a5, a6);
  v8 = sub_21FF0(a3, (__int64)a4, (__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64))sub_14F20, a2);
  if ( v8 || !(unsigned __int8)sub_8DDA0(a1, *a4, a4[1]) )
  {
    return (unsigned int)-1;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 440) )
      sub_90050(a1);
    v9 = *(_QWORD *)(a1 + 448);
    if ( v9 == -1 )
      v9 = 0;
    *(_QWORD *)(a2 + 8) = v9;
  }
  return v8;
}

