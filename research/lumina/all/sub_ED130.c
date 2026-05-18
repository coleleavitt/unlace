unsigned __int64 __fastcall sub_ED130(__int64 a1, unsigned int a2, unsigned __int8 a3, int a4)
{
  __int64 v7; // rdi
  int v8; // eax
  unsigned __int8 v10; // [rsp+3h] [rbp-35h] BYREF
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v7 = *(_QWORD *)a1;
  v12 = __readfsqword(0x28u);
  v8 = sub_EBFF0(v7, a2, &v10, &v11);
  if ( v8 )
  {
    if ( v8 == 7 || v8 == 3082 )
      *(_DWORD *)(a1 + 36) = 1;
    sub_ECFF0(a1, "Failed to read ptrmap key=%d", a2);
  }
  else if ( v10 != a3 || a4 != v11 )
  {
    sub_ECFF0(a1, "Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)", a2, a3, a4, v10, v11);
  }
  return __readfsqword(0x28u) ^ v12;
}
