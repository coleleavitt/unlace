unsigned __int64 __fastcall sub_16540(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char v5[136]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v6; // [rsp+88h] [rbp-30h]

  v3 = a3;
  v6 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 84LL) != a3 )
  {
    btoa64();
    sub_15F70(a2, (__int64)"assume %s = %s", *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v3), v5);
  }
  return v6 - __readfsqword(0x28u);
}

